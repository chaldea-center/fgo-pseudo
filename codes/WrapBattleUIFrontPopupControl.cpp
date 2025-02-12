void __fastcall WrapBattleUIFrontPopupControl___ctor(
        WrapBattleUIFrontPopupControl_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  if ( !inPerf )
    sub_1C13F80(this, 0LL);
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

  if ( (byte_4BB702D & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&color);
    sub_1C13D24(&Method_System_Linq_Enumerable_First_GameObject___, v5);
    byte_4BB702D = 1;
  }
  buffTextClassIconList = this->fields.buffTextClassIconList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextClassIconList,
             (const MethodInfo_2FAFDD4 *)Method_System_Linq_Enumerable_First_GameObject___);
  v8 = BasicHelper__IndexValue_object__49799096(
         (System_Collections_Generic_List_T__o *)buffTextClassIconList,
         color - 1,
         object,
         (const MethodInfo_2F7DFB8 *)Method_BasicHelper_IndexValue_GameObject___);
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

  if ( (byte_4BB702C & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&color);
    sub_1C13D24(&Method_System_Linq_Enumerable_First_GameObject___, v5);
    byte_4BB702C = 1;
  }
  buffTextList = this->fields.buffTextList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextList,
             (const MethodInfo_2FAFDD4 *)Method_System_Linq_Enumerable_First_GameObject___);
  v8 = BasicHelper__IndexValue_object__49799096(
         (System_Collections_Generic_List_T__o *)buffTextList,
         color - 1,
         object,
         (const MethodInfo_2F7DFB8 *)Method_BasicHelper_IndexValue_GameObject___);
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

  if ( (byte_4BB702B & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_GameObject___, critical);
    byte_4BB702B = 1;
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
  v11 = BasicHelper__IndexValue_object__49799096(
          (System_Collections_Generic_List_T__o *)this->fields.damageList,
          v10,
          0LL,
          (const MethodInfo_2F7DFB8 *)Method_BasicHelper_IndexValue_GameObject___);
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

  if ( (byte_4BB702E & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&id);
    byte_4BB702E = 1;
  }
  v5 = BasicHelper__IndexValue_object__49799096(
         (System_Collections_Generic_List_T__o *)this->fields.effectList,
         id,
         0LL,
         (const MethodInfo_2F7DFB8 *)Method_BasicHelper_IndexValue_GameObject___);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct BattlePerformance_o *v18; // x8
  struct BattleEffectControl_o *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *damageObjectlist; // x20
  System_Func_object__object__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_TSource__o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct BattlePerformance_o *v30; // x8
  struct BattleEffectControl_o *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextObjectlist; // x20
  System_Func_object__object__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_List_TSource__o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct BattlePerformance_o *v42; // x8
  struct BattleEffectControl_o *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextClassIconObjectList; // x20
  System_Func_object__object__o *v45; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_List_TSource__o *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x3
  struct BattlePerformance_o *v55; // x8
  struct BattleEffectControl_o *v56; // x8
  UnityEngine_GameObject_o *PopupObject; // x20
  const MethodInfo *v58; // x2
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // x3
  struct BattlePerformance_o *v66; // x8
  struct BattleEffectControl_o *v67; // x8
  UnityEngine_GameObject_o *v68; // x20
  const MethodInfo *v69; // x2
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  const MethodInfo *v76; // x3
  struct BattlePerformance_o *v77; // x8
  struct BattleEffectControl_o *v78; // x8
  UnityEngine_GameObject_o *v79; // x20
  const MethodInfo *v80; // x2
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  const MethodInfo *v87; // x3
  struct BattlePerformance_o *v88; // x8
  struct BattleEffectControl_o *v89; // x8
  UnityEngine_GameObject_o *v90; // x20
  const MethodInfo *v91; // x2
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  const MethodInfo *v98; // x3
  struct BattlePerformance_o *v99; // x8
  struct BattleEffectControl_o *v100; // x8
  UnityEngine_GameObject_o *v101; // x20
  const MethodInfo *v102; // x2
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  const MethodInfo *v109; // x3
  struct BattlePerformance_o *v110; // x8
  struct BattleEffectControl_o *v111; // x8
  UnityEngine_GameObject_o *v112; // x20
  const MethodInfo *v113; // x2
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  const MethodInfo *v120; // x3
  struct BattlePerformance_o *v121; // x8
  struct BattleEffectControl_o *v122; // x8
  UnityEngine_GameObject_o *v123; // x20
  const MethodInfo *v124; // x2
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7

  v2 = this;
  if ( (byte_4BB702A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_GameObject__GameObject___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_GameObject___, v3);
    sub_1C13D24(&System_Func_GameObject__GameObject__TypeInfo, v4);
    this = (WrapBattleUIFrontPopupControl_o *)sub_1C13D24(&Method_WrapBattleUIFrontPopupControl_MakePrefab__, v5);
    byte_4BB702A = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_26;
  effectcontrol = perf->fields.effectcontrol;
  if ( !effectcontrol )
    goto LABEL_26;
  EffectList = (System_Collections_Generic_IEnumerable_TSource__o *)effectcontrol->fields.EffectList;
  v9 = (System_Func_object__object__o *)sub_1C13F70(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v9, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               EffectList,
                                                               (System_Func_TSource__TResult__o *)v9,
                                                               (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v11 = System_Linq_Enumerable__ToList_object_(
          v10,
          (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.effectList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.effectList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = v2->fields.perf;
  if ( !v18 )
    goto LABEL_26;
  v19 = v18->fields.effectcontrol;
  if ( !v19 )
    goto LABEL_26;
  damageObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v19->fields.damageObjectlist;
  v21 = (System_Func_object__object__o *)sub_1C13F70(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v21, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               damageObjectlist,
                                                               (System_Func_TSource__TResult__o *)v21,
                                                               (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v23 = System_Linq_Enumerable__ToList_object_(
          v22,
          (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.damageList = (struct System_Collections_Generic_List_GameObject__o *)v23;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.damageList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = v2->fields.perf;
  if ( !v30 )
    goto LABEL_26;
  v31 = v30->fields.effectcontrol;
  if ( !v31 )
    goto LABEL_26;
  buffTextObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v31->fields.buffTextObjectlist;
  v33 = (System_Func_object__object__o *)sub_1C13F70(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v33, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextObjectlist,
                                                               (System_Func_TSource__TResult__o *)v33,
                                                               (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v35 = System_Linq_Enumerable__ToList_object_(
          v34,
          (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.buffTextList = (struct System_Collections_Generic_List_GameObject__o *)v35;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.buffTextList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = v2->fields.perf;
  if ( !v42 )
    goto LABEL_26;
  v43 = v42->fields.effectcontrol;
  if ( !v43 )
    goto LABEL_26;
  buffTextClassIconObjectList = (System_Collections_Generic_IEnumerable_TSource__o *)v43->fields.buffTextClassIconObjectList;
  v45 = (System_Func_object__object__o *)sub_1C13F70(System_Func_GameObject__GameObject__TypeInfo);
  System_Func_object__object____ctor(v45, (Il2CppObject *)v2, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextClassIconObjectList,
                                                               (System_Func_TSource__TResult__o *)v45,
                                                               (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v47 = System_Linq_Enumerable__ToList_object_(
          v46,
          (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v2->fields.buffTextClassIconList = (struct System_Collections_Generic_List_GameObject__o *)v47;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v2->fields.buffTextClassIconList,
    (int64_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v55 = v2->fields.perf;
  if ( !v55 )
    goto LABEL_26;
  v56 = v55->fields.effectcontrol;
  if ( !v56 )
    goto LABEL_26;
  PopupObject = WrapBaseBattlePopupControl__CreatePopupObject(
                  (WrapBaseBattlePopupControl_o *)v2,
                  v56->fields.avoidanceObject,
                  0,
                  v54);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, PopupObject, v58);
  v2->fields.avoidanceObj = PopupObject;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v2->fields.avoidanceObj,
    (int64_t)PopupObject,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v66 = v2->fields.perf;
  if ( !v66 )
    goto LABEL_26;
  v67 = v66->fields.effectcontrol;
  if ( !v67 )
    goto LABEL_26;
  v68 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v67->fields.avoidanceTextObject,
          0,
          v65);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v68, v69);
  v2->fields.avoidanceTextObj = v68;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.avoidanceTextObj, (int64_t)v68, v70, v71, v72, v73, v74, v75);
  v77 = v2->fields.perf;
  if ( !v77 )
    goto LABEL_26;
  v78 = v77->fields.effectcontrol;
  if ( !v78 )
    goto LABEL_26;
  v79 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v78->fields._AvoidResetDamageObject_k__BackingField,
          0,
          v76);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v79, v80);
  v2->fields.avoidResetDamageObj = v79;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.avoidResetDamageObj, (int64_t)v79, v81, v82, v83, v84, v85, v86);
  v88 = v2->fields.perf;
  if ( !v88 )
    goto LABEL_26;
  v89 = v88->fields.effectcontrol;
  if ( !v89 )
    goto LABEL_26;
  v90 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v2,
          v89->fields._AvoidResetDamageTextObject_k__BackingField,
          0,
          v87);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v90, v91);
  v2->fields.avoidResetDamageTextObj = v90;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v2->fields.avoidResetDamageTextObj,
    (int64_t)v90,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  v99 = v2->fields.perf;
  if ( !v99 )
    goto LABEL_26;
  v100 = v99->fields.effectcontrol;
  if ( !v100 )
    goto LABEL_26;
  v101 = WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)v2,
           v100->fields.invincibleObject,
           0,
           v98);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v101, v102);
  v2->fields.invincibleObj = v101;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v2->fields.invincibleObj,
    (int64_t)v101,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  v110 = v2->fields.perf;
  if ( !v110
    || (v111 = v110->fields.effectcontrol) == 0LL
    || (v112 = WrapBaseBattlePopupControl__CreatePopupObject(
                 (WrapBaseBattlePopupControl_o *)v2,
                 v111->fields._specialInvincibleObject_k__BackingField,
                 0,
                 v109),
        WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v112, v113),
        v2->fields.spInvincibleObj = v112,
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v2->fields.spInvincibleObj,
          (int64_t)v112,
          v114,
          v115,
          v116,
          v117,
          v118,
          v119),
        (v121 = v2->fields.perf) == 0LL)
    || (v122 = v121->fields.effectcontrol) == 0LL )
  {
LABEL_26:
    sub_1C13F80(this, method);
  }
  v123 = WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)v2,
           v122->fields.buffIconObject,
           0,
           v120);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v2, v123, v124);
  v2->fields.buffIconObj = v123;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v2->fields.buffIconObj, (int64_t)v123, v125, v126, v127, v128, v129, v130);
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
    sub_1C13F80(this, buffList);
  return BattleEffectControl__SetBuffIconObject_43907416(effectcontrol, buffList, this->fields.buffIconObj, 0LL);
}