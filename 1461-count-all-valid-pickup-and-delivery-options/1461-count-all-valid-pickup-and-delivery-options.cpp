class Solution {
public:
    int mod=1e9+7;
    vector<int> v={1,1,6,90,2520,113400,7484400,681080400,729647433,636056472,850728840,518360668,67543367,951594128,702577871,621371750,200385844,416457700,368349166,949461892,580270580,612965887,865725049,25419443,673131508,586091532,157365993,190734408,730986269,320294201,920731808,103836741,334868393,292697959,765945940,759432157,108579705,273781154,276283440,679164517,159858698,890732348,92943393,708099042,603113806,470776125,668845460,523485199,92490731,608441370,784760423,300910579,677049847,782372186,546459068,22089728,309748289,88715484,732274143,888373751,988537746,397052154,919705215,678517431,989640570,136121364,905304912,172014363,91841287,175679935,365755587,579155830,988383946,43995176,579521182,149163518,800520591,933016561,170143530,290187820,189044563,330128828,501884164,303577869,590316526,896836637,879491406,225059047,909299545,195632117,633382813,448239899,566886742,286327839,70718711,754447122,542332161,315010,19841058,960151472,14159051,442892342,528769262,962888982,73859393,844368045,135562275,599787902,74986951,666339592,120658916,883847683,979576090,721913915,688161603,735688151,499556205,401609179,622455718,118491869,346779134,426255790,779061888,29830541,649803357,129345050,666522670,39759858,761756041,497850495,626049316,252013521,901333800,509558631,988572308,3113720,759263522,214787543,187199793,753579430,812329762,317274907,9323452,977283607,176627373,570013758,604352869,82238489,532404610,501041410,707081203,547532594,160972745,793092848,843405279,895554947,743504516,555165004,562055670,291736707,241421050,881197718,551469305,86227877,228555388,129150731,316015854,957533783,930010,966859166,93346540,130055839,774223940,555535437,118380392,82390790,773407417,268483316,460619285,953963317,109113025,554116622,268492796,976183289,704678159,854187407,55794834,745439097,455970629,275000714,801276526,693665383,377247225,354857408,984291337,418845494,643053498,844520163,921485887,149021061,880584563,995865538,429418945,678316047,224356083,135647458,727598640,134896819,293334572,987774568,283629922,129424817,299808050,123536270,497201044,337972327,871534151,219788881,579439336,82385030,746141708,716494355,353343582,50114322,846798097,777150596,851093419,786756563,125274294,330598212,252996533,853607116,61330419,844200047,492090302,732255285,567889702,3038275,476986349,874364408,931640068,647566656,475623379,592939667,834257077,168410349,612271927,964300825,568448361,189526404,418733499,155864157,716946400,656154800,302242914,618748027,141333438,541668927,549826693,443157418,661566327,450082067,944881038,448408602,191542354,364707533,479845527,296314888,628344045,181697023,367572096,112189426,929346513,819968801,283096013,420263495,990818243,528218565,841823364,875319945,76832365,930766188,23569590,659566674,701637416,30769173,790530770,574747249,143768154,770816151,739008421,891872283,768905992,330636202,534069336,216827101,865475026,325987150,781161900,741659627,234038968,883053809,395816091,26213752,171195197,651644179,304718069,197721764,456274716,142820618,848196185,976258551,230780849,503269603,712205860,907083316,783611060,177809980,169010065,351997794,508413288,625819891,504244975,876131268,644162677,11695135,11703136,982315730,709955920,100901547,59272489,287050023,302420380,480580317,721111192,833663803,505053490,635783668,42838822,638096649,991356970,905318879,814189811,965704426,993990174,432656738,168137374,162180130,885967232,185577098,436707893,413028379,349838382,528326996,622979292,771802340,519723955,54303618,97002160,646815704,775651413,324013844,846741130,95327863,421553382,30864287,616471903,721937074,538408637,843033114,542747450,243182501,670075898,39612302,805630694,519593283,671853368,404626126,249290808,280186970,525321723,304622159,1573585,52533848,689075440,118715523,451690628,702110967,766299032,179697784,983374889,171126761,963146628,548391195,43772902,43677316,307658809,453230190,563414058,359432005,467993882,101840042,576367734,337116736,494435245,234714032,349919531,222721626,394559107,108358470,690386605,840881056,582948402,92881075,436473750,245530116,778386590,142396323,588268790,628015221,2026880,639154661,712440474,159041633,303176212,555929149,769259608,194320132,508606317,636955071,92928366,880025918,740348479,819126004,92375579,354251252,37512809,174046132,179622079,38797152,186402485,279367738,316229837,487877182,693487723,208736986,155337953,405602921,546065750,617470247,586675271,81377349,653025946,780077871,903316112,24727391,153787752,554983070,753516868,508071705,231068226,177776557,545564626,688564593,909184714,155928012,743820616,822149346,108304388,687886606,993700892,162961279,412930053,538448194,546734453,221325897,921049056,397994699,598874750,980102575,814165880,847902700,601893231,423539172,190205220,795591577,436107654,46509004,983948304,250790324,625483898,452524619,195102685,838686231,952276050,498394413,794473522,364306339,432774271,496638171,764678010,784008608};
    int countOrders(int n) {
        //if(dp[n]!=-1) return dp[n];        
        /*
        for(int i=2;i<=501;++i){
            pre=(pre*((i+i)-1)*i)%mod;
            v[i]=pre;
        }
        for(auto i:v) cout<<i<<',';
        return pre;*/
        return v[n];
        

    }
};