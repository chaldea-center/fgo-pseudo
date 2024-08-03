void __fastcall WrapBattleUIFrontPopupControl___ctor(
        WrapBattleUIFrontPopupControl_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  if ( !inPerf )
    sub_1B64324(this);
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

  if ( (byte_49FEBE6 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&color);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_GameObject___, v5);
    byte_49FEBE6 = 1;
  }
  buffTextClassIconList = this->fields.buffTextClassIconList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextClassIconList,
             (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_GameObject___);
  v8 = BasicHelper__IndexValue_object__48398780(
         (System_Collections_Generic_List_T__o *)buffTextClassIconList,
         color - 1,
         object,
         (const MethodInfo_2E281BC *)Method_BasicHelper_IndexValue_GameObject___);
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

  if ( (byte_49FEBE5 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&color);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_GameObject___, v5);
    byte_49FEBE5 = 1;
  }
  buffTextList = this->fields.buffTextList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextList,
             (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_GameObject___);
  v8 = BasicHelper__IndexValue_object__48398780(
         (System_Collections_Generic_List_T__o *)buffTextList,
         color - 1,
         object,
         (const MethodInfo_2E281BC *)Method_BasicHelper_IndexValue_GameObject___);
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

  if ( (byte_49FEBE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_GameObject___, critical);
    byte_49FEBE4 = 1;
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
  v11 = BasicHelper__IndexValue_object__48398780(
          (System_Collections_Generic_List_T__o *)this->fields.damageList,
          v10,
          0LL,
          (const MethodInfo_2E281BC *)Method_BasicHelper_IndexValue_GameObject___);
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

  if ( (byte_49FEBE7 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&id);
    byte_49FEBE7 = 1;
  }
  v5 = BasicHelper__IndexValue_object__48398780(
         (System_Collections_Generic_List_T__o *)this->fields.effectList,
         id,
         0LL,
         (const MethodInfo_2E281BC *)Method_BasicHelper_IndexValue_GameObject___);
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
  __int64 v2; // x2
  WrapBattleUIFrontPopupControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8
  System_Collections_Generic_IEnumerable_TSource__o *EffectList; // x20
  System_Func_object__object__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_List_TSource__o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  struct BattlePerformance_o *v17; // x8
  struct BattleEffectControl_o *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *damageObjectlist; // x20
  System_Func_object__object__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_List_TSource__o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  struct BattlePerformance_o *v27; // x8
  struct BattleEffectControl_o *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextObjectlist; // x20
  System_Func_object__object__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_List_TSource__o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x1
  __int64 v36; // x2
  struct BattlePerformance_o *v37; // x8
  struct BattleEffectControl_o *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextClassIconObjectList; // x20
  System_Func_object__object__o *v40; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_Generic_List_TSource__o *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  const MethodInfo *v45; // x3
  struct BattlePerformance_o *v46; // x8
  struct BattleEffectControl_o *v47; // x8
  UnityEngine_GameObject_o *PopupObject; // x20
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
  const MethodInfo *v87; // x3
  struct BattlePerformance_o *v88; // x8
  struct BattleEffectControl_o *v89; // x8
  UnityEngine_GameObject_o *v90; // x20
  const MethodInfo *v91; // x2
  int32_t v92; // w2
  int32_t v93; // w3

  v3 = this;
  if ( (byte_49FEBE3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_GameObject__GameObject___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_GameObject___, v4);
    sub_1B640C8(&System_Func_GameObject__GameObject__TypeInfo, v5);
    this = (WrapBattleUIFrontPopupControl_o *)sub_1B640C8(&Method_WrapBattleUIFrontPopupControl_MakePrefab__, v6);
    byte_49FEBE3 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_26;
  effectcontrol = perf->fields.effectcontrol;
  if ( !effectcontrol )
    goto LABEL_26;
  EffectList = (System_Collections_Generic_IEnumerable_TSource__o *)effectcontrol->fields.EffectList;
  v10 = (System_Func_object__object__o *)sub_1B64314(System_Func_GameObject__GameObject__TypeInfo, method, v2);
  System_Func_object__object____ctor(v10, (Il2CppObject *)v3, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               EffectList,
                                                               (System_Func_TSource__TResult__o *)v10,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v12 = System_Linq_Enumerable__ToList_object_(
          v11,
          (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v3->fields.effectList = (struct System_Collections_Generic_List_GameObject__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.effectList, (int32_t)v12, v13, v14);
  v17 = v3->fields.perf;
  if ( !v17 )
    goto LABEL_26;
  v18 = v17->fields.effectcontrol;
  if ( !v18 )
    goto LABEL_26;
  damageObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v18->fields.damageObjectlist;
  v20 = (System_Func_object__object__o *)sub_1B64314(System_Func_GameObject__GameObject__TypeInfo, v15, v16);
  System_Func_object__object____ctor(v20, (Il2CppObject *)v3, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               damageObjectlist,
                                                               (System_Func_TSource__TResult__o *)v20,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v22 = System_Linq_Enumerable__ToList_object_(
          v21,
          (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v3->fields.damageList = (struct System_Collections_Generic_List_GameObject__o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.damageList, (int32_t)v22, v23, v24);
  v27 = v3->fields.perf;
  if ( !v27 )
    goto LABEL_26;
  v28 = v27->fields.effectcontrol;
  if ( !v28 )
    goto LABEL_26;
  buffTextObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields.buffTextObjectlist;
  v30 = (System_Func_object__object__o *)sub_1B64314(System_Func_GameObject__GameObject__TypeInfo, v25, v26);
  System_Func_object__object____ctor(v30, (Il2CppObject *)v3, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextObjectlist,
                                                               (System_Func_TSource__TResult__o *)v30,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v32 = System_Linq_Enumerable__ToList_object_(
          v31,
          (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v3->fields.buffTextList = (struct System_Collections_Generic_List_GameObject__o *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.buffTextList, (int32_t)v32, v33, v34);
  v37 = v3->fields.perf;
  if ( !v37 )
    goto LABEL_26;
  v38 = v37->fields.effectcontrol;
  if ( !v38 )
    goto LABEL_26;
  buffTextClassIconObjectList = (System_Collections_Generic_IEnumerable_TSource__o *)v38->fields.buffTextClassIconObjectList;
  v40 = (System_Func_object__object__o *)sub_1B64314(System_Func_GameObject__GameObject__TypeInfo, v35, v36);
  System_Func_object__object____ctor(v40, (Il2CppObject *)v3, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextClassIconObjectList,
                                                               (System_Func_TSource__TResult__o *)v40,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v42 = System_Linq_Enumerable__ToList_object_(
          v41,
          (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v3->fields.buffTextClassIconList = (struct System_Collections_Generic_List_GameObject__o *)v42;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.buffTextClassIconList, (int32_t)v42, v43, v44);
  v46 = v3->fields.perf;
  if ( !v46 )
    goto LABEL_26;
  v47 = v46->fields.effectcontrol;
  if ( !v47 )
    goto LABEL_26;
  PopupObject = WrapBaseBattlePopupControl__CreatePopupObject(
                  (WrapBaseBattlePopupControl_o *)v3,
                  v47->fields.avoidanceObject,
                  0,
                  v45);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v3, PopupObject, v49);
  v3->fields.avoidanceObj = PopupObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.avoidanceObj, (int32_t)PopupObject, v50, v51);
  v53 = v3->fields.perf;
  if ( !v53 )
    goto LABEL_26;
  v54 = v53->fields.effectcontrol;
  if ( !v54 )
    goto LABEL_26;
  v55 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v3,
          v54->fields.avoidanceTextObject,
          0,
          v52);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v3, v55, v56);
  v3->fields.avoidanceTextObj = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.avoidanceTextObj, (int32_t)v55, v57, v58);
  v60 = v3->fields.perf;
  if ( !v60 )
    goto LABEL_26;
  v61 = v60->fields.effectcontrol;
  if ( !v61 )
    goto LABEL_26;
  v62 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v3,
          v61->fields._AvoidResetDamageObject_k__BackingField,
          0,
          v59);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v3, v62, v63);
  v3->fields.avoidResetDamageObj = v62;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.avoidResetDamageObj, (int32_t)v62, v64, v65);
  v67 = v3->fields.perf;
  if ( !v67 )
    goto LABEL_26;
  v68 = v67->fields.effectcontrol;
  if ( !v68 )
    goto LABEL_26;
  v69 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v3,
          v68->fields._AvoidResetDamageTextObject_k__BackingField,
          0,
          v66);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v3, v69, v70);
  v3->fields.avoidResetDamageTextObj = v69;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.avoidResetDamageTextObj, (int32_t)v69, v71, v72);
  v74 = v3->fields.perf;
  if ( !v74 )
    goto LABEL_26;
  v75 = v74->fields.effectcontrol;
  if ( !v75 )
    goto LABEL_26;
  v76 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v3,
          v75->fields.invincibleObject,
          0,
          v73);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v3, v76, v77);
  v3->fields.invincibleObj = v76;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.invincibleObj, (int32_t)v76, v78, v79);
  v81 = v3->fields.perf;
  if ( !v81
    || (v82 = v81->fields.effectcontrol) == 0LL
    || (v83 = WrapBaseBattlePopupControl__CreatePopupObject(
                (WrapBaseBattlePopupControl_o *)v3,
                v82->fields._specialInvincibleObject_k__BackingField,
                0,
                v80),
        WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v3, v83, v84),
        v3->fields.spInvincibleObj = v83,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.spInvincibleObj, (int32_t)v83, v85, v86),
        (v88 = v3->fields.perf) == 0LL)
    || (v89 = v88->fields.effectcontrol) == 0LL )
  {
LABEL_26:
    sub_1B64324(this);
  }
  v90 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v3,
          v89->fields.buffIconObject,
          0,
          v87);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v3, v90, v91);
  v3->fields.buffIconObj = v90;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.buffIconObj, (int32_t)v90, v92, v93);
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
    sub_1B64324(this);
  return BattleEffectControl__SetBuffIconObject_42336208(effectcontrol, buffList, this->fields.buffIconObj, 0LL);
}