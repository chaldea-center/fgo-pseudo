void WrapBattleUIFrontPopupControl___ctor(
        WrapBattleUIFrontPopupControl_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  if ( !inPerf )
    sub_1C2D6EC(this, 0);
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

  if ( (byte_4C2A021 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_GameObject___);
    sub_1C2D490(&Method_System_Linq_Enumerable_First_GameObject___);
    byte_4C2A021 = 1;
  }
  buffTextClassIconList = this->fields.buffTextClassIconList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextClassIconList,
             (const MethodInfo_30F5228 *)Method_System_Linq_Enumerable_First_GameObject___);
  v7 = BasicHelper__IndexValue_object__51105396(
         (System_Collections_Generic_List_T__o *)buffTextClassIconList,
         color - 1,
         object,
         (const MethodInfo_30BCE74 *)Method_BasicHelper_IndexValue_GameObject___);
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

  if ( (byte_4C2A020 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_GameObject___);
    sub_1C2D490(&Method_System_Linq_Enumerable_First_GameObject___);
    byte_4C2A020 = 1;
  }
  buffTextList = this->fields.buffTextList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextList,
             (const MethodInfo_30F5228 *)Method_System_Linq_Enumerable_First_GameObject___);
  v7 = BasicHelper__IndexValue_object__51105396(
         (System_Collections_Generic_List_T__o *)buffTextList,
         color - 1,
         object,
         (const MethodInfo_30BCE74 *)Method_BasicHelper_IndexValue_GameObject___);
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

  if ( (byte_4C2A01F & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_GameObject___);
    byte_4C2A01F = 1;
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
  v11 = BasicHelper__IndexValue_object__51105396(
          (System_Collections_Generic_List_T__o *)this->fields.damageList,
          v10,
          0,
          (const MethodInfo_30BCE74 *)Method_BasicHelper_IndexValue_GameObject___);
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

  if ( (byte_4C2A022 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IndexValue_GameObject___);
    byte_4C2A022 = 1;
  }
  v5 = BasicHelper__IndexValue_object__51105396(
         (System_Collections_Generic_List_T__o *)this->fields.effectList,
         id,
         0,
         (const MethodInfo_30BCE74 *)Method_BasicHelper_IndexValue_GameObject___);
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
  const MethodInfo *v10; // x3
  struct BattlePerformance_o *v11; // x8
  struct BattleEffectControl_o *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *damageObjectlist; // x20
  System_Func_object__object__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_TSource__o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattlePerformance_o *v19; // x8
  struct BattleEffectControl_o *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextObjectlist; // x20
  System_Func_object__object__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_List_TSource__o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct BattlePerformance_o *v27; // x8
  struct BattleEffectControl_o *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextClassIconObjectList; // x20
  System_Func_object__object__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_List_TSource__o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  struct BattlePerformance_o *v36; // x8
  struct BattleEffectControl_o *v37; // x8
  UnityEngine_GameObject_o *PopupObject; // x20
  const MethodInfo *v39; // x2
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  struct BattlePerformance_o *v43; // x8
  struct BattleEffectControl_o *v44; // x8
  UnityEngine_GameObject_o *v45; // x20
  const MethodInfo *v46; // x2
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  struct BattlePerformance_o *v50; // x8
  struct BattleEffectControl_o *v51; // x8
  UnityEngine_GameObject_o *v52; // x20
  const MethodInfo *v53; // x2
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  struct BattlePerformance_o *v57; // x8
  struct BattleEffectControl_o *v58; // x8
  UnityEngine_GameObject_o *v59; // x20
  const MethodInfo *v60; // x2
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  struct BattlePerformance_o *v64; // x8
  struct BattleEffectControl_o *v65; // x8
  UnityEngine_GameObject_o *v66; // x20
  const MethodInfo *v67; // x2
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x3
  struct BattlePerformance_o *v71; // x8
  struct BattleEffectControl_o *v72; // x8
  UnityEngine_GameObject_o *v73; // x20
  const MethodInfo *v74; // x2
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  struct BattlePerformance_o *v78; // x8
  struct BattleEffectControl_o *v79; // x8
  UnityEngine_GameObject_o *v80; // x20
  const MethodInfo *v81; // x2
  int32_t v82; // w2
  const MethodInfo *v83; // x3

  v2 = this;
  if ( (byte_4C2A01E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_GameObject___);
    sub_1C2D490(&System_Func_GameObject__GameObject__TypeInfo);
    this = (WrapBattleUIFrontPopupControl_o *)sub_1C2D490(&Method_WrapBattleUIFrontPopupControl_MakePrefab__);
    byte_4C2A01E = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_26;
  effectcontrol = perf->fields.effectcontrol;
  if ( !effectcontrol )
    goto LABEL_26;
  EffectList = (System_Collections_Generic_IEnumerable_TSource__o *)effectcontrol->fields.EffectList;
  v6 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v6, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                              EffectList,
                                                              (System_Func_TSource__TResult__o *)v6,
                                                              (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v8 = System_Linq_Enumerable__ToList_object_(
         v7,
         (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.effectList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.effectList, (int32_t)v8, v9, v10);
  v11 = v2->fields.perf;
  if ( !v11 )
    goto LABEL_26;
  v12 = v11->fields.effectcontrol;
  if ( !v12 )
    goto LABEL_26;
  damageObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v12->fields.damageObjectlist;
  v14 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v14, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               damageObjectlist,
                                                               (System_Func_TSource__TResult__o *)v14,
                                                               (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v16 = System_Linq_Enumerable__ToList_object_(
          v15,
          (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.damageList = (struct System_Collections_Generic_List_GameObject__o *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.damageList, (int32_t)v16, v17, v18);
  v19 = v2->fields.perf;
  if ( !v19 )
    goto LABEL_26;
  v20 = v19->fields.effectcontrol;
  if ( !v20 )
    goto LABEL_26;
  buffTextObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v20->fields.buffTextObjectlist;
  v22 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v22, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextObjectlist,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v24 = System_Linq_Enumerable__ToList_object_(
          v23,
          (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.buffTextList = (struct System_Collections_Generic_List_GameObject__o *)v24;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.buffTextList, (int32_t)v24, v25, v26);
  v27 = v2->fields.perf;
  if ( !v27 )
    goto LABEL_26;
  v28 = v27->fields.effectcontrol;
  if ( !v28 )
    goto LABEL_26;
  buffTextClassIconObjectList = (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields.buffTextClassIconObjectList;
  v30 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v30, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextClassIconObjectList,
                                                               (System_Func_TSource__TResult__o *)v30,
                                                               (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v32 = System_Linq_Enumerable__ToList_object_(
          v31,
          (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.buffTextClassIconList = (struct System_Collections_Generic_List_GameObject__o *)v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.buffTextClassIconList, (int32_t)v32, v33, v34);
  v36 = v2->fields.perf;
  if ( !v36 )
    goto LABEL_26;
  v37 = v36->fields.effectcontrol;
  if ( !v37 )
    goto LABEL_26;
  PopupObject = WrapBaseBattlePopupControl__CreatePopupObject(
                  (WrapBaseBattlePopupControl_o *)v2,
                  v37->fields.avoidanceObject,
                  0,
                  v35);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, PopupObject, v39);
  v2->fields.avoidanceObj = PopupObject;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.avoidanceObj, (int32_t)PopupObject, v40, v41);
  v43 = v2->fields.perf;
  if ( !v43 )
    goto LABEL_26;
  v44 = v43->fields.effectcontrol;
  if ( !v44 )
    goto LABEL_26;
  v45 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v44->fields.avoidanceTextObject,
          0,
          v42);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v45, v46);
  v2->fields.avoidanceTextObj = v45;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.avoidanceTextObj, (int32_t)v45, v47, v48);
  v50 = v2->fields.perf;
  if ( !v50 )
    goto LABEL_26;
  v51 = v50->fields.effectcontrol;
  if ( !v51 )
    goto LABEL_26;
  v52 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v51->fields._AvoidResetDamageObject_k__BackingField,
          0,
          v49);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v52, v53);
  v2->fields.avoidResetDamageObj = v52;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.avoidResetDamageObj, (int32_t)v52, v54, v55);
  v57 = v2->fields.perf;
  if ( !v57 )
    goto LABEL_26;
  v58 = v57->fields.effectcontrol;
  if ( !v58 )
    goto LABEL_26;
  v59 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v58->fields._AvoidResetDamageTextObject_k__BackingField,
          0,
          v56);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v59, v60);
  v2->fields.avoidResetDamageTextObj = v59;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.avoidResetDamageTextObj, (int32_t)v59, v61, v62);
  v64 = v2->fields.perf;
  if ( !v64 )
    goto LABEL_26;
  v65 = v64->fields.effectcontrol;
  if ( !v65 )
    goto LABEL_26;
  v66 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v65->fields.invincibleObject,
          0,
          v63);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v66, v67);
  v2->fields.invincibleObj = v66;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.invincibleObj, (int32_t)v66, v68, v69);
  v71 = v2->fields.perf;
  if ( !v71
    || (v72 = v71->fields.effectcontrol) == 0
    || (v73 = WrapBaseBattlePopupControl__CreatePopupObject(
                (WrapBaseBattlePopupControl_o *)v2,
                v72->fields._specialInvincibleObject_k__BackingField,
                0,
                v70),
        WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v73, v74),
        v2->fields.spInvincibleObj = v73,
        sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.spInvincibleObj, (int32_t)v73, v75, v76),
        (v78 = v2->fields.perf) == 0)
    || (v79 = v78->fields.effectcontrol) == 0 )
  {
LABEL_26:
    sub_1C2D6EC(this, method);
  }
  v80 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v79->fields.buffIconObject,
          0,
          v77);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v80, v81);
  v2->fields.buffIconObj = v80;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.buffIconObj, (int32_t)v80, v82, v83);
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
    sub_1C2D6EC(this, buffList);
  return BattleEffectControl__SetBuffIconObject_45754388(effectcontrol, buffList, this->fields.buffIconObj, 0);
}