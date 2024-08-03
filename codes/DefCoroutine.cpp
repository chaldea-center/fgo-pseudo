void __fastcall DefCoroutine___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  UnityEngine_WaitForSeconds_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_WaitForSeconds_o *v9; // x19
  struct DefCoroutine_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_WaitForSeconds_o *v15; // x19
  struct DefCoroutine_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_WaitForSeconds_o *v21; // x19
  struct DefCoroutine_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_WaitForSeconds_o *v27; // x19
  struct DefCoroutine_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_WaitForSeconds_o *v33; // x19
  struct DefCoroutine_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_WaitForSeconds_o *v39; // x19
  struct DefCoroutine_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_WaitForSeconds_o *v45; // x19
  struct DefCoroutine_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_WaitForSeconds_o *v51; // x19
  struct DefCoroutine_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_WaitForSeconds_o *v57; // x19
  struct DefCoroutine_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x1
  __int64 v62; // x2
  UnityEngine_WaitForSeconds_o *v63; // x19
  struct DefCoroutine_StaticFields *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x1
  __int64 v68; // x2
  UnityEngine_WaitForSeconds_o *v69; // x19
  struct DefCoroutine_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  __int64 v73; // x1
  __int64 v74; // x2
  UnityEngine_WaitForSeconds_o *v75; // x19
  struct DefCoroutine_StaticFields *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  __int64 v79; // x1
  __int64 v80; // x2
  UnityEngine_WaitForSeconds_o *v81; // x19
  struct DefCoroutine_StaticFields *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  __int64 v85; // x1
  __int64 v86; // x2
  UnityEngine_WaitForSeconds_o *v87; // x19
  struct DefCoroutine_StaticFields *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  __int64 v91; // x1
  __int64 v92; // x2
  UnityEngine_WaitForSeconds_o *v93; // x19
  struct DefCoroutine_StaticFields *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  __int64 v97; // x1
  __int64 v98; // x2
  UnityEngine_WaitForSeconds_o *v99; // x19
  struct DefCoroutine_StaticFields *v100; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  __int64 v103; // x1
  __int64 v104; // x2
  UnityEngine_WaitForSeconds_o *v105; // x19
  struct DefCoroutine_StaticFields *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3

  if ( (byte_49FB8AE & 1) == 0 )
  {
    sub_1B640C8(&DefCoroutine_TypeInfo, v1);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_49FB8AE = 1;
  }
  v4 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v1, v2);
  UnityEngine_WaitForSeconds___ctor(v4, 0.01, 0LL);
  DefCoroutine_TypeInfo->static_fields->milliSecPointOne = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)DefCoroutine_TypeInfo->static_fields, (int32_t)v4, v5, v6);
  v9 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v7, v8);
  UnityEngine_WaitForSeconds___ctor(v9, 0.1, 0LL);
  static_fields = DefCoroutine_TypeInfo->static_fields;
  static_fields->milliSecOne = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->milliSecOne, (int32_t)v9, v11, v12);
  v15 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v13, v14);
  UnityEngine_WaitForSeconds___ctor(v15, 0.2, 0LL);
  v16 = DefCoroutine_TypeInfo->static_fields;
  v16->milliSecTwo = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->milliSecTwo, (int32_t)v15, v17, v18);
  v21 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v19, v20);
  UnityEngine_WaitForSeconds___ctor(v21, 0.266, 0LL);
  v22 = DefCoroutine_TypeInfo->static_fields;
  v22->milliSecTwoSixSix = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->milliSecTwoSixSix, (int32_t)v21, v23, v24);
  v27 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v25, v26);
  UnityEngine_WaitForSeconds___ctor(v27, 0.3, 0LL);
  v28 = DefCoroutine_TypeInfo->static_fields;
  v28->milliSecThree = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28->milliSecThree, (int32_t)v27, v29, v30);
  v33 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v31, v32);
  UnityEngine_WaitForSeconds___ctor(v33, 0.333, 0LL);
  v34 = DefCoroutine_TypeInfo->static_fields;
  v34->milliSecThreeThreeThree = v33;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->milliSecThreeThreeThree, (int32_t)v33, v35, v36);
  v39 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v37, v38);
  UnityEngine_WaitForSeconds___ctor(v39, 0.366, 0LL);
  v40 = DefCoroutine_TypeInfo->static_fields;
  v40->milliSecThreeSixSix = v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->milliSecThreeSixSix, (int32_t)v39, v41, v42);
  v45 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v43, v44);
  UnityEngine_WaitForSeconds___ctor(v45, 0.4, 0LL);
  v46 = DefCoroutine_TypeInfo->static_fields;
  v46->milliSecFour = v45;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->milliSecFour, (int32_t)v45, v47, v48);
  v51 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v49, v50);
  UnityEngine_WaitForSeconds___ctor(v51, 0.5, 0LL);
  v52 = DefCoroutine_TypeInfo->static_fields;
  v52->milliSecFive = v51;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->milliSecFive, (int32_t)v51, v53, v54);
  v57 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v55, v56);
  UnityEngine_WaitForSeconds___ctor(v57, 0.6, 0LL);
  v58 = DefCoroutine_TypeInfo->static_fields;
  v58->milliSecSix = v57;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->milliSecSix, (int32_t)v57, v59, v60);
  v63 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v61, v62);
  UnityEngine_WaitForSeconds___ctor(v63, 0.7, 0LL);
  v64 = DefCoroutine_TypeInfo->static_fields;
  v64->milliSecSeven = v63;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v64->milliSecSeven, (int32_t)v63, v65, v66);
  v69 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v67, v68);
  UnityEngine_WaitForSeconds___ctor(v69, 0.8, 0LL);
  v70 = DefCoroutine_TypeInfo->static_fields;
  v70->milliSecEight = v69;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->milliSecEight, (int32_t)v69, v71, v72);
  v75 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v73, v74);
  UnityEngine_WaitForSeconds___ctor(v75, 0.866, 0LL);
  v76 = DefCoroutine_TypeInfo->static_fields;
  v76->milliSecEightSixSix = v75;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v76->milliSecEightSixSix, (int32_t)v75, v77, v78);
  v81 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v79, v80);
  UnityEngine_WaitForSeconds___ctor(v81, 0.9, 0LL);
  v82 = DefCoroutine_TypeInfo->static_fields;
  v82->milliSecNine = v81;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v82->milliSecNine, (int32_t)v81, v83, v84);
  v87 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v85, v86);
  UnityEngine_WaitForSeconds___ctor(v87, 1.0, 0LL);
  v88 = DefCoroutine_TypeInfo->static_fields;
  v88->milliSecTen = v87;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v88->milliSecTen, (int32_t)v87, v89, v90);
  v93 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v91, v92);
  UnityEngine_WaitForSeconds___ctor(v93, 1.1, 0LL);
  v94 = DefCoroutine_TypeInfo->static_fields;
  v94->milliSecEleven = v93;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v94->milliSecEleven, (int32_t)v93, v95, v96);
  v99 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v97, v98);
  UnityEngine_WaitForSeconds___ctor(v99, 1.2, 0LL);
  v100 = DefCoroutine_TypeInfo->static_fields;
  v100->milliSecTwelve = v99;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v100->milliSecTwelve, (int32_t)v99, v101, v102);
  v105 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v103, v104);
  UnityEngine_WaitForSeconds___ctor(v105, 1.4, 0LL);
  v106 = DefCoroutine_TypeInfo->static_fields;
  v106->milliSecFourTeen = v105;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v106->milliSecFourTeen, (int32_t)v105, v107, v108);
}