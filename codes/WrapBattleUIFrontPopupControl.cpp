void __fastcall WrapBattleUIFrontPopupControl___ctor(
        WrapBattleUIFrontPopupControl_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  if ( !inPerf )
    sub_B7769C(this, 0LL);
  WrapBaseBattlePopupControl___ctor((WrapBaseBattlePopupControl_o *)this, inPerf->fields.popupUiFrontTr, inPerf, v3);
  WrapBattleUIFrontPopupControl__InitPopupPrefab(this, v5);
}


UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetAvoidResetDamageObject(
        WrapBattleUIFrontPopupControl_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( System_String__IsNullOrEmpty(text, 0LL) )
    return WrapBaseBattlePopupControl__CreatePopupObject(
             (WrapBaseBattlePopupControl_o *)this,
             this->fields.avoidResetDamageObj,
             1,
             v5);
  else
    return WrapBaseBattlePopupControl__CreatePopupTextObject(
             (WrapBaseBattlePopupControl_o *)this,
             this->fields.avoidResetDamageTextObj,
             text,
             1,
             v6);
}


UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetAvoidanceObject(
        WrapBattleUIFrontPopupControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           this->fields.avoidanceObj,
           1,
           v2);
}


UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetAvoidanceTextObject(
        WrapBattleUIFrontPopupControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           this->fields.avoidanceTextObj,
           1,
           v2);
}


UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetBuffTextClassIconObject(
        WrapBattleUIFrontPopupControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *buffTextClassIconList; // x21
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  UnityEngine_GameObject_o *v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_438952E & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_GameObject___);
    sub_B775C4(&Method_System_Linq_Enumerable_First_GameObject___);
    byte_438952E = 1;
  }
  buffTextClassIconList = this->fields.buffTextClassIconList;
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)buffTextClassIconList,
                                                    (const MethodInfo_1D30534 *)Method_System_Linq_Enumerable_First_GameObject___);
  v7 = (UnityEngine_GameObject_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                     (System_Collections_Generic_List_T__o *)buffTextClassIconList,
                                     color - 1,
                                     (WarBoardAIRoute_RouteData_o *)StonePurchaseNotificationMenu_DialogOpenQueue,
                                     (const MethodInfo_1C6842C *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject((WrapBaseBattlePopupControl_o *)this, v7, 1, v8);
}


UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetBuffTextObject(
        WrapBattleUIFrontPopupControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *buffTextList; // x21
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  UnityEngine_GameObject_o *v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_438952D & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_GameObject___);
    sub_B775C4(&Method_System_Linq_Enumerable_First_GameObject___);
    byte_438952D = 1;
  }
  buffTextList = this->fields.buffTextList;
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)buffTextList,
                                                    (const MethodInfo_1D30534 *)Method_System_Linq_Enumerable_First_GameObject___);
  v7 = (UnityEngine_GameObject_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                     (System_Collections_Generic_List_T__o *)buffTextList,
                                     color - 1,
                                     (WarBoardAIRoute_RouteData_o *)StonePurchaseNotificationMenu_DialogOpenQueue,
                                     (const MethodInfo_1C6842C *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject((WrapBaseBattlePopupControl_o *)this, v7, 1, v8);
}


UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetDamageObject(
        WrapBattleUIFrontPopupControl_o *this,
        bool critical,
        bool week,
        bool resist,
        const MethodInfo *method)
{
  int v9; // w9
  int v10; // w10
  int32_t v11; // w1
  UnityEngine_GameObject_o *v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_438952C & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_GameObject___);
    byte_438952C = 1;
  }
  if ( resist )
    v9 = 3;
  else
    v9 = 0;
  if ( critical )
    v10 = 1;
  else
    v10 = 2;
  if ( critical || week )
    v11 = v10;
  else
    v11 = v9;
  v12 = (UnityEngine_GameObject_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                      (System_Collections_Generic_List_T__o *)this->fields.damageList,
                                      v11,
                                      0LL,
                                      (const MethodInfo_1C6842C *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject((WrapBaseBattlePopupControl_o *)this, v12, 1, v13);
}


UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetEffectInstantiateLocal(
        WrapBattleUIFrontPopupControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_438952F & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_GameObject___);
    byte_438952F = 1;
  }
  v5 = (UnityEngine_GameObject_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                     (System_Collections_Generic_List_T__o *)this->fields.effectList,
                                     id,
                                     0LL,
                                     (const MethodInfo_1C6842C *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject((WrapBaseBattlePopupControl_o *)this, v5, 1, v6);
}


UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetInvincibleObject(
        WrapBattleUIFrontPopupControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           this->fields.invincibleObj,
           1,
           v2);
}


UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetSpecialInvincibleObject(
        WrapBattleUIFrontPopupControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           this->fields.spInvincibleObj,
           1,
           v2);
}


void __fastcall WrapBattleUIFrontPopupControl__InitPopupPrefab(
        WrapBattleUIFrontPopupControl_o *this,
        const MethodInfo *method)
{
  WrapBattleUIFrontPopupControl_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8
  System_Collections_Generic_IEnumerable_TSource__o *EffectList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct BattlePerformance_o *v15; // x8
  struct BattleEffectControl_o *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *damageObjectlist; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct BattlePerformance_o *v27; // x8
  struct BattleEffectControl_o *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextObjectlist; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct BattlePerformance_o *v39; // x8
  struct BattleEffectControl_o *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextClassIconObjectList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  const MethodInfo *v51; // x3
  struct BattlePerformance_o *v52; // x8
  struct BattleEffectControl_o *v53; // x8
  UnityEngine_GameObject_o *PopupObject; // x20
  const MethodInfo *v55; // x2
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x3
  struct BattlePerformance_o *v63; // x8
  struct BattleEffectControl_o *v64; // x8
  UnityEngine_GameObject_o *v65; // x20
  const MethodInfo *v66; // x2
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  const MethodInfo *v73; // x3
  struct BattlePerformance_o *v74; // x8
  struct BattleEffectControl_o *v75; // x8
  UnityEngine_GameObject_o *v76; // x20
  const MethodInfo *v77; // x2
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  const MethodInfo *v84; // x3
  struct BattlePerformance_o *v85; // x8
  struct BattleEffectControl_o *v86; // x8
  UnityEngine_GameObject_o *v87; // x20
  const MethodInfo *v88; // x2
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  const MethodInfo *v95; // x3
  struct BattlePerformance_o *v96; // x8
  struct BattleEffectControl_o *v97; // x8
  UnityEngine_GameObject_o *v98; // x20
  const MethodInfo *v99; // x2
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  const MethodInfo *v106; // x3
  struct BattlePerformance_o *v107; // x8
  struct BattleEffectControl_o *v108; // x8
  UnityEngine_GameObject_o *v109; // x20
  const MethodInfo *v110; // x2
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  const MethodInfo *v117; // x3
  struct BattlePerformance_o *v118; // x8
  struct BattleEffectControl_o *v119; // x8
  UnityEngine_GameObject_o *v120; // x20
  const MethodInfo *v121; // x2
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7

  v2 = this;
  if ( (byte_438952B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_GameObject___);
    sub_B775C4(&Method_System_Func_GameObject__GameObject___ctor__);
    sub_B775C4(&System_Func_GameObject__GameObject__TypeInfo);
    this = (WrapBattleUIFrontPopupControl_o *)sub_B775C4(&Method_WrapBattleUIFrontPopupControl_MakePrefab__);
    byte_438952B = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_26;
  effectcontrol = perf->fields.effectcontrol;
  if ( !effectcontrol )
    goto LABEL_26;
  EffectList = (System_Collections_Generic_IEnumerable_TSource__o *)effectcontrol->fields.EffectList;
  v6 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v6,
    (Il2CppObject *)v2,
    Method_WrapBattleUIFrontPopupControl_MakePrefab__,
    (const MethodInfo_29EAA10 *)Method_System_Func_GameObject__GameObject___ctor__);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                              EffectList,
                                                              (System_Func_TSource__TResult__o *)v6,
                                                              (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v8 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                v7,
                                (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.effectList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.effectList, v8, v9, v10, v11, v12, v13, v14);
  v15 = v2->fields.perf;
  if ( !v15 )
    goto LABEL_26;
  v16 = v15->fields.effectcontrol;
  if ( !v16 )
    goto LABEL_26;
  damageObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v16->fields.damageObjectlist;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v18,
    (Il2CppObject *)v2,
    Method_WrapBattleUIFrontPopupControl_MakePrefab__,
    (const MethodInfo_29EAA10 *)Method_System_Func_GameObject__GameObject___ctor__);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               damageObjectlist,
                                                               (System_Func_TSource__TResult__o *)v18,
                                                               (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v20 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v19,
                                 (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.damageList = (struct System_Collections_Generic_List_GameObject__o *)v20;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.damageList, v20, v21, v22, v23, v24, v25, v26);
  v27 = v2->fields.perf;
  if ( !v27 )
    goto LABEL_26;
  v28 = v27->fields.effectcontrol;
  if ( !v28 )
    goto LABEL_26;
  buffTextObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields.buffTextObjectlist;
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v30,
    (Il2CppObject *)v2,
    Method_WrapBattleUIFrontPopupControl_MakePrefab__,
    (const MethodInfo_29EAA10 *)Method_System_Func_GameObject__GameObject___ctor__);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               buffTextObjectlist,
                                                               (System_Func_TSource__TResult__o *)v30,
                                                               (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v32 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v31,
                                 (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.buffTextList = (struct System_Collections_Generic_List_GameObject__o *)v32;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.buffTextList, v32, v33, v34, v35, v36, v37, v38);
  v39 = v2->fields.perf;
  if ( !v39 )
    goto LABEL_26;
  v40 = v39->fields.effectcontrol;
  if ( !v40 )
    goto LABEL_26;
  buffTextClassIconObjectList = (System_Collections_Generic_IEnumerable_TSource__o *)v40->fields.buffTextClassIconObjectList;
  v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v42,
    (Il2CppObject *)v2,
    Method_WrapBattleUIFrontPopupControl_MakePrefab__,
    (const MethodInfo_29EAA10 *)Method_System_Func_GameObject__GameObject___ctor__);
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               buffTextClassIconObjectList,
                                                               (System_Func_TSource__TResult__o *)v42,
                                                               (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v44 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                 v43,
                                 (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.buffTextClassIconList = (struct System_Collections_Generic_List_GameObject__o *)v44;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.buffTextClassIconList, v44, v45, v46, v47, v48, v49, v50);
  v52 = v2->fields.perf;
  if ( !v52 )
    goto LABEL_26;
  v53 = v52->fields.effectcontrol;
  if ( !v53 )
    goto LABEL_26;
  PopupObject = WrapBaseBattlePopupControl__CreatePopupObject(
                  (WrapBaseBattlePopupControl_o *)v2,
                  v53->fields.avoidanceObject,
                  0,
                  v51);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, PopupObject, v55);
  v2->fields.avoidanceObj = PopupObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&v2->fields.avoidanceObj,
    (System_Int32_array **)PopupObject,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v63 = v2->fields.perf;
  if ( !v63 )
    goto LABEL_26;
  v64 = v63->fields.effectcontrol;
  if ( !v64 )
    goto LABEL_26;
  v65 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v64->fields.avoidanceTextObject,
          0,
          v62);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v65, v66);
  v2->fields.avoidanceTextObj = v65;
  sub_B77560(
    (BattleServantConfConponent_o *)&v2->fields.avoidanceTextObj,
    (System_Int32_array **)v65,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v74 = v2->fields.perf;
  if ( !v74 )
    goto LABEL_26;
  v75 = v74->fields.effectcontrol;
  if ( !v75 )
    goto LABEL_26;
  v76 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v75->fields._AvoidResetDamageObject_k__BackingField,
          0,
          v73);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v76, v77);
  v2->fields.avoidResetDamageObj = v76;
  sub_B77560(
    (BattleServantConfConponent_o *)&v2->fields.avoidResetDamageObj,
    (System_Int32_array **)v76,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v85 = v2->fields.perf;
  if ( !v85 )
    goto LABEL_26;
  v86 = v85->fields.effectcontrol;
  if ( !v86 )
    goto LABEL_26;
  v87 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v86->fields._AvoidResetDamageTextObject_k__BackingField,
          0,
          v84);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v87, v88);
  v2->fields.avoidResetDamageTextObj = v87;
  sub_B77560(
    (BattleServantConfConponent_o *)&v2->fields.avoidResetDamageTextObj,
    (System_Int32_array **)v87,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  v96 = v2->fields.perf;
  if ( !v96 )
    goto LABEL_26;
  v97 = v96->fields.effectcontrol;
  if ( !v97 )
    goto LABEL_26;
  v98 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v97->fields.invincibleObject,
          0,
          v95);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v98, v99);
  v2->fields.invincibleObj = v98;
  sub_B77560(
    (BattleServantConfConponent_o *)&v2->fields.invincibleObj,
    (System_Int32_array **)v98,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v107 = v2->fields.perf;
  if ( !v107
    || (v108 = v107->fields.effectcontrol) == 0LL
    || (v109 = WrapBaseBattlePopupControl__CreatePopupObject(
                 (WrapBaseBattlePopupControl_o *)v2,
                 v108->fields._specialInvincibleObject_k__BackingField,
                 0,
                 v106),
        WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v109, v110),
        v2->fields.spInvincibleObj = v109,
        sub_B77560(
          (BattleServantConfConponent_o *)&v2->fields.spInvincibleObj,
          (System_Int32_array **)v109,
          v111,
          v112,
          v113,
          v114,
          v115,
          v116),
        (v118 = v2->fields.perf) == 0LL)
    || (v119 = v118->fields.effectcontrol) == 0LL )
  {
LABEL_26:
    sub_B7769C(this, method);
  }
  v120 = WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)v2,
           v119->fields.buffIconObject,
           0,
           v117);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v120, v121);
  v2->fields.buffIconObj = v120;
  sub_B77560(
    (BattleServantConfConponent_o *)&v2->fields.buffIconObj,
    (System_Int32_array **)v120,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
}


UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__MakePrefab(
        WrapBattleUIFrontPopupControl_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *PopupObject; // x20
  const MethodInfo *v6; // x2

  PopupObject = WrapBaseBattlePopupControl__CreatePopupObject((WrapBaseBattlePopupControl_o *)this, prefab, 0, v3);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)this, PopupObject, v6);
  return PopupObject;
}


UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__SetBuffIconObject(
        WrapBattleUIFrontPopupControl_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattleEffectControl_o *effectcontrol; // x8

  perf = this->fields.perf;
  if ( !perf || (effectcontrol = perf->fields.effectcontrol) == 0LL )
    sub_B7769C(this, buffList);
  return BattleEffectControl__SetBuffIconObject_22910212(effectcontrol, buffList, this->fields.buffIconObj, 0LL);
}