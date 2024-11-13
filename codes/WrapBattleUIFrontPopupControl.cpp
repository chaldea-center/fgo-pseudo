void __fastcall WrapBattleUIFrontPopupControl___ctor(
        WrapBattleUIFrontPopupControl_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  if ( !inPerf )
    sub_1BCAA3C(this, 0LL);
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
  __int64 v6; // x2
  struct System_Collections_Generic_List_GameObject__o *buffTextClassIconList; // x21
  Il2CppObject *object; // x0
  Il2CppObject *v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4B18AA0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&color, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_GameObject___, v5, v6);
    byte_4B18AA0 = 1;
  }
  buffTextClassIconList = this->fields.buffTextClassIconList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextClassIconList,
             (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_GameObject___);
  v9 = BasicHelper__IndexValue_object__49289180(
         (System_Collections_Generic_List_T__o *)buffTextClassIconList,
         color - 1,
         object,
         (const MethodInfo_2F017DC *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           (UnityEngine_GameObject_o *)v9,
           1,
           v10);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall WrapBattleUIFrontPopupControl__GetBuffTextObject(
        WrapBattleUIFrontPopupControl_o *this,
        int32_t color,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_List_GameObject__o *buffTextList; // x21
  Il2CppObject *object; // x0
  Il2CppObject *v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4B18A9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&color, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_GameObject___, v5, v6);
    byte_4B18A9F = 1;
  }
  buffTextList = this->fields.buffTextList;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)buffTextList,
             (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_GameObject___);
  v9 = BasicHelper__IndexValue_object__49289180(
         (System_Collections_Generic_List_T__o *)buffTextList,
         color - 1,
         object,
         (const MethodInfo_2F017DC *)Method_BasicHelper_IndexValue_GameObject___);
  return WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)this,
           (UnityEngine_GameObject_o *)v9,
           1,
           v10);
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

  if ( (byte_4B18A9E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_GameObject___, critical, week);
    byte_4B18A9E = 1;
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
  v11 = BasicHelper__IndexValue_object__49289180(
          (System_Collections_Generic_List_T__o *)this->fields.damageList,
          v10,
          0LL,
          (const MethodInfo_2F017DC *)Method_BasicHelper_IndexValue_GameObject___);
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

  if ( (byte_4B18AA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_GameObject___, *(_QWORD *)&id, method);
    byte_4B18AA1 = 1;
  }
  v5 = BasicHelper__IndexValue_object__49289180(
         (System_Collections_Generic_List_T__o *)this->fields.effectList,
         id,
         0LL,
         (const MethodInfo_2F017DC *)Method_BasicHelper_IndexValue_GameObject___);
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
  __int64 v3; // x3
  WrapBattleUIFrontPopupControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattleEffectControl_o *effectcontrol; // x8
  System_Collections_Generic_IEnumerable_TSource__o *EffectList; // x20
  System_Func_object__object__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_TSource__o *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x2
  __int64 v24; // x3
  struct BattlePerformance_o *v25; // x8
  struct BattleEffectControl_o *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *damageObjectlist; // x20
  System_Func_object__object__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_TSource__o *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x2
  __int64 v38; // x3
  struct BattlePerformance_o *v39; // x8
  struct BattleEffectControl_o *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextObjectlist; // x20
  System_Func_object__object__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_List_TSource__o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x2
  __int64 v52; // x3
  struct BattlePerformance_o *v53; // x8
  struct BattleEffectControl_o *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffTextClassIconObjectList; // x20
  System_Func_object__object__o *v56; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Collections_Generic_List_TSource__o *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // x3
  struct BattlePerformance_o *v66; // x8
  struct BattleEffectControl_o *v67; // x8
  UnityEngine_GameObject_o *PopupObject; // x20
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
  const MethodInfo *v131; // x3
  struct BattlePerformance_o *v132; // x8
  struct BattleEffectControl_o *v133; // x8
  UnityEngine_GameObject_o *v134; // x20
  const MethodInfo *v135; // x2
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7

  v4 = this;
  if ( (byte_4B18A9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_GameObject__GameObject___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_GameObject___, v5, v6);
    sub_1BCA7E0(&System_Func_GameObject__GameObject__TypeInfo, v7, v8);
    this = (WrapBattleUIFrontPopupControl_o *)sub_1BCA7E0(&Method_WrapBattleUIFrontPopupControl_MakePrefab__, v9, v10);
    byte_4B18A9D = 1;
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_26;
  effectcontrol = perf->fields.effectcontrol;
  if ( !effectcontrol )
    goto LABEL_26;
  EffectList = (System_Collections_Generic_IEnumerable_TSource__o *)effectcontrol->fields.EffectList;
  v14 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_GameObject__GameObject__TypeInfo, method, v2, v3);
  System_Func_object__object____ctor(v14, (Il2CppObject *)v4, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               EffectList,
                                                               (System_Func_TSource__TResult__o *)v14,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v16 = System_Linq_Enumerable__ToList_object_(
          v15,
          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v4->fields.effectList = (struct System_Collections_Generic_List_GameObject__o *)v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.effectList, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v25 = v4->fields.perf;
  if ( !v25 )
    goto LABEL_26;
  v26 = v25->fields.effectcontrol;
  if ( !v26 )
    goto LABEL_26;
  damageObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v26->fields.damageObjectlist;
  v28 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_GameObject__GameObject__TypeInfo, method, v23, v24);
  System_Func_object__object____ctor(v28, (Il2CppObject *)v4, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               damageObjectlist,
                                                               (System_Func_TSource__TResult__o *)v28,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v30 = System_Linq_Enumerable__ToList_object_(
          v29,
          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v4->fields.damageList = (struct System_Collections_Generic_List_GameObject__o *)v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.damageList, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v39 = v4->fields.perf;
  if ( !v39 )
    goto LABEL_26;
  v40 = v39->fields.effectcontrol;
  if ( !v40 )
    goto LABEL_26;
  buffTextObjectlist = (System_Collections_Generic_IEnumerable_TSource__o *)v40->fields.buffTextObjectlist;
  v42 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_GameObject__GameObject__TypeInfo, method, v37, v38);
  System_Func_object__object____ctor(v42, (Il2CppObject *)v4, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextObjectlist,
                                                               (System_Func_TSource__TResult__o *)v42,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v44 = System_Linq_Enumerable__ToList_object_(
          v43,
          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v4->fields.buffTextList = (struct System_Collections_Generic_List_GameObject__o *)v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.buffTextList, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  v53 = v4->fields.perf;
  if ( !v53 )
    goto LABEL_26;
  v54 = v53->fields.effectcontrol;
  if ( !v54 )
    goto LABEL_26;
  buffTextClassIconObjectList = (System_Collections_Generic_IEnumerable_TSource__o *)v54->fields.buffTextClassIconObjectList;
  v56 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_GameObject__GameObject__TypeInfo, method, v51, v52);
  System_Func_object__object____ctor(v56, (Il2CppObject *)v4, Method_WrapBattleUIFrontPopupControl_MakePrefab__, 0LL);
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               buffTextClassIconObjectList,
                                                               (System_Func_TSource__TResult__o *)v56,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_GameObject__GameObject___);
  v58 = System_Linq_Enumerable__ToList_object_(
          v57,
          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v4->fields.buffTextClassIconList = (struct System_Collections_Generic_List_GameObject__o *)v58;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.buffTextClassIconList,
    (int64_t)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v66 = v4->fields.perf;
  if ( !v66 )
    goto LABEL_26;
  v67 = v66->fields.effectcontrol;
  if ( !v67 )
    goto LABEL_26;
  PopupObject = WrapBaseBattlePopupControl__CreatePopupObject(
                  (WrapBaseBattlePopupControl_o *)v4,
                  v67->fields.avoidanceObject,
                  0,
                  v65);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v4, PopupObject, v69);
  v4->fields.avoidanceObj = PopupObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.avoidanceObj,
    (int64_t)PopupObject,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v77 = v4->fields.perf;
  if ( !v77 )
    goto LABEL_26;
  v78 = v77->fields.effectcontrol;
  if ( !v78 )
    goto LABEL_26;
  v79 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v4,
          v78->fields.avoidanceTextObject,
          0,
          v76);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v4, v79, v80);
  v4->fields.avoidanceTextObj = v79;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.avoidanceTextObj, (int64_t)v79, v81, v82, v83, v84, v85, v86);
  v88 = v4->fields.perf;
  if ( !v88 )
    goto LABEL_26;
  v89 = v88->fields.effectcontrol;
  if ( !v89 )
    goto LABEL_26;
  v90 = WrapBaseBattlePopupControl__CreatePopupObject(
          (WrapBaseBattlePopupControl_o *)v4,
          v89->fields._AvoidResetDamageObject_k__BackingField,
          0,
          v87);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v4, v90, v91);
  v4->fields.avoidResetDamageObj = v90;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.avoidResetDamageObj, (int64_t)v90, v92, v93, v94, v95, v96, v97);
  v99 = v4->fields.perf;
  if ( !v99 )
    goto LABEL_26;
  v100 = v99->fields.effectcontrol;
  if ( !v100 )
    goto LABEL_26;
  v101 = WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)v4,
           v100->fields._AvoidResetDamageTextObject_k__BackingField,
           0,
           v98);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v4, v101, v102);
  v4->fields.avoidResetDamageTextObj = v101;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.avoidResetDamageTextObj,
    (int64_t)v101,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  v110 = v4->fields.perf;
  if ( !v110 )
    goto LABEL_26;
  v111 = v110->fields.effectcontrol;
  if ( !v111 )
    goto LABEL_26;
  v112 = WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)v4,
           v111->fields.invincibleObject,
           0,
           v109);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v4, v112, v113);
  v4->fields.invincibleObj = v112;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.invincibleObj,
    (int64_t)v112,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  v121 = v4->fields.perf;
  if ( !v121
    || (v122 = v121->fields.effectcontrol) == 0LL
    || (v123 = WrapBaseBattlePopupControl__CreatePopupObject(
                 (WrapBaseBattlePopupControl_o *)v4,
                 v122->fields._specialInvincibleObject_k__BackingField,
                 0,
                 v120),
        WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v4, v123, v124),
        v4->fields.spInvincibleObj = v123,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v4->fields.spInvincibleObj,
          (int64_t)v123,
          v125,
          v126,
          v127,
          v128,
          v129,
          v130),
        (v132 = v4->fields.perf) == 0LL)
    || (v133 = v132->fields.effectcontrol) == 0LL )
  {
LABEL_26:
    sub_1BCAA3C(this, method);
  }
  v134 = WrapBaseBattlePopupControl__CreatePopupObject(
           (WrapBaseBattlePopupControl_o *)v4,
           v133->fields.buffIconObject,
           0,
           v131);
  WrapBaseBattlePopupControl__ApplyLayerRecursively((WrapBaseBattlePopupControl_o *)v4, v134, v135);
  v4->fields.buffIconObj = v134;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.buffIconObj, (int64_t)v134, v136, v137, v138, v139, v140, v141);
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
    sub_1BCAA3C(this, buffList);
  return BattleEffectControl__SetBuffIconObject_43446016(effectcontrol, buffList, this->fields.buffIconObj, 0LL);
}