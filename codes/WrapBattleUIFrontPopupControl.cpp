void __fastcall WrapBattleUIFrontPopupControl___ctor(
        WrapBattleUIFrontPopupControl_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  if ( !inPerf )
    sub_1B68930(this, 0LL);
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetBuffTextClassIconObject(
        WrapBattleUIFrontPopupControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *buffTextClassIconList; // x21
  Il2CppObject *object; // x0
  Il2CppObject *v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A0B462 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&color);
    sub_1B686D4(&Method_System_Linq_Enumerable_First_GameObject___, v5);
    byte_4A0B462 = 1;
  }
  buffTextClassIconList = this->fields.buffTextClassIconList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextClassIconList,
             (const MethodInfo_2E6B6F8 *)Method_System_Linq_Enumerable_First_GameObject___);
  v8 = BasicHelper__IndexValue_object__48466720(
         (System_Collections_Generic_List_T__o *)buffTextClassIconList,
         color - 1,
         object,
         (const MethodInfo_2E38B20 *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           (UnityEngine_GameObject_o *)v8,
           1,
           v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetBuffTextObject(
        WrapBattleUIFrontPopupControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *buffTextList; // x21
  Il2CppObject *object; // x0
  Il2CppObject *v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A0B461 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&color);
    sub_1B686D4(&Method_System_Linq_Enumerable_First_GameObject___, v5);
    byte_4A0B461 = 1;
  }
  buffTextList = this->fields.buffTextList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextList,
             (const MethodInfo_2E6B6F8 *)Method_System_Linq_Enumerable_First_GameObject___);
  v8 = BasicHelper__IndexValue_object__48466720(
         (System_Collections_Generic_List_T__o *)buffTextList,
         color - 1,
         object,
         (const MethodInfo_2E38B20 *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           (UnityEngine_GameObject_o *)v8,
           1,
           v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetDamageObject(
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

  if ( (byte_4A0B460 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_IndexValue_GameObject___, critical);
    byte_4A0B460 = 1;
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
  v11 = BasicHelper__IndexValue_object__48466720(
          (System_Collections_Generic_List_T__o *)this->fields.damageList,
          v10,
          0LL,
          (const MethodInfo_2E38B20 *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           (UnityEngine_GameObject_o *)v11,
           1,
           v12);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetEffectInstantiateLocal(
        WrapBattleUIFrontPopupControl_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4A0B463 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&id);
    byte_4A0B463 = 1;
  }
  v5 = BasicHelper__IndexValue_object__48466720(
         (System_Collections_Generic_List_T__o *)this->fields.effectList,
         id,
         0LL,
         (const MethodInfo_2E38B20 *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           (UnityEngine_GameObject_o *)v5,
           1,
           v6);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8
  System_Collections_Generic_IEnumerable_TSource__o *EffectList; // x20
  System_Func_object__object__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Collections_Generic_List_TSource__o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct BattlePerformance_o *v14; // x8
  struct BattleEffectControl_o *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *damageObjectlist; // x20
  System_Func_object__object__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_TSource__o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct BattlePerformance_o *v22; // x8
  struct BattleEffectControl_o *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextObjectlist; // x20
  System_Func_object__object__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_TSource__o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct BattlePerformance_o *v30; // x8
  struct BattleEffectControl_o *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextClassIconObjectList; // x20
  System_Func_object__object__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_List_TSource__o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x3
  struct BattlePerformance_o *v39; // x8
  struct BattleEffectControl_o *v40; // x8
  UnityEngine_GameObject_o *PopupObject; // x20
  const MethodInfo *v42; // x2
  int32_t v43; // w2
  int32_t v44; // w3
  const MethodInfo *v45; // x3
  struct BattlePerformance_o *v46; // x8
  struct BattleEffectControl_o *v47; // x8
  UnityEngine_GameObject_o *v48; // x20
  const MethodInfo *v49; // x2
  int32_t v50; // w2
  int32_t v51; // w3
  const MethodInfo *v52; // x3
  struct BattlePerformance_o *v53; // x8
  struct BattleEffectControl_o *v54; // x8
  UnityEngine_GameObject_o *v55; // x20
  const MethodInfo *v56; // x2
  int32_t v57; // w2
  int32_t v58; // w3
  const MethodInfo *v59; // x3
  struct BattlePerformance_o *v60; // x8
  struct BattleEffectControl_o *v61; // x8
  UnityEngine_GameObject_o *v62; // x20
  const MethodInfo *v63; // x2
  int32_t v64; // w2
  int32_t v65; // w3
  const MethodInfo *v66; // x3
  struct BattlePerformance_o *v67; // x8
  struct BattleEffectControl_o *v68; // x8
  UnityEngine_GameObject_o *v69; // x20
  const MethodInfo *v70; // x2
  int32_t v71; // w2
  int32_t v72; // w3
  const MethodInfo *v73; // x3
  struct BattlePerformance_o *v74; // x8
  struct BattleEffectControl_o *v75; // x8
  UnityEngine_GameObject_o *v76; // x20
  const MethodInfo *v77; // x2
  int32_t v78; // w2
  int32_t v79; // w3
  const MethodInfo *v80; // x3
  struct BattlePerformance_o *v81; // x8
  struct BattleEffectControl_o *v82; // x8
  UnityEngine_GameObject_o *v83; // x20
  const MethodInfo *v84; // x2
  int32_t v85; // w2
  int32_t v86; // w3

  v2 = this;
  if ( (byte_4A0B45F & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_GameObject__GameObject___, method);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_GameObject___, v3);
    sub_1B686D4(&System_Func_GameObject__GameObject__TypeInfo, v4);
    this = (WrapBattleUIFrontPopupControl_o *)sub_1B686D4(&Method_WrapBattleUIFrontPopupControl_MakePrefab__, v5);
    byte_4A0B45F = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_26;
  effectcontrol = perf->fields.effectcontrol;
  if ( !effectcontrol )
    goto LABEL_26;
  EffectList = (System_Collections_Generic_IEnumerable_TSource__o *)effectcontrol->fields.EffectList;
  v9 = (System_Func_object__object__o *)sub_1B68920(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v9, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               EffectList,
                                                               (System_Func_TSource__TResult__o *)v9,
                                                               (const MethodInfo_2E7A03C *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v11 = System_Linq_Enumerable__ToList_object_(
          v10,
          (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.effectList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.effectList, (int32_t)v11, v12, v13);
  v14 = v2->fields.perf;
  if ( !v14 )
    goto LABEL_26;
  v15 = v14->fields.effectcontrol;
  if ( !v15 )
    goto LABEL_26;
  damageObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v15->fields.damageObjectlist;
  v17 = (System_Func_object__object__o *)sub_1B68920(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v17, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               damageObjectlist,
                                                               (System_Func_TSource__TResult__o *)v17,
                                                               (const MethodInfo_2E7A03C *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v19 = System_Linq_Enumerable__ToList_object_(
          v18,
          (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.damageList = (struct System_Collections_Generic_List_GameObject__o *)v19;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.damageList, (int32_t)v19, v20, v21);
  v22 = v2->fields.perf;
  if ( !v22 )
    goto LABEL_26;
  v23 = v22->fields.effectcontrol;
  if ( !v23 )
    goto LABEL_26;
  buffTextObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v23->fields.buffTextObjectlist;
  v25 = (System_Func_object__object__o *)sub_1B68920(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v25, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextObjectlist,
                                                               (System_Func_TSource__TResult__o *)v25,
                                                               (const MethodInfo_2E7A03C *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v27 = System_Linq_Enumerable__ToList_object_(
          v26,
          (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.buffTextList = (struct System_Collections_Generic_List_GameObject__o *)v27;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.buffTextList, (int32_t)v27, v28, v29);
  v30 = v2->fields.perf;
  if ( !v30 )
    goto LABEL_26;
  v31 = v30->fields.effectcontrol;
  if ( !v31 )
    goto LABEL_26;
  buffTextClassIconObjectList = (System_Collections_Generic_IEnumerable_TSource__o *)v31->fields.buffTextClassIconObjectList;
  v33 = (System_Func_object__object__o *)sub_1B68920(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v33, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextClassIconObjectList,
                                                               (System_Func_TSource__TResult__o *)v33,
                                                               (const MethodInfo_2E7A03C *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v35 = System_Linq_Enumerable__ToList_object_(
          v34,
          (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.buffTextClassIconList = (struct System_Collections_Generic_List_GameObject__o *)v35;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.buffTextClassIconList, (int32_t)v35, v36, v37);
  v39 = v2->fields.perf;
  if ( !v39 )
    goto LABEL_26;
  v40 = v39->fields.effectcontrol;
  if ( !v40 )
    goto LABEL_26;
  PopupObject = WrapBaseBattlePopupControl__CreatePopupObject(
                  (WrapBaseBattlePopupControl_o *)v2,
                  v40->fields.avoidanceObject,
                  0,
                  v38);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, PopupObject, v42);
  v2->fields.avoidanceObj = PopupObject;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.avoidanceObj, (int32_t)PopupObject, v43, v44);
  v46 = v2->fields.perf;
  if ( !v46 )
    goto LABEL_26;
  v47 = v46->fields.effectcontrol;
  if ( !v47 )
    goto LABEL_26;
  v48 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v47->fields.avoidanceTextObject,
          0,
          v45);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v48, v49);
  v2->fields.avoidanceTextObj = v48;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.avoidanceTextObj, (int32_t)v48, v50, v51);
  v53 = v2->fields.perf;
  if ( !v53 )
    goto LABEL_26;
  v54 = v53->fields.effectcontrol;
  if ( !v54 )
    goto LABEL_26;
  v55 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v54->fields._AvoidResetDamageObject_k__BackingField,
          0,
          v52);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v55, v56);
  v2->fields.avoidResetDamageObj = v55;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.avoidResetDamageObj, (int32_t)v55, v57, v58);
  v60 = v2->fields.perf;
  if ( !v60 )
    goto LABEL_26;
  v61 = v60->fields.effectcontrol;
  if ( !v61 )
    goto LABEL_26;
  v62 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v61->fields._AvoidResetDamageTextObject_k__BackingField,
          0,
          v59);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v62, v63);
  v2->fields.avoidResetDamageTextObj = v62;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.avoidResetDamageTextObj, (int32_t)v62, v64, v65);
  v67 = v2->fields.perf;
  if ( !v67 )
    goto LABEL_26;
  v68 = v67->fields.effectcontrol;
  if ( !v68 )
    goto LABEL_26;
  v69 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v68->fields.invincibleObject,
          0,
          v66);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v69, v70);
  v2->fields.invincibleObj = v69;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.invincibleObj, (int32_t)v69, v71, v72);
  v74 = v2->fields.perf;
  if ( !v74
    || (v75 = v74->fields.effectcontrol) == 0LL
    || (v76 = WrapBaseBattlePopupControl__CreatePopupObject(
                (WrapBaseBattlePopupControl_o *)v2,
                v75->fields._specialInvincibleObject_k__BackingField,
                0,
                v73),
        WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v76, v77),
        v2->fields.spInvincibleObj = v76,
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.spInvincibleObj, (int32_t)v76, v78, v79),
        (v81 = v2->fields.perf) == 0LL)
    || (v82 = v81->fields.effectcontrol) == 0LL )
  {
LABEL_26:
    sub_1B68930(this, method);
  }
  v83 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v82->fields.buffIconObject,
          0,
          v80);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v83, v84);
  v2->fields.buffIconObj = v83;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.buffIconObj, (int32_t)v83, v85, v86);
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
    sub_1B68930(this, buffList);
  return BattleEffectControl__SetBuffIconObject_42410032(effectcontrol, buffList, this->fields.buffIconObj, 0LL);
}