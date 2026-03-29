void WrapBattleUIFrontPopupControl___ctor(
        WrapBattleUIFrontPopupControl_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  if ( !inPerf )
    sub_1C93D2C(this, 0);
  WrapBaseBattlePopupControl___ctor((WrapBaseBattlePopupControl_o *)this, inPerf->fields.popupUiFrontTr, inPerf, v3);
  WrapBattleUIFrontPopupControl__InitPopupPrefab(this, v5);
}


UnityEngine_GameObject_o *WrapBattleUIFrontPopupControl__GetAvoidResetDamageObject(
        WrapBattleUIFrontPopupControl_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( System_String__IsNullOrEmpty(text, 0) )
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


UnityEngine_GameObject_o *WrapBattleUIFrontPopupControl__GetAvoidanceObject(
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


UnityEngine_GameObject_o *WrapBattleUIFrontPopupControl__GetAvoidanceTextObject(
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


UnityEngine_GameObject_o *WrapBattleUIFrontPopupControl__GetBuffTextClassIconObject(
        WrapBattleUIFrontPopupControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *buffTextClassIconList; // x21
  Il2CppObject *object; // x0
  Il2CppObject *v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4D3381D & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_GameObject___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_GameObject___);
    byte_4D3381D = 1;
  }
  buffTextClassIconList = this->fields.buffTextClassIconList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextClassIconList,
             (const MethodInfo_31CA994 *)Method_System_Linq_Enumerable_First_GameObject___);
  v7 = BasicHelper__IndexValue_object__51981564(
         (System_Collections_Generic_List_T__o *)buffTextClassIconList,
         color - 1,
         object,
         (const MethodInfo_3192CFC *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           (UnityEngine_GameObject_o *)v7,
           1,
           v8);
}


UnityEngine_GameObject_o *WrapBattleUIFrontPopupControl__GetBuffTextObject(
        WrapBattleUIFrontPopupControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *buffTextList; // x21
  Il2CppObject *object; // x0
  Il2CppObject *v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4D3381C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_GameObject___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_GameObject___);
    byte_4D3381C = 1;
  }
  buffTextList = this->fields.buffTextList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextList,
             (const MethodInfo_31CA994 *)Method_System_Linq_Enumerable_First_GameObject___);
  v7 = BasicHelper__IndexValue_object__51981564(
         (System_Collections_Generic_List_T__o *)buffTextList,
         color - 1,
         object,
         (const MethodInfo_3192CFC *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           (UnityEngine_GameObject_o *)v7,
           1,
           v8);
}


UnityEngine_GameObject_o *WrapBattleUIFrontPopupControl__GetDamageObject(
        WrapBattleUIFrontPopupControl_o *this,
        bool critical,
        bool week,
        bool resist,
        const MethodInfo *method)
{
  int v9; // w8
  int32_t v10; // w1
  Il2CppObject *v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4D3381B & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_GameObject___);
    byte_4D3381B = 1;
  }
  if ( resist )
    v9 = 3;
  else
    v9 = 0;
  if ( week )
    v9 = 2;
  if ( critical )
    v10 = 1;
  else
    v10 = v9;
  v11 = BasicHelper__IndexValue_object__51981564(
          (System_Collections_Generic_List_T__o *)this->fields.damageList,
          v10,
          0,
          (const MethodInfo_3192CFC *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           (UnityEngine_GameObject_o *)v11,
           1,
           v12);
}


UnityEngine_GameObject_o *WrapBattleUIFrontPopupControl__GetEffectInstantiateLocal(
        WrapBattleUIFrontPopupControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4D3381E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_GameObject___);
    byte_4D3381E = 1;
  }
  v5 = BasicHelper__IndexValue_object__51981564(
         (System_Collections_Generic_List_T__o *)this->fields.effectList,
         id,
         0,
         (const MethodInfo_3192CFC *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           (UnityEngine_GameObject_o *)v5,
           1,
           v6);
}


UnityEngine_GameObject_o *WrapBattleUIFrontPopupControl__GetInvincibleObject(
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


UnityEngine_GameObject_o *WrapBattleUIFrontPopupControl__GetSpecialInvincibleObject(
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


void WrapBattleUIFrontPopupControl__InitPopupPrefab(WrapBattleUIFrontPopupControl_o *this, const MethodInfo *method)
{
  WrapBattleUIFrontPopupControl_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8
  System_Collections_Generic_IEnumerable_TSource__o *EffectList; // x20
  System_Func_object__object__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Collections_Generic_List_TSource__o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct BattlePerformance_o *v15; // x8
  struct BattleEffectControl_o *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *damageObjectlist; // x20
  System_Func_object__object__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_List_TSource__o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct BattlePerformance_o *v27; // x8
  struct BattleEffectControl_o *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextObjectlist; // x20
  System_Func_object__object__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_List_TSource__o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct BattlePerformance_o *v39; // x8
  struct BattleEffectControl_o *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextClassIconObjectList; // x20
  System_Func_object__object__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_List_TSource__o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  const MethodInfo *v51; // x3
  struct BattlePerformance_o *v52; // x8
  struct BattleEffectControl_o *v53; // x8
  UnityEngine_GameObject_o *PopupObject; // x20
  const MethodInfo *v55; // x2
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  const MethodInfo *v62; // x3
  struct BattlePerformance_o *v63; // x8
  struct BattleEffectControl_o *v64; // x8
  UnityEngine_GameObject_o *v65; // x20
  const MethodInfo *v66; // x2
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  const MethodInfo *v73; // x3
  struct BattlePerformance_o *v74; // x8
  struct BattleEffectControl_o *v75; // x8
  UnityEngine_GameObject_o *v76; // x20
  const MethodInfo *v77; // x2
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  const MethodInfo *v84; // x3
  struct BattlePerformance_o *v85; // x8
  struct BattleEffectControl_o *v86; // x8
  UnityEngine_GameObject_o *v87; // x20
  const MethodInfo *v88; // x2
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  const MethodInfo *v95; // x3
  struct BattlePerformance_o *v96; // x8
  struct BattleEffectControl_o *v97; // x8
  UnityEngine_GameObject_o *v98; // x20
  const MethodInfo *v99; // x2
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  const MethodInfo *v106; // x3
  struct BattlePerformance_o *v107; // x8
  struct BattleEffectControl_o *v108; // x8
  UnityEngine_GameObject_o *v109; // x20
  const MethodInfo *v110; // x2
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  const MethodInfo *v117; // x3
  struct BattlePerformance_o *v118; // x8
  struct BattleEffectControl_o *v119; // x8
  UnityEngine_GameObject_o *v120; // x20
  const MethodInfo *v121; // x2
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7

  v2 = this;
  if ( (byte_4D3381A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_GameObject___);
    sub_1C93AD4(&System_Func_GameObject__GameObject__TypeInfo);
    this = (WrapBattleUIFrontPopupControl_o *)sub_1C93AD4(&Method_WrapBattleUIFrontPopupControl_MakePrefab__);
    byte_4D3381A = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_26;
  effectcontrol = perf->fields.effectcontrol;
  if ( !effectcontrol )
    goto LABEL_26;
  EffectList = (System_Collections_Generic_IEnumerable_TSource__o *)effectcontrol->fields.EffectList;
  v6 = (System_Func_object__object__o *)sub_1C93D20(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v6, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                              EffectList,
                                                              (System_Func_TSource__TResult__o *)v6,
                                                              (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v8 = System_Linq_Enumerable__ToList_object_(
         v7,
         (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.effectList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.effectList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = v2->fields.perf;
  if ( !v15 )
    goto LABEL_26;
  v16 = v15->fields.effectcontrol;
  if ( !v16 )
    goto LABEL_26;
  damageObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v16->fields.damageObjectlist;
  v18 = (System_Func_object__object__o *)sub_1C93D20(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v18, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               damageObjectlist,
                                                               (System_Func_TSource__TResult__o *)v18,
                                                               (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v20 = System_Linq_Enumerable__ToList_object_(
          v19,
          (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.damageList = (struct System_Collections_Generic_List_GameObject__o *)v20;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.damageList, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = v2->fields.perf;
  if ( !v27 )
    goto LABEL_26;
  v28 = v27->fields.effectcontrol;
  if ( !v28 )
    goto LABEL_26;
  buffTextObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields.buffTextObjectlist;
  v30 = (System_Func_object__object__o *)sub_1C93D20(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v30, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextObjectlist,
                                                               (System_Func_TSource__TResult__o *)v30,
                                                               (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v32 = System_Linq_Enumerable__ToList_object_(
          v31,
          (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.buffTextList = (struct System_Collections_Generic_List_GameObject__o *)v32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.buffTextList, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = v2->fields.perf;
  if ( !v39 )
    goto LABEL_26;
  v40 = v39->fields.effectcontrol;
  if ( !v40 )
    goto LABEL_26;
  buffTextClassIconObjectList = (System_Collections_Generic_IEnumerable_TSource__o *)v40->fields.buffTextClassIconObjectList;
  v42 = (System_Func_object__object__o *)sub_1C93D20(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v42, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0);
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextClassIconObjectList,
                                                               (System_Func_TSource__TResult__o *)v42,
                                                               (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v44 = System_Linq_Enumerable__ToList_object_(
          v43,
          (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.buffTextClassIconList = (struct System_Collections_Generic_List_GameObject__o *)v44;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v2->fields.buffTextClassIconList,
    (int32_t)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v2->fields.avoidanceObj,
    (int32_t)PopupObject,
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.avoidanceTextObj, (int32_t)v65, v67, v68, v69, v70, v71, v72);
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v2->fields.avoidResetDamageObj,
    (int32_t)v76,
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v2->fields.avoidResetDamageTextObj,
    (int32_t)v87,
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v2->fields.invincibleObj,
    (int32_t)v98,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v107 = v2->fields.perf;
  if ( !v107
    || (v108 = v107->fields.effectcontrol) == 0
    || (v109 = WrapBaseBattlePopupControl__CreatePopupObject(
                 (WrapBaseBattlePopupControl_o *)v2,
                 v108->fields._specialInvincibleObject_k__BackingField,
                 0,
                 v106),
        WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v109, v110),
        v2->fields.spInvincibleObj = v109,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v2->fields.spInvincibleObj,
          (int32_t)v109,
          v111,
          v112,
          v113,
          v114,
          v115,
          v116),
        (v118 = v2->fields.perf) == 0)
    || (v119 = v118->fields.effectcontrol) == 0 )
  {
LABEL_26:
    sub_1C93D2C(this, method);
  }
  v120 = WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)v2,
           v119->fields.buffIconObject,
           0,
           v117);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v120, v121);
  v2->fields.buffIconObj = v120;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.buffIconObj, (int32_t)v120, v122, v123, v124, v125, v126, v127);
}


UnityEngine_GameObject_o *WrapBattleUIFrontPopupControl__MakePrefab(
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


UnityEngine_GameObject_o *WrapBattleUIFrontPopupControl__SetBuffIconObject(
        WrapBattleUIFrontPopupControl_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattleEffectControl_o *effectcontrol; // x8

  perf = this->fields.perf;
  if ( !perf || (effectcontrol = perf->fields.effectcontrol) == 0 )
    sub_1C93D2C(this, buffList);
  return BattleEffectControl__SetBuffIconObject_46759600(effectcontrol, buffList, this->fields.buffIconObj, 0);
}