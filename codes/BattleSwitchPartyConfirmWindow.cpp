void BattleSwitchPartyConfirmWindow___ctor(BattleSwitchPartyConfirmWindow_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleSwitchPartyConfirmWindow__Awake(BattleSwitchPartyConfirmWindow_o *this, const MethodInfo *method)
{
  ;
}


void BattleSwitchPartyConfirmWindow__Close(
        BattleSwitchPartyConfirmWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BattleWindowComponent_EndCall_o *v12; // x20

  if ( (byte_4CB9AC2 & 1) == 0 )
  {
    sub_1C6BA08(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C6BA08(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass16_0__Close_b__0__);
    sub_1C6BA08(&BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
    byte_4CB9AC2 = 1;
  }
  v5 = sub_1C6BC54(BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = call;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)call, v10, v11);
  v12 = (BattleWindowComponent_EndCall_o *)sub_1C6BC54(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleSwitchPartyConfirmWindow___c__DisplayClass16_0__Close_b__0__,
    0);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, v12, 0);
}


void BattleSwitchPartyConfirmWindow__OnClickCloseButton(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_closeCallback; // x19
  System_Action_T__o *closeCallback; // t1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB9AC6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_int___);
    byte_4CB9AC6 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    closeCallback = (System_Action_T__o *)this->fields.closeCallback;
    p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
    ActionExtensions__Call_int_(closeCallback, -1, (const MethodInfo_3085EC4 *)Method_ActionExtensions_Call_int___);
    p_closeCallback->klass = 0;
    sub_1C6B9AC(p_closeCallback, 0, v5, v6);
  }
}


void BattleSwitchPartyConfirmWindow__OnClickConfirmButton(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_closeCallback; // x19
  System_Action_T__o *closeCallback; // t1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB9AC7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_int___);
    byte_4CB9AC7 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    closeCallback = (System_Action_T__o *)this->fields.closeCallback;
    p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
    ActionExtensions__Call_int_(
      closeCallback,
      (int32_t)p_closeCallback[-1].fields._ThumbnailSpritePath_k__BackingField,
      (const MethodInfo_3085EC4 *)Method_ActionExtensions_Call_int___);
    p_closeCallback->klass = 0;
    sub_1C6B9AC(p_closeCallback, 0, v5, v6);
  }
}


void BattleSwitchPartyConfirmWindow__Open(
        BattleSwitchPartyConfirmWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *ParentPanel; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  BattleWindowOuterClickComponent_OuterClickCall_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4CB9AC1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleSwitchPartyConfirmWindow_OnClickCloseButton__);
    sub_1C6BA08(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4CB9AC1 = 1;
  }
  ParentPanel = BattleSwitchPartyConfirmWindow__get_ParentPanel(this, (const MethodInfo *)call);
  if ( !ParentPanel )
    sub_1C6BC60(0, v6);
  UnityEngine_GameObject__SetActive(ParentPanel, 1, 0);
  BattleSwitchPartyConfirmWindow__UpdateSprites(this, v7);
  v8 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C6BC54(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleSwitchPartyConfirmWindow_OnClickCloseButton__,
    v9);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v8,
    v10);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
}


void BattleSwitchPartyConfirmWindow__SetSwitchPartyData(
        BattleSwitchPartyConfirmWindow_o *this,
        BattleData_o *battleData,
        int32_t nextPtIndex,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  BattleData_o *v7; // x22
  int32_t SelectedPartyIndex_k__BackingField; // w21
  struct System_Action_int__o **p_closeCallback; // x0
  System_String_o *v10; // x0
  BattleServantData_array *PlayerServantList; // x0
  BattleSwitchPartyConfirmWindow___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__17_0; // x20
  Il2CppObject *v15; // x22
  struct BattleSwitchPartyConfirmWindow___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Object_array *v20; // x19
  UILabel_o *currentPartyNameLabel; // x20
  const MethodInfo *v22; // x1
  struct BattleSelectServantComponent_array *currentPartySvtList; // x8
  __int64 v24; // x28
  int max_length; // w9
  unsigned int v26; // w3
  unsigned int v27; // w9
  BattleSelectServantComponent_o *v28; // x20
  BattleServantData_o *v29; // x21
  bool isAlive; // w0
  DeckData_o *SelectPartyMyDeck; // x19
  System_Collections_Generic_List_object__o *v32; // x28
  Il2CppObject *v33; // x23
  struct BattleDeckServantData_array *svts; // x19
  BattleData_o *v35; // x20
  BattleEntity_o *v36; // x21
  int v37; // w8
  unsigned int v38; // w22
  BattleDeckServantData_o *v39; // x19
  Il2CppObject *DataFromMessagePackString_object; // x19
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  BattleServantData_PreEntryStatus_o *v43; // x19
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int m_CancellationTokenSource; // w8
  BattleSwitchPartyConfirmWindow_o *v47; // x19
  int i; // w22
  int32_t *v49; // x25
  struct UnityEngine_GameObject_o *closeBtnObject; // x27
  UnityEngine_GameObject_c *klass; // x8
  char v52; // w26
  char v53; // w24
  unsigned __int64 v54; // x29
  int v55; // w8
  BattleSwitchPartyConfirmWindow_o *v56; // x21
  struct UnityEngine_GameObject_o *v57; // x8
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  Il2CppObject *current; // x19
  __int64 v71; // x20
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x1
  SkillLvEntity_o *Entity; // x0
  __int64 v76; // x1
  SkillLvEntity_o *v77; // x21
  BattleServantData_o *funcId; // x22
  System_Func_object__bool__o *v79; // x19
  BattleServantData_array *object__51783296; // x0
  __int64 v81; // x1
  __int64 v82; // x8
  BattleServantData_o *v83; // x27
  unsigned __int64 v84; // x28
  Il2CppObject *v85; // x0
  __int64 v86; // x1
  FunctionEntity_o *v87; // x21
  Il2CppClass *v88; // x8
  BuffEntity_o *v89; // x29
  struct System_String_array *svals; // x8
  System_String_o *v91; // x22
  DataVals_o *v92; // x19
  __int64 v93; // x0
  __int64 v94; // x1
  int32_t targetType; // w21
  BattleServantData_array *v96; // x1
  const MethodInfo *v97; // x3
  BattleServantData_array *v98; // x22
  il2cpp_array_size_t v99; // x8
  unsigned __int64 v100; // x20
  BattleServantData_o *v101; // x21
  System_Int32_array *Individualities; // x0
  System_Int32_array *ckSelfIndv; // x25
  System_Int32_array *v104; // x24
  System_Int32_array *CkSelfCountIndividuality; // x3
  System_Int32_array *v106; // x0
  System_Int32_array *ckOpIndv; // x25
  System_Int32_array *v108; // x24
  System_Int32_array *CkOpCountIndividuality; // x3
  int32_t type; // w8
  BattleServantData_PreEntryStatus_o *v111; // x21
  __int64 v112; // x0
  BattleServantData_PreEntryStatus_o *PreEntryStatusInfo_k__BackingField; // x21
  __int64 v114; // x0
  __int64 v115; // x1
  Il2CppObject *v116; // x21
  __int64 v117; // x20
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x0
  SkillLvEntity_o *v121; // x0
  __int64 v122; // x1
  SkillLvEntity_o *v123; // x19
  struct System_Int32_array *v124; // x26
  System_Func_object__bool__o *v125; // x21
  BattleServantData_array *IsContainOnFieldsParameter; // x0
  __int64 v127; // x1
  il2cpp_array_size_t v128; // x8
  unsigned __int64 v129; // x24
  FunctionEntity_o *v130; // x21
  struct System_String_array *v131; // x8
  System_String_o *v132; // x25
  DataVals_o *v133; // x22
  __int64 v134; // x0
  __int64 v135; // x1
  int32_t v136; // w21
  BattleServantData_array *v137; // x1
  const MethodInfo *v138; // x3
  BattleServantData_array *v139; // x21
  int v140; // w8
  int j; // w27
  BattleServantData_o *v142; // x8
  BattleServantData_PreEntryStatus_o *v143; // x25
  __int64 v144; // x0
  UILabel_o *nextPartyNameLabel; // x19
  const MethodInfo *v146; // x1
  struct BattleSelectServantComponent_array *nextPartySvtList; // x8
  __int64 v148; // x19
  int v149; // w9
  BattleSelectServantComponent_o *v150; // x20
  BattleServantData_o *v151; // x21
  bool v152; // w0
  struct BattleDeckServantData_array *v153; // [xsp+8h] [xbp-108h]
  System_Collections_Generic_List_commandAssistData__o *commandAssistDataList; // [xsp+10h] [xbp-100h]
  BattleEntity_o *battle_ent; // [xsp+18h] [xbp-F8h]
  System_String_o *overwriteDisableMessage; // [xsp+20h] [xbp-F0h]
  BattleSwitchPartyConfirmWindow_o *v157; // [xsp+28h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v158; // [xsp+30h] [xbp-E0h]
  BattleData_o *v159; // [xsp+38h] [xbp-D8h]
  BattleData_o *v160; // [xsp+38h] [xbp-D8h]
  Il2CppObject *Master_object; // [xsp+40h] [xbp-D0h]
  unsigned int v162; // [xsp+48h] [xbp-C8h]
  SkillLvEntity_o *v163; // [xsp+48h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v164; // [xsp+50h] [xbp-C0h]
  BattleServantData_o *v165; // [xsp+58h] [xbp-B8h]
  BattleServantData_o *v166; // [xsp+58h] [xbp-B8h]
  BattleSwitchPartyConfirmWindow_o *v167; // [xsp+60h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v168; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v169; // [xsp+80h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+A0h] [xbp-70h] BYREF
  int32_t result; // [xsp+ACh] [xbp-64h] BYREF

  v7 = battleData;
  v157 = this;
  if ( (byte_4CB9AC3 & 1) == 0 )
  {
    sub_1C6BA08(&BattleServantData_TypeInfo);
    sub_1C6BA08(&Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
    sub_1C6BA08(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C6BA08(&DataVals_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_First_BattleServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1C6BA08(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C6BA08(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&BattleServantData_PreEntryStatus_TypeInfo);
    sub_1C6BA08(&Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__);
    sub_1C6BA08(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__);
    sub_1C6BA08(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    sub_1C6BA08(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__);
    sub_1C6BA08(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    sub_1C6BA08(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_5825/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/);
    sub_1C6BA08(&StringLiteral_5826/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/);
    this = v157;
    byte_4CB9AC3 = 1;
  }
  result = 0;
  value = 0;
  memset(&v169, 0, sizeof(v169));
  if ( !v7 )
    goto LABEL_167;
  v159 = v7;
  SelectedPartyIndex_k__BackingField = v7->fields._SelectedPartyIndex_k__BackingField;
  this->fields.closeCallback = callback;
  p_closeCallback = &this->fields.closeCallback;
  *((_DWORD *)p_closeCallback - 2) = nextPtIndex;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_closeCallback, (int32_t)callback, nextPtIndex, (const MethodInfo *)callback);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  overwriteDisableMessage = LocalizationManager__Get((System_String_o *)StringLiteral_5826/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5825/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/, 0);
  if ( !System_Int32__TryParse(v10, &result, 0) )
    result = 16;
  PlayerServantList = BattleData__getPlayerServantList(v7, 0);
  v12 = BattleSwitchPartyConfirmWindow___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerServantList;
  if ( !BattleSwitchPartyConfirmWindow___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSwitchPartyConfirmWindow___c_TypeInfo);
    v12 = BattleSwitchPartyConfirmWindow___c_TypeInfo;
  }
  _9__17_0 = (System_Func_object__int__o *)v12->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleSwitchPartyConfirmWindow___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__17_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__17_0,
      v15,
      Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__,
      0);
    static_fields = BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Func_BattleServantData__int__o *)_9__17_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TKey__o *)_9__17_0,
                                                               (const MethodInfo_316AB98 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          v19,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  currentPartyNameLabel = v157->fields.currentPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               SelectedPartyIndex_k__BackingField,
                                               v22);
  if ( !currentPartyNameLabel )
    goto LABEL_167;
  UILabel__set_text(currentPartyNameLabel, (System_String_o *)this, 0);
  currentPartySvtList = v157->fields.currentPartySvtList;
  if ( !currentPartySvtList )
    goto LABEL_167;
  v24 = 4;
  while ( 1 )
  {
    max_length = currentPartySvtList->max_length;
    v26 = v24 - 4;
    if ( (int)v24 - 4 >= max_length )
      break;
    if ( v26 >= max_length )
      goto LABEL_169;
    if ( v20 )
    {
      v27 = v20->max_length;
      if ( v26 >= v27 )
LABEL_169:
        sub_1C6BC68(this);
      v28 = (BattleSelectServantComponent_o *)*((_QWORD *)&currentPartySvtList->obj.klass + v24);
      if ( v28 )
      {
        if ( (int)v26 >= (int)v27 )
        {
          BattleSelectServantComponent__setNone(
            *((BattleSelectServantComponent_o **)&currentPartySvtList->obj.klass + v24),
            0);
        }
        else
        {
          v29 = (BattleServantData_o *)*((_QWORD *)&v20->obj.klass + v24);
          BattleSelectServantComponent__setData(
            *((BattleSelectServantComponent_o **)&currentPartySvtList->obj.klass + v24),
            v29,
            1,
            v26,
            0,
            0);
          if ( !v29 )
            goto LABEL_167;
          isAlive = BattleServantData__isAlive(v29, 0, 0);
          BattleSelectServantComponent__setSelectMask(v28, isAlive, overwriteDisableMessage, result, 0, 0);
        }
        ++v24;
        currentPartySvtList = v157->fields.currentPartySvtList;
        if ( currentPartySvtList )
          continue;
      }
    }
    goto LABEL_167;
  }
  v164 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v164,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this = (BattleSwitchPartyConfirmWindow_o *)v159->fields.battle_info;
  if ( !this )
    goto LABEL_167;
  SelectPartyMyDeck = BattleInfoData__GetSelectPartyMyDeck((BattleInfoData_o *)this, v157->fields.nextPartyIndex, 0);
  battle_ent = v159->fields.battle_ent;
  commandAssistDataList = BattleData__CreateLotteryCommandAssistInfo(v159, SelectPartyMyDeck, 0);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  v158 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v158,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_FunctionMaster___);
  this = (BattleSwitchPartyConfirmWindow_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !SelectPartyMyDeck || (svts = SelectPartyMyDeck->fields.svts, v35 = v159, v36 = battle_ent, !svts) )
LABEL_167:
    sub_1C6BC60(this, battleData);
  v37 = svts->max_length;
  v167 = this;
  if ( v37 < 1 )
    goto LABEL_87;
  v38 = 0;
  v153 = svts;
  do
  {
    if ( v38 >= v37 )
      goto LABEL_169;
    v39 = svts->m_Items[v38];
    v165 = (BattleServantData_o *)sub_1C6BC54(BattleServantData_TypeInfo);
    BattleServantData___ctor(v165, 0);
    if ( !v36 )
      goto LABEL_167;
    if ( !v39 )
      goto LABEL_167;
    this = (BattleSwitchPartyConfirmWindow_o *)BattleDeckServantData__GetFollowerType(v39, v36->fields.followerType, 0);
    if ( !v165 )
      goto LABEL_167;
    BattleServantData__setServantData(v165, v39, v36, (int32_t)this, 0, commandAssistDataList, 0);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleData__get_MySvtDataStringDict(v35, 0);
    if ( !this )
      goto LABEL_167;
    v162 = v38;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v165->fields.uniqueId,
           &value,
           (const MethodInfo_3453C7C *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
    {
      DataFromMessagePackString_object = BattleUtility__GetDataFromMessagePackString_object_(
                                           (System_String_o *)value,
                                           (const MethodInfo_312C7E8 *)Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
      ((void (__fastcall *)(BattleServantData_o *, Il2CppObject *, const MethodInfo *))v165->klass->vtable._17_setSaveData.methodPtr)(
        v165,
        DataFromMessagePackString_object,
        v165->klass->vtable._17_setSaveData.method);
      BattleServantData__SetTransformSaveData(v165, (BattleServantData_SaveData_o *)DataFromMessagePackString_object, 0);
      BattleServantData__loadTransformServant(v165, v35, 0);
      goto LABEL_81;
    }
    v43 = (BattleServantData_PreEntryStatus_o *)sub_1C6BC54(BattleServantData_PreEntryStatus_TypeInfo);
    BattleServantData_PreEntryStatus___ctor(v43, 0);
    v165->fields._PreEntryStatusInfo_k__BackingField = v43;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v165->fields._PreEntryStatusInfo_k__BackingField, (int32_t)v43, v44, v45);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleServantData__getPassiveSkills(v165, 0);
    if ( !this )
      goto LABEL_167;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v47 = this;
    if ( m_CancellationTokenSource < 1 )
      goto LABEL_81;
    for ( i = 0; i < m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_169;
      v49 = (int32_t *)*((_QWORD *)&v47->fields._closeBtnObject + i);
      if ( !v49 )
        goto LABEL_167;
      battleData = (BattleData_o *)(*(unsigned int (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v49 + 392LL))(
                                     v49,
                                     *(_QWORD *)(*(_QWORD *)v49 + 400LL));
      this = (BattleSwitchPartyConfirmWindow_o *)Master_object;
      if ( !Master_object )
        goto LABEL_167;
      this = (BattleSwitchPartyConfirmWindow_o *)SkillLvMaster__GetEntity(
                                                   (SkillLvMaster_o *)Master_object,
                                                   (int32_t)battleData,
                                                   v49[9],
                                                   0);
      if ( !this )
        goto LABEL_167;
      closeBtnObject = this->fields._closeBtnObject;
      if ( !closeBtnObject )
        goto LABEL_167;
      klass = closeBtnObject[1].klass;
      if ( (int)klass < 1 )
      {
        v52 = 0;
        goto LABEL_72;
      }
      v52 = 0;
      v53 = 0;
      v54 = 0;
      do
      {
        if ( v54 >= (unsigned int)klass )
          goto LABEL_169;
        if ( !v33 )
          goto LABEL_167;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                                     *((_DWORD *)&closeBtnObject[1].monitor + v54),
                                                     (const MethodInfo_33F90DC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_167;
        v55 = (int)this->fields.m_CancellationTokenSource;
        v56 = this;
        if ( v55 != 1 )
          goto LABEL_58;
        this = (BattleSwitchPartyConfirmWindow_o *)BasicHelper__IsNullOrEmpty(
                                                     (System_Collections_ICollection_o *)this->fields._closeBtnObject,
                                                     0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v55 = (int)v56->fields.m_CancellationTokenSource;
LABEL_58:
          v52 |= v55 == 7;
          goto LABEL_64;
        }
        v57 = v56->fields._closeBtnObject;
        if ( !v57 )
          goto LABEL_167;
        if ( !LODWORD(v57[1].klass) )
          goto LABEL_169;
        this = v167;
        if ( !v167 )
          goto LABEL_167;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v167,
                                                     (int32_t)v57[1].monitor,
                                                     (const MethodInfo_33F90DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_167;
        v53 |= (unsigned int)(HIDWORD(this->fields.m_CachedPtr) - 81) < 2;
LABEL_64:
        LODWORD(klass) = closeBtnObject[1].klass;
        ++v54;
      }
      while ( (__int64)v54 < (int)klass );
      if ( (v53 & 1) != 0 )
      {
        if ( v32 )
        {
          items = v32->fields._items;
          v59 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
          ++v32->fields._version;
          if ( items )
          {
            size = v32->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
            {
              v61 = &items->obj.klass + size;
              v32->fields._size = size + 1;
              v61[4] = (Il2CppClass *)v49;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v61 + 4), (int32_t)v49, v41, v42);
              goto LABEL_72;
            }
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)v49,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
            if ( (v52 & 1) == 0 )
              goto LABEL_80;
LABEL_73:
            if ( v158 )
            {
              v62 = v158->fields._items;
              v63 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
              ++v158->fields._version;
              if ( v62 )
              {
                v64 = v158->fields._size;
                if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v158,
                    (Il2CppObject *)v49,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
                }
                else
                {
                  v65 = &v62->obj.klass + v64;
                  v158->fields._size = v64 + 1;
                  v65[4] = (Il2CppClass *)v49;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v49, v41, v42);
                }
                goto LABEL_80;
              }
            }
          }
        }
        goto LABEL_167;
      }
LABEL_72:
      if ( (v52 & 1) != 0 )
        goto LABEL_73;
LABEL_80:
      m_CancellationTokenSource = (int)v47->fields.m_CancellationTokenSource;
    }
LABEL_81:
    if ( !v164 )
      goto LABEL_167;
    v66 = v164->fields._items;
    svts = v153;
    v67 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++v164->fields._version;
    if ( !v66 )
      goto LABEL_167;
    v68 = v164->fields._size;
    v36 = battle_ent;
    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v164,
        (Il2CppObject *)v165,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v164->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)v165;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v165, v41, v42);
    }
    v37 = v153->max_length;
    v35 = v159;
    v38 = v162 + 1;
  }
  while ( (int)(v162 + 1) < v37 );
LABEL_87:
  if ( !v32 )
    goto LABEL_167;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v168,
    v32,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v169 = v168;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v169,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    current = v169.fields._current;
    v71 = sub_1C6BC54(BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v71, 0);
    if ( !current )
      sub_1C6BC60(v72, v73);
    v74 = ((unsigned int (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[5].methodPtr)(
            current,
            current->klass->vtable[5].method);
    if ( !Master_object )
      sub_1C6BC60(0, v74);
    Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v74, HIDWORD(current[2].klass), 0);
    v77 = Entity;
    if ( !Entity )
      sub_1C6BC60(0, v76);
    if ( !v71 )
      sub_1C6BC60(Entity, v76);
    funcId = (BattleServantData_o *)Entity->fields.funcId;
    *(_DWORD *)(v71 + 16) = current[1].monitor;
    v79 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v79,
      (Il2CppObject *)v71,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__,
      0);
    object__51783296 = (BattleServantData_array *)System_Linq_Enumerable__First_object__51783296(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v164,
                                                    (System_Func_TSource__bool__o *)v79,
                                                    (const MethodInfo_3162680 *)Method_System_Linq_Enumerable_First_BattleServantData___);
    v163 = v77;
    v160 = (BattleData_o *)v71;
    if ( !funcId )
      sub_1C6BC60(object__51783296, v81);
    v82 = *(_QWORD *)&funcId->fields.uniqueId;
    if ( (int)v82 >= 1 )
    {
      v83 = (BattleServantData_o *)object__51783296;
      v84 = 0;
      v166 = funcId;
      do
      {
        if ( v84 >= (unsigned int)v82 )
          sub_1C6BC68(object__51783296);
        if ( !v33 )
          sub_1C6BC60(object__51783296, v81);
        v85 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                *((_DWORD *)&funcId->fields.userSvtId.fields.currentCryptoKey + v84),
                (const MethodInfo_33F90DC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v87 = (FunctionEntity_o *)v85;
        if ( !v85 )
          sub_1C6BC60(0, v86);
        v88 = v85[2].klass;
        if ( !v88 )
          sub_1C6BC60(v85, v86);
        if ( !LODWORD(v88->_1.namespaze) )
          sub_1C6BC68(v85);
        if ( !v167 )
          sub_1C6BC60(0, v86);
        object__51783296 = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v167,
                                                        (int32_t)v88->_1.byval_arg.data,
                                                        (const MethodInfo_33F90DC *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v89 = (BuffEntity_o *)object__51783296;
        if ( !object__51783296 )
          sub_1C6BC60(0, v81);
        if ( (unsigned int)(HIDWORD(object__51783296->bounds) - 81) < 2 )
        {
          svals = v163->fields.svals;
          if ( !svals )
            sub_1C6BC60(object__51783296, v81);
          if ( v84 >= LODWORD(svals->max_length) )
            sub_1C6BC68(object__51783296);
          v91 = svals->m_Items[v84];
          v92 = (DataVals_o *)sub_1C6BC54(DataVals_TypeInfo);
          DataVals___ctor(v92, v91, 0);
          if ( !v92 )
            sub_1C6BC60(v93, v94);
          DataVals__SetType_41912632(v92, v87, v84, 0);
          object__51783296 = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v92, 0);
          if ( ((unsigned __int8)object__51783296 & 1) == 0 )
          {
            if ( !v164 )
              sub_1C6BC60(0, v81);
            targetType = v87->fields.targetType;
            v96 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                               v164,
                                               (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            object__51783296 = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                 targetType,
                                 v96,
                                 v160->fields.m_CachedPtr,
                                 v97);
            v98 = object__51783296;
            if ( !object__51783296 )
              sub_1C6BC60(0, v81);
            v99 = object__51783296->max_length;
            if ( (int)v99 >= 1 )
            {
              v100 = 0;
              do
              {
                if ( v100 >= (unsigned int)v99 )
                  sub_1C6BC68(object__51783296);
                if ( !v83 )
                  sub_1C6BC60(object__51783296, v81);
                v101 = v98->m_Items[v100];
                Individualities = BattleServantData__getIndividualities(v83, 0, 1, 0, 1, 0);
                ckSelfIndv = v89->fields.ckSelfIndv;
                v104 = Individualities;
                CkSelfCountIndividuality = BuffEntity__GetCkSelfCountIndividuality(v89, 0);
                object__51783296 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                v104,
                                                                ckSelfIndv,
                                                                v89,
                                                                CkSelfCountIndividuality,
                                                                0);
                if ( ((unsigned __int8)object__51783296 & 1) != 0 )
                {
                  if ( !v101 )
                    sub_1C6BC60(object__51783296, v81);
                  v106 = BattleServantData__getIndividualities(v101, 0, 1, 0, 1, 0);
                  ckOpIndv = v89->fields.ckOpIndv;
                  v108 = v106;
                  CkOpCountIndividuality = BuffEntity__GetCkOpCountIndividuality(v89, 0);
                  object__51783296 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                  v108,
                                                                  ckOpIndv,
                                                                  v89,
                                                                  CkOpCountIndividuality,
                                                                  0);
                  if ( ((unsigned __int8)object__51783296 & 1) != 0 )
                  {
                    type = v89->fields.type;
                    if ( type == 82 )
                    {
                      PreEntryStatusInfo_k__BackingField = v101->fields._PreEntryStatusInfo_k__BackingField;
                      v114 = DataVals__GetValue(v92, 0);
                      if ( !PreEntryStatusInfo_k__BackingField )
                        sub_1C6BC60(v114, v115);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(PreEntryStatusInfo_k__BackingField, -(int)v114, 0);
                    }
                    else if ( type == 81 )
                    {
                      v111 = v101->fields._PreEntryStatusInfo_k__BackingField;
                      v112 = DataVals__GetValue(v92, 0);
                      if ( !v111 )
                        sub_1C6BC60(v112, (unsigned int)v112);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(v111, v112, 0);
                    }
                  }
                }
                LODWORD(v99) = v98->max_length;
                ++v100;
              }
              while ( (__int64)v100 < (int)v99 );
            }
          }
        }
        funcId = v166;
        ++v84;
        LODWORD(v82) = v166->fields.uniqueId;
      }
      while ( (__int64)v84 < (int)v82 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v169,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  this = (BattleSwitchPartyConfirmWindow_o *)v158;
  if ( !v158 )
    goto LABEL_167;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v168,
    v158,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v169 = v168;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v169,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    v116 = v169.fields._current;
    v117 = sub_1C6BC54(BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v117, 0);
    if ( !v116 )
      sub_1C6BC60(v118, v119);
    v120 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v116->klass->vtable[5].methodPtr)(
             v116,
             v116->klass->vtable[5].method);
    if ( !Master_object )
      sub_1C6BC60(v120, (unsigned int)v120);
    v121 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v120, HIDWORD(v116[2].klass), 0);
    v123 = v121;
    if ( !v121 )
      sub_1C6BC60(0, v122);
    if ( !v117 )
      sub_1C6BC60(v121, v122);
    v124 = v121->fields.funcId;
    *(_DWORD *)(v117 + 16) = v116[1].monitor;
    v125 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v125,
      (Il2CppObject *)v117,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__,
      0);
    IsContainOnFieldsParameter = (BattleServantData_array *)System_Linq_Enumerable__First_object__51783296(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v164,
                                                              (System_Func_TSource__bool__o *)v125,
                                                              (const MethodInfo_3162680 *)Method_System_Linq_Enumerable_First_BattleServantData___);
    if ( !v124 )
      sub_1C6BC60(IsContainOnFieldsParameter, v127);
    v128 = v124->max_length;
    if ( (int)v128 >= 1 )
    {
      v129 = 0;
      do
      {
        if ( v129 >= (unsigned int)v128 )
          sub_1C6BC68(IsContainOnFieldsParameter);
        if ( !v33 )
          sub_1C6BC60(IsContainOnFieldsParameter, v127);
        IsContainOnFieldsParameter = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                                                  v124->m_Items[v129],
                                                                  (const MethodInfo_33F90DC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v130 = (FunctionEntity_o *)IsContainOnFieldsParameter;
        if ( !IsContainOnFieldsParameter )
          sub_1C6BC60(0, v127);
        if ( LODWORD(IsContainOnFieldsParameter->max_length) == 7 )
        {
          v131 = v123->fields.svals;
          if ( !v131 )
            sub_1C6BC60(IsContainOnFieldsParameter, v127);
          if ( v129 >= LODWORD(v131->max_length) )
            sub_1C6BC68(IsContainOnFieldsParameter);
          v132 = v131->m_Items[v129];
          v133 = (DataVals_o *)sub_1C6BC54(DataVals_TypeInfo);
          DataVals___ctor(v133, v132, 0);
          if ( !v133 )
            sub_1C6BC60(v134, v135);
          DataVals__SetType_41912632(v133, v130, v129, 0);
          IsContainOnFieldsParameter = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v133, 0);
          if ( ((unsigned __int8)IsContainOnFieldsParameter & 1) == 0 )
          {
            if ( !v164 )
              sub_1C6BC60(0, v127);
            v136 = v130->fields.targetType;
            v137 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                v164,
                                                (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            IsContainOnFieldsParameter = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                           v136,
                                           v137,
                                           *(_DWORD *)(v117 + 16),
                                           v138);
            v139 = IsContainOnFieldsParameter;
            if ( !IsContainOnFieldsParameter )
              sub_1C6BC60(0, v127);
            v140 = IsContainOnFieldsParameter->max_length;
            if ( v140 >= 1 )
            {
              for ( j = 0; j < v140; ++j )
              {
                if ( j >= (unsigned int)v140 )
                  sub_1C6BC68(IsContainOnFieldsParameter);
                v142 = v139->m_Items[j];
                if ( !v142 )
                  sub_1C6BC60(IsContainOnFieldsParameter, v127);
                v143 = v142->fields._PreEntryStatusInfo_k__BackingField;
                v144 = DataVals__GetValue(v133, 0);
                if ( !v143 )
                  sub_1C6BC60(v144, (unsigned int)v144);
                BattleServantData_PreEntryStatus__AddGainNp(v143, v144, 0);
                v140 = v139->max_length;
              }
            }
          }
        }
        LODWORD(v128) = v124->max_length;
        ++v129;
      }
      while ( (__int64)v129 < (int)v128 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v169,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  nextPartyNameLabel = v157->fields.nextPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               v157->fields.nextPartyIndex,
                                               v146);
  if ( !nextPartyNameLabel )
    goto LABEL_167;
  UILabel__set_text(nextPartyNameLabel, (System_String_o *)this, 0);
  nextPartySvtList = v157->fields.nextPartySvtList;
  if ( !nextPartySvtList )
    goto LABEL_167;
  v148 = 0;
  while ( 1 )
  {
    v149 = nextPartySvtList->max_length;
    if ( (int)v148 >= v149 )
      break;
    if ( (unsigned int)v148 >= v149 )
      goto LABEL_169;
    if ( v164 )
    {
      v150 = nextPartySvtList->m_Items[v148];
      this = (BattleSwitchPartyConfirmWindow_o *)System_Collections_Generic_List_object___get_Item(
                                                   v164,
                                                   v148,
                                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      if ( v150 )
      {
        if ( (int)v148 >= v164->fields._size )
        {
          BattleSelectServantComponent__setNone(v150, 0);
        }
        else
        {
          v151 = (BattleServantData_o *)this;
          BattleSelectServantComponent__setData(v150, (BattleServantData_o *)this, 2, v148, 0, 0);
          if ( !v151 )
            goto LABEL_167;
          v152 = BattleServantData__isAlive(v151, 0, 0);
          BattleSelectServantComponent__setSelectMask(v150, v152, overwriteDisableMessage, result, 0, 0);
        }
        ++v148;
        nextPartySvtList = v157->fields.nextPartySvtList;
        if ( nextPartySvtList )
          continue;
      }
    }
    goto LABEL_167;
  }
}


void BattleSwitchPartyConfirmWindow__SetupBattleAssetUiAtlas(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_battleAssetUiAtlas; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIAtlas_o *battleAssetUiAtlas; // t1
  BattleDataDefine_c *v6; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51495936; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB9AC5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&BattleDataDefine_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_3099/*"BattleAssetUIAtlas"*/);
    byte_4CB9AC5 = 1;
  }
  battleAssetUiAtlas = this->fields.battleAssetUiAtlas;
  p_battleAssetUiAtlas = (CGThumbnailListItem_o *)&this->fields.battleAssetUiAtlas;
  v4 = (UnityEngine_Object_o *)battleAssetUiAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v6 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v6 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v6->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
    if ( AssetStorage )
    {
      Object_object__51495936 = AssetData__GetObject_object__51495936(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3099/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51495936, 0, 0);
      if ( !v10 )
      {
        if ( !Object_object__51495936 )
          sub_1C6BC60(v10, v11);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Object_object__51495936,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        p_battleAssetUiAtlas->klass = (CGThumbnailListItem_c *)Component_object;
        sub_1C6B9AC(p_battleAssetUiAtlas, (int32_t)Component_object, v13, v14);
      }
    }
  }
}


void BattleSwitchPartyConfirmWindow__UpdateSprites(BattleSwitchPartyConfirmWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UISprite_o *v4; // x0
  __int64 v5; // x1
  struct BattleSwitchPartyConfirmWindow_SpriteParam_array *spriteParams; // x21
  int max_length; // w8
  unsigned int v8; // w22
  BattleSwitchPartyConfirmWindow_SpriteParam_o *v9; // x24
  UnityEngine_Object_o *sprite; // x20

  if ( (byte_4CB9AC4 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9AC4 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.spriteParams, 0) )
  {
    BattleSwitchPartyConfirmWindow__SetupBattleAssetUiAtlas(this, v3);
    spriteParams = this->fields.spriteParams;
    if ( !spriteParams )
      goto LABEL_17;
    max_length = spriteParams->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          sub_1C6BC68(v4);
        v9 = spriteParams->m_Items[v8];
        if ( !v9 )
          break;
        sprite = (UnityEngine_Object_o *)v9->fields.sprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v4 = (UISprite_o *)UnityEngine_Object__op_Equality(sprite, 0, 0);
        if ( ((unsigned __int8)v4 & 1) == 0 )
        {
          v4 = v9->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_atlas(v4, this->fields.battleAssetUiAtlas, 0);
          v4 = v9->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_spriteName(v4, v9->fields.spriteName, 0);
        }
        max_length = spriteParams->max_length;
        if ( (int)++v8 >= max_length )
          return;
      }
LABEL_17:
      sub_1C6BC60(v4, v5);
    }
  }
}


System_String_o *BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
        int32_t partyIndex,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  Il2CppObject *v6; // x0
  int v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB9AC8 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11160/*"ROMAN_NUMBER_{0}"*/);
    sub_1C6BA08(&StringLiteral_5827/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/);
    byte_4CB9AC8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_5827/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/, 0);
  v8 = partyIndex + 1;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  v5 = System_String__Format((System_String_o *)StringLiteral_11160/*"ROMAN_NUMBER_{0}"*/, v4, 0);
  v6 = (Il2CppObject *)LocalizationManager__Get(v5, 0);
  return System_String__Format(v3, v6, 0);
}


BattleServantData_array *BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
        int32_t targetType,
        BattleServantData_array *svtList,
        int32_t actorId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  long double inited; // q0
  System_Func_object__bool__o *v11; // x0
  intptr_t *v12; // x8
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  System_Func_TSource__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4CB9AC9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BattleServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C6BA08(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C6BA08(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__5__);
    sub_1C6BA08(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__);
    sub_1C6BA08(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
    byte_4CB9AC9 = 1;
  }
  v7 = sub_1C6BC54(BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C6BC60(v8, v9);
  *(_DWORD *)(v7 + 16) = actorId;
  if ( targetType <= 3 )
  {
    if ( !targetType )
    {
      v11 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
      v12 = &Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__5__;
      goto LABEL_22;
    }
    if ( targetType != 3 )
      goto LABEL_11;
    return svtList;
  }
  if ( targetType == 7 )
    return svtList;
  if ( targetType != 9 && targetType != 14 )
  {
LABEL_11:
    v13 = Method_System_Array_Empty_BattleServantData___;
    v14 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
    if ( !v14 )
    {
      sub_1C41AF8(Method_System_Array_Empty_BattleServantData___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C41A9C(inited);
    return **(BattleServantData_array ***)(v16 + 184);
  }
  v11 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
  v12 = &Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__;
LABEL_22:
  v18 = (System_Func_TSource__bool__o *)v11;
  System_Func_object__bool____ctor(v11, (Il2CppObject *)v7, *v12, 0);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)svtList,
          v18,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v19,
                                      (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


UnityEngine_GameObject_o *BattleSwitchPartyConfirmWindow__get_ParentPanel(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_1C6BC60(transform, v3);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
}


System_String_o *BattleSwitchPartyConfirmWindow__get_closeBtnPath(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB9AC0 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4500/*"CloseButton"*/);
    byte_4CB9AC0 = 1;
  }
  return (System_String_o *)StringLiteral_4500/*"CloseButton"*/;
}


void BattleSwitchPartyConfirmWindow__setInitialPos(BattleSwitchPartyConfirmWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4CAFC09 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C6BC60(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


void BattleSwitchPartyConfirmWindow_SpriteParam___ctor(
        BattleSwitchPartyConfirmWindow_SpriteParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSwitchPartyConfirmWindow___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB9ACA & 1) == 0 )
  {
    sub_1C6BA08(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    byte_4CB9ACA = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleSwitchPartyConfirmWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields->__9 = (struct BattleSwitchPartyConfirmWindow___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleSwitchPartyConfirmWindow___c___ctor(BattleSwitchPartyConfirmWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleSwitchPartyConfirmWindow___c___SetSwitchPartyData_b__17_0(
        BattleSwitchPartyConfirmWindow___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.index;
}


void BattleSwitchPartyConfirmWindow___c__DisplayClass16_0___ctor(
        BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSwitchPartyConfirmWindow___c__DisplayClass16_0___Close_b__0(
        BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  BattleSwitchPartyConfirmWindow_o *_4__this; // x0
  struct BattleWindowComponent_EndCall_o *call; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow__get_ParentPanel(_4__this, method)) == 0 )
  {
    sub_1C6BC60(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  call = this->fields.call;
  if ( call )
    ((void (__fastcall *)(intptr_t, intptr_t))call->fields.invoke_impl)(call->fields.method_code, call->fields.method);
}


void BattleSwitchPartyConfirmWindow___c__DisplayClass17_0___ctor(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_0___SetSwitchPartyData_b__3(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.uniqueId == this->fields.actorId;
}


void BattleSwitchPartyConfirmWindow___c__DisplayClass17_1___ctor(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_1___SetSwitchPartyData_b__4(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.uniqueId == this->fields.actorId;
}


void BattleSwitchPartyConfirmWindow___c__DisplayClass17_2___ctor(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_2___SetSwitchPartyData_b__5(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.uniqueId == this->fields.actorId;
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_2___SetSwitchPartyData_b__6(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.uniqueId != this->fields.actorId;
}