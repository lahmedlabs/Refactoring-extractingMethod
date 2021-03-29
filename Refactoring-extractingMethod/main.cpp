#include "Banner.h"
#include "BannerAR.h"
#include "Prompt.h"
#include "PromptAR.h"


int main() {
	Banner hello = Banner("Hello World!");
	hello.print(3);
	BannerAR helloAr = BannerAR("Hello World!");
	helloAr.print(3);

	Prompt promt = Prompt();
	promt.processUserReqest();
	PromptAR promtAr = PromptAR();
	promtAr.processUserReqest();
}