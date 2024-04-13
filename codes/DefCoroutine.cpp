void __fastcall DefCoroutine___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_WaitForSeconds_o *v7; // x19
  struct DefCoroutine_StaticFields *static_fields; // x0
  UnityEngine_WaitForSeconds_o *v9; // x19
  struct DefCoroutine_StaticFields *v10; // x0
  UnityEngine_WaitForSeconds_o *v11; // x19
  struct DefCoroutine_StaticFields *v12; // x0
  UnityEngine_WaitForSeconds_o *v13; // x19
  struct DefCoroutine_StaticFields *v14; // x0
  UnityEngine_WaitForSeconds_o *v15; // x19
  struct DefCoroutine_StaticFields *v16; // x0
  UnityEngine_WaitForSeconds_o *v17; // x19
  struct DefCoroutine_StaticFields *v18; // x0
  UnityEngine_WaitForSeconds_o *v19; // x19
  struct DefCoroutine_StaticFields *v20; // x0
  UnityEngine_WaitForSeconds_o *v21; // x19
  struct DefCoroutine_StaticFields *v22; // x0
  UnityEngine_WaitForSeconds_o *v23; // x19
  struct DefCoroutine_StaticFields *v24; // x0
  UnityEngine_WaitForSeconds_o *v25; // x19
  struct DefCoroutine_StaticFields *v26; // x0
  UnityEngine_WaitForSeconds_o *v27; // x19
  struct DefCoroutine_StaticFields *v28; // x0
  UnityEngine_WaitForSeconds_o *v29; // x19
  struct DefCoroutine_StaticFields *v30; // x0
  UnityEngine_WaitForSeconds_o *v31; // x19
  struct DefCoroutine_StaticFields *v32; // x0
  UnityEngine_WaitForSeconds_o *v33; // x19
  struct DefCoroutine_StaticFields *v34; // x0
  UnityEngine_WaitForSeconds_o *v35; // x19
  struct DefCoroutine_StaticFields *v36; // x0
  UnityEngine_WaitForSeconds_o *v37; // x19
  struct DefCoroutine_StaticFields *v38; // x0
  UnityEngine_WaitForSeconds_o *v39; // x19
  struct DefCoroutine_StaticFields *v40; // x0
  UnityEngine_WaitForSeconds_o *v41; // x19
  struct DefCoroutine_StaticFields *v42; // x0

  if ( (byte_42E44F2 & 1) == 0 )
  {
    sub_B5D5C4(&DefCoroutine_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v4, v5, v6);
    byte_42E44F2 = 1;
  }
  v7 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v7, 0.01, 0LL);
  static_fields = DefCoroutine_TypeInfo->static_fields;
  static_fields->milliSecPointOne = v7;
  sub_B5D560(static_fields);
  v9 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v9, 0.1, 0LL);
  v10 = DefCoroutine_TypeInfo->static_fields;
  v10->milliSecOne = v9;
  sub_B5D560(&v10->milliSecOne);
  v11 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v11, 0.2, 0LL);
  v12 = DefCoroutine_TypeInfo->static_fields;
  v12->milliSecTwo = v11;
  sub_B5D560(&v12->milliSecTwo);
  v13 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v13, 0.266, 0LL);
  v14 = DefCoroutine_TypeInfo->static_fields;
  v14->milliSecTwoSixSix = v13;
  sub_B5D560(&v14->milliSecTwoSixSix);
  v15 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v15, 0.3, 0LL);
  v16 = DefCoroutine_TypeInfo->static_fields;
  v16->milliSecThree = v15;
  sub_B5D560(&v16->milliSecThree);
  v17 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v17, 0.333, 0LL);
  v18 = DefCoroutine_TypeInfo->static_fields;
  v18->milliSecThreeThreeThree = v17;
  sub_B5D560(&v18->milliSecThreeThreeThree);
  v19 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v19, 0.366, 0LL);
  v20 = DefCoroutine_TypeInfo->static_fields;
  v20->milliSecThreeSixSix = v19;
  sub_B5D560(&v20->milliSecThreeSixSix);
  v21 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v21, 0.4, 0LL);
  v22 = DefCoroutine_TypeInfo->static_fields;
  v22->milliSecFour = v21;
  sub_B5D560(&v22->milliSecFour);
  v23 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v23, 0.5, 0LL);
  v24 = DefCoroutine_TypeInfo->static_fields;
  v24->milliSecFive = v23;
  sub_B5D560(&v24->milliSecFive);
  v25 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v25, 0.6, 0LL);
  v26 = DefCoroutine_TypeInfo->static_fields;
  v26->milliSecSix = v25;
  sub_B5D560(&v26->milliSecSix);
  v27 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v27, 0.7, 0LL);
  v28 = DefCoroutine_TypeInfo->static_fields;
  v28->milliSecSeven = v27;
  sub_B5D560(&v28->milliSecSeven);
  v29 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v29, 0.8, 0LL);
  v30 = DefCoroutine_TypeInfo->static_fields;
  v30->milliSecEight = v29;
  sub_B5D560(&v30->milliSecEight);
  v31 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v31, 0.866, 0LL);
  v32 = DefCoroutine_TypeInfo->static_fields;
  v32->milliSecEightSixSix = v31;
  sub_B5D560(&v32->milliSecEightSixSix);
  v33 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v33, 0.9, 0LL);
  v34 = DefCoroutine_TypeInfo->static_fields;
  v34->milliSecNine = v33;
  sub_B5D560(&v34->milliSecNine);
  v35 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v35, 1.0, 0LL);
  v36 = DefCoroutine_TypeInfo->static_fields;
  v36->milliSecTen = v35;
  sub_B5D560(&v36->milliSecTen);
  v37 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v37, 1.1, 0LL);
  v38 = DefCoroutine_TypeInfo->static_fields;
  v38->milliSecEleven = v37;
  sub_B5D560(&v38->milliSecEleven);
  v39 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v39, 1.2, 0LL);
  v40 = DefCoroutine_TypeInfo->static_fields;
  v40->milliSecTwelve = v39;
  sub_B5D560(&v40->milliSecTwelve);
  v41 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v41, 1.4, 0LL);
  v42 = DefCoroutine_TypeInfo->static_fields;
  v42->milliSecFourTeen = v41;
  sub_B5D560(&v42->milliSecFourTeen);
}