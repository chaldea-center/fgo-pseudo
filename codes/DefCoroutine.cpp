void __fastcall DefCoroutine___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_WaitForSeconds_o *v3; // x19
  struct DefCoroutine_StaticFields *static_fields; // x0
  UnityEngine_WaitForSeconds_o *v5; // x19
  struct DefCoroutine_StaticFields *v6; // x0
  UnityEngine_WaitForSeconds_o *v7; // x19
  struct DefCoroutine_StaticFields *v8; // x0
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

  if ( (byte_4183692 & 1) == 0 )
  {
    sub_B2C35C(&DefCoroutine_TypeInfo, v1);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v2);
    byte_4183692 = 1;
  }
  v3 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v3, 0.01, 0LL);
  static_fields = DefCoroutine_TypeInfo->static_fields;
  static_fields->milliSecPointOne = v3;
  sub_B2C2F8(static_fields, v3);
  v5 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v5, 0.1, 0LL);
  v6 = DefCoroutine_TypeInfo->static_fields;
  v6->milliSecOne = v5;
  sub_B2C2F8(&v6->milliSecOne, v5);
  v7 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v7, 0.2, 0LL);
  v8 = DefCoroutine_TypeInfo->static_fields;
  v8->milliSecTwo = v7;
  sub_B2C2F8(&v8->milliSecTwo, v7);
  v9 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v9, 0.266, 0LL);
  v10 = DefCoroutine_TypeInfo->static_fields;
  v10->milliSecTwoSixSix = v9;
  sub_B2C2F8(&v10->milliSecTwoSixSix, v9);
  v11 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v11, 0.3, 0LL);
  v12 = DefCoroutine_TypeInfo->static_fields;
  v12->milliSecThree = v11;
  sub_B2C2F8(&v12->milliSecThree, v11);
  v13 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v13, 0.333, 0LL);
  v14 = DefCoroutine_TypeInfo->static_fields;
  v14->milliSecThreeThreeThree = v13;
  sub_B2C2F8(&v14->milliSecThreeThreeThree, v13);
  v15 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v15, 0.366, 0LL);
  v16 = DefCoroutine_TypeInfo->static_fields;
  v16->milliSecThreeSixSix = v15;
  sub_B2C2F8(&v16->milliSecThreeSixSix, v15);
  v17 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v17, 0.4, 0LL);
  v18 = DefCoroutine_TypeInfo->static_fields;
  v18->milliSecFour = v17;
  sub_B2C2F8(&v18->milliSecFour, v17);
  v19 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v19, 0.5, 0LL);
  v20 = DefCoroutine_TypeInfo->static_fields;
  v20->milliSecFive = v19;
  sub_B2C2F8(&v20->milliSecFive, v19);
  v21 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v21, 0.6, 0LL);
  v22 = DefCoroutine_TypeInfo->static_fields;
  v22->milliSecSix = v21;
  sub_B2C2F8(&v22->milliSecSix, v21);
  v23 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v23, 0.7, 0LL);
  v24 = DefCoroutine_TypeInfo->static_fields;
  v24->milliSecSeven = v23;
  sub_B2C2F8(&v24->milliSecSeven, v23);
  v25 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v25, 0.8, 0LL);
  v26 = DefCoroutine_TypeInfo->static_fields;
  v26->milliSecEight = v25;
  sub_B2C2F8(&v26->milliSecEight, v25);
  v27 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v27, 0.866, 0LL);
  v28 = DefCoroutine_TypeInfo->static_fields;
  v28->milliSecEightSixSix = v27;
  sub_B2C2F8(&v28->milliSecEightSixSix, v27);
  v29 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v29, 0.9, 0LL);
  v30 = DefCoroutine_TypeInfo->static_fields;
  v30->milliSecNine = v29;
  sub_B2C2F8(&v30->milliSecNine, v29);
  v31 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v31, 1.0, 0LL);
  v32 = DefCoroutine_TypeInfo->static_fields;
  v32->milliSecTen = v31;
  sub_B2C2F8(&v32->milliSecTen, v31);
  v33 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v33, 1.1, 0LL);
  v34 = DefCoroutine_TypeInfo->static_fields;
  v34->milliSecEleven = v33;
  sub_B2C2F8(&v34->milliSecEleven, v33);
  v35 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v35, 1.2, 0LL);
  v36 = DefCoroutine_TypeInfo->static_fields;
  v36->milliSecTwelve = v35;
  sub_B2C2F8(&v36->milliSecTwelve, v35);
  v37 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v37, 1.4, 0LL);
  v38 = DefCoroutine_TypeInfo->static_fields;
  v38->milliSecFourTeen = v37;
  sub_B2C2F8(&v38->milliSecFourTeen, v37);
}