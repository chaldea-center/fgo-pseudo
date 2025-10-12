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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleWindowComponent_EndCall_o *v11; // x20

  if ( (byte_4C3B0EB & 1) == 0 )
  {
    sub_1C32C20(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C32C20(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass16_0__Close_b__0__);
    sub_1C32C20(&BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
    byte_4C3B0EB = 1;
  }
  v5 = sub_1C32E6C(BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = call;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)call, v9, v10);
  v11 = (BattleWindowComponent_EndCall_o *)sub_1C32E6C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleSwitchPartyConfirmWindow___c__DisplayClass16_0__Close_b__0__,
    0);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, v11, 0);
}


void BattleSwitchPartyConfirmWindow__OnClickCloseButton(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_closeCallback; // x19
  System_Action_T__o *closeCallback; // t1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3B0EF & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_int___);
    byte_4C3B0EF = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    closeCallback = (System_Action_T__o *)this->fields.closeCallback;
    p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
    ActionExtensions__Call_int_(closeCallback, -1, (const MethodInfo_3029C40 *)Method_ActionExtensions_Call_int___);
    p_closeCallback->klass = 0;
    sub_1C32BC4(p_closeCallback, 0, v5, v6);
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

  if ( (byte_4C3B0F0 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_int___);
    byte_4C3B0F0 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    closeCallback = (System_Action_T__o *)this->fields.closeCallback;
    p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
    ActionExtensions__Call_int_(
      closeCallback,
      (int32_t)p_closeCallback[-1].fields._ThumbnailSpritePath_k__BackingField,
      (const MethodInfo_3029C40 *)Method_ActionExtensions_Call_int___);
    p_closeCallback->klass = 0;
    sub_1C32BC4(p_closeCallback, 0, v5, v6);
  }
}


void BattleSwitchPartyConfirmWindow__Open(
        BattleSwitchPartyConfirmWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *ParentPanel; // x0
  const MethodInfo *v6; // x1
  BattleWindowOuterClickComponent_OuterClickCall_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C3B0EA & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleSwitchPartyConfirmWindow_OnClickCloseButton__);
    sub_1C32C20(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4C3B0EA = 1;
  }
  ParentPanel = BattleSwitchPartyConfirmWindow__get_ParentPanel(this, (const MethodInfo *)call);
  if ( !ParentPanel )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(ParentPanel, 1, 0);
  BattleSwitchPartyConfirmWindow__UpdateSprites(this, v6);
  v7 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C32E6C(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleSwitchPartyConfirmWindow_OnClickCloseButton__,
    v8);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v7,
    v9);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
}


void BattleSwitchPartyConfirmWindow__SetSwitchPartyData(
        BattleSwitchPartyConfirmWindow_o *this,
        BattleData_o *battleData,
        int32_t nextPtIndex,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
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
  int32_t v50; // w1
  struct UnityEngine_GameObject_o *closeBtnObject; // x27
  UnityEngine_GameObject_c *klass; // x8
  char v53; // w26
  char v54; // w24
  unsigned __int64 v55; // x29
  int v56; // w8
  BattleSwitchPartyConfirmWindow_o *v57; // x21
  struct UnityEngine_GameObject_o *v58; // x8
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  Il2CppObject *current; // x19
  __int64 v72; // x20
  __int64 v73; // x0
  int32_t v74; // w1
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v76; // x21
  BattleServantData_o *funcId; // x22
  System_Func_object__bool__o *v78; // x19
  BattleServantData_array *object__51398188; // x0
  __int64 v80; // x8
  BattleServantData_o *v81; // x27
  unsigned __int64 v82; // x28
  Il2CppObject *v83; // x0
  FunctionEntity_o *v84; // x21
  Il2CppClass *v85; // x8
  BuffEntity_o *v86; // x29
  struct System_String_array *svals; // x8
  System_String_o *v88; // x22
  DataVals_o *v89; // x19
  __int64 v90; // x0
  int32_t targetType; // w21
  BattleServantData_array *v92; // x1
  const MethodInfo *v93; // x3
  BattleServantData_array *v94; // x22
  il2cpp_array_size_t v95; // x8
  unsigned __int64 v96; // x20
  BattleServantData_o *v97; // x21
  System_Int32_array *Individualities; // x0
  System_Int32_array *ckSelfIndv; // x25
  System_Int32_array *v100; // x24
  System_Int32_array *CkSelfCountIndividuality; // x3
  System_Int32_array *v102; // x0
  System_Int32_array *ckOpIndv; // x25
  System_Int32_array *v104; // x24
  System_Int32_array *CkOpCountIndividuality; // x3
  int32_t type; // w8
  BattleServantData_PreEntryStatus_o *v107; // x21
  __int64 v108; // x0
  BattleServantData_PreEntryStatus_o *PreEntryStatusInfo_k__BackingField; // x21
  __int64 v110; // x0
  Il2CppObject *v111; // x21
  __int64 v112; // x20
  __int64 v113; // x0
  __int64 v114; // x0
  SkillLvEntity_o *v115; // x0
  SkillLvEntity_o *v116; // x19
  struct System_Int32_array *v117; // x26
  System_Func_object__bool__o *v118; // x21
  BattleServantData_array *IsContainOnFieldsParameter; // x0
  il2cpp_array_size_t v120; // x8
  unsigned __int64 v121; // x24
  FunctionEntity_o *v122; // x21
  struct System_String_array *v123; // x8
  System_String_o *v124; // x25
  DataVals_o *v125; // x22
  __int64 v126; // x0
  int32_t v127; // w21
  BattleServantData_array *v128; // x1
  const MethodInfo *v129; // x3
  BattleServantData_array *v130; // x21
  int v131; // w8
  int j; // w27
  BattleServantData_o *v133; // x8
  BattleServantData_PreEntryStatus_o *v134; // x25
  __int64 v135; // x0
  UILabel_o *nextPartyNameLabel; // x19
  const MethodInfo *v137; // x1
  struct BattleSelectServantComponent_array *nextPartySvtList; // x8
  __int64 v139; // x19
  int v140; // w9
  BattleSelectServantComponent_o *v141; // x20
  BattleServantData_o *v142; // x21
  bool v143; // w0
  struct BattleDeckServantData_array *v144; // [xsp+8h] [xbp-108h]
  System_Collections_Generic_List_commandAssistData__o *commandAssistDataList; // [xsp+10h] [xbp-100h]
  BattleEntity_o *battle_ent; // [xsp+18h] [xbp-F8h]
  System_String_o *overwriteDisableMessage; // [xsp+20h] [xbp-F0h]
  BattleSwitchPartyConfirmWindow_o *v148; // [xsp+28h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v149; // [xsp+30h] [xbp-E0h]
  BattleData_o *v150; // [xsp+38h] [xbp-D8h]
  BattleData_o *v151; // [xsp+38h] [xbp-D8h]
  Il2CppObject *Master_object; // [xsp+40h] [xbp-D0h]
  unsigned int v153; // [xsp+48h] [xbp-C8h]
  SkillLvEntity_o *v154; // [xsp+48h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v155; // [xsp+50h] [xbp-C0h]
  BattleServantData_o *v156; // [xsp+58h] [xbp-B8h]
  BattleServantData_o *v157; // [xsp+58h] [xbp-B8h]
  BattleSwitchPartyConfirmWindow_o *v158; // [xsp+60h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v159; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v160; // [xsp+80h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+A0h] [xbp-70h] BYREF
  int32_t result; // [xsp+ACh] [xbp-64h] BYREF

  v148 = this;
  if ( (byte_4C3B0EC & 1) == 0 )
  {
    sub_1C32C20(&BattleServantData_TypeInfo);
    sub_1C32C20(&Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
    sub_1C32C20(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C32C20(&DataVals_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_1C32C20(&Method_System_Linq_Enumerable_First_BattleServantData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1C32C20(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C32C20(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&BattleServantData_PreEntryStatus_TypeInfo);
    sub_1C32C20(&Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__);
    sub_1C32C20(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__);
    sub_1C32C20(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    sub_1C32C20(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__);
    sub_1C32C20(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    sub_1C32C20(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    sub_1C32C20(&StringLiteral_5834/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/);
    sub_1C32C20(&StringLiteral_5835/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/);
    this = v148;
    byte_4C3B0EC = 1;
  }
  result = 0;
  value = 0;
  memset(&v160, 0, sizeof(v160));
  if ( !battleData )
    goto LABEL_167;
  v150 = battleData;
  SelectedPartyIndex_k__BackingField = battleData->fields._SelectedPartyIndex_k__BackingField;
  this->fields.closeCallback = callback;
  p_closeCallback = &this->fields.closeCallback;
  *((_DWORD *)p_closeCallback - 2) = nextPtIndex;
  sub_1C32BC4((CGThumbnailListItem_o *)p_closeCallback, (int32_t)callback, nextPtIndex, (const MethodInfo *)callback);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  overwriteDisableMessage = LocalizationManager__Get((System_String_o *)StringLiteral_5835/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5834/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/, 0);
  if ( !System_Int32__TryParse(v10, &result, 0) )
    result = 16;
  PlayerServantList = BattleData__getPlayerServantList(battleData, 0);
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
    _9__17_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__17_0,
      v15,
      Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__,
      0);
    static_fields = BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Func_BattleServantData__int__o *)_9__17_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TKey__o *)_9__17_0,
                                                               (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          v19,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  currentPartyNameLabel = v148->fields.currentPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               SelectedPartyIndex_k__BackingField,
                                               v22);
  if ( !currentPartyNameLabel )
    goto LABEL_167;
  UILabel__set_text(currentPartyNameLabel, (System_String_o *)this, 0);
  currentPartySvtList = v148->fields.currentPartySvtList;
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
        sub_1C32E84(this);
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
        currentPartySvtList = v148->fields.currentPartySvtList;
        if ( currentPartySvtList )
          continue;
      }
    }
    goto LABEL_167;
  }
  v155 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v155,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this = (BattleSwitchPartyConfirmWindow_o *)v150->fields.battle_info;
  if ( !this )
    goto LABEL_167;
  SelectPartyMyDeck = BattleInfoData__GetSelectPartyMyDeck((BattleInfoData_o *)this, v148->fields.nextPartyIndex, 0);
  battle_ent = v150->fields.battle_ent;
  commandAssistDataList = BattleData__CreateLotteryCommandAssistInfo(v150, SelectPartyMyDeck, 0);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  v149 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v149,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v33 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  this = (BattleSwitchPartyConfirmWindow_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !SelectPartyMyDeck || (svts = SelectPartyMyDeck->fields.svts, v35 = v150, v36 = battle_ent, !svts) )
LABEL_167:
    sub_1C32E7C(this);
  v37 = svts->max_length;
  v158 = this;
  if ( v37 < 1 )
    goto LABEL_87;
  v38 = 0;
  v144 = svts;
  do
  {
    if ( v38 >= v37 )
      goto LABEL_169;
    v39 = svts->m_Items[v38];
    v156 = (BattleServantData_o *)sub_1C32E6C(BattleServantData_TypeInfo);
    BattleServantData___ctor(v156, 0);
    if ( !v36 )
      goto LABEL_167;
    if ( !v39 )
      goto LABEL_167;
    this = (BattleSwitchPartyConfirmWindow_o *)BattleDeckServantData__GetFollowerType(v39, v36->fields.followerType, 0);
    if ( !v156 )
      goto LABEL_167;
    BattleServantData__setServantData(v156, v39, v36, (int32_t)this, 0, commandAssistDataList, 0);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleData__get_MySvtDataStringDict(v35, 0);
    if ( !this )
      goto LABEL_167;
    v153 = v38;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v156->fields.uniqueId,
           &value,
           (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
    {
      DataFromMessagePackString_object = BattleUtility__GetDataFromMessagePackString_object_(
                                           (System_String_o *)value,
                                           (const MethodInfo_30CE978 *)Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
      ((void (__fastcall *)(BattleServantData_o *, Il2CppObject *, const MethodInfo *))v156->klass->vtable._17_setSaveData.methodPtr)(
        v156,
        DataFromMessagePackString_object,
        v156->klass->vtable._17_setSaveData.method);
      BattleServantData__SetTransformSaveData(v156, (BattleServantData_SaveData_o *)DataFromMessagePackString_object, 0);
      BattleServantData__loadTransformServant(v156, v35, 0);
      goto LABEL_81;
    }
    v43 = (BattleServantData_PreEntryStatus_o *)sub_1C32E6C(BattleServantData_PreEntryStatus_TypeInfo);
    BattleServantData_PreEntryStatus___ctor(v43, 0);
    v156->fields._PreEntryStatusInfo_k__BackingField = v43;
    sub_1C32BC4((CGThumbnailListItem_o *)&v156->fields._PreEntryStatusInfo_k__BackingField, (int32_t)v43, v44, v45);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleServantData__getPassiveSkills(v156, 0);
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
      v50 = (*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v49 + 392LL))(
              v49,
              *(_QWORD *)(*(_QWORD *)v49 + 400LL));
      this = (BattleSwitchPartyConfirmWindow_o *)Master_object;
      if ( !Master_object )
        goto LABEL_167;
      this = (BattleSwitchPartyConfirmWindow_o *)SkillLvMaster__GetEntity(
                                                   (SkillLvMaster_o *)Master_object,
                                                   v50,
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
        v53 = 0;
        goto LABEL_72;
      }
      v53 = 0;
      v54 = 0;
      v55 = 0;
      do
      {
        if ( v55 >= (unsigned int)klass )
          goto LABEL_169;
        if ( !v33 )
          goto LABEL_167;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                                     *((_DWORD *)&closeBtnObject[1].monitor + v55),
                                                     (const MethodInfo_3396838 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_167;
        v56 = (int)this->fields.m_CancellationTokenSource;
        v57 = this;
        if ( v56 != 1 )
          goto LABEL_58;
        this = (BattleSwitchPartyConfirmWindow_o *)BasicHelper__IsNullOrEmpty(
                                                     (System_Collections_ICollection_o *)this->fields._closeBtnObject,
                                                     0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v56 = (int)v57->fields.m_CancellationTokenSource;
LABEL_58:
          v53 |= v56 == 7;
          goto LABEL_64;
        }
        v58 = v57->fields._closeBtnObject;
        if ( !v58 )
          goto LABEL_167;
        if ( !LODWORD(v58[1].klass) )
          goto LABEL_169;
        this = v158;
        if ( !v158 )
          goto LABEL_167;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v158,
                                                     (int32_t)v58[1].monitor,
                                                     (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_167;
        v54 |= (unsigned int)(HIDWORD(this->fields.m_CachedPtr) - 81) < 2;
LABEL_64:
        LODWORD(klass) = closeBtnObject[1].klass;
        ++v55;
      }
      while ( (__int64)v55 < (int)klass );
      if ( (v54 & 1) != 0 )
      {
        if ( v32 )
        {
          items = v32->fields._items;
          v60 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
          ++v32->fields._version;
          if ( items )
          {
            size = v32->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
            {
              v62 = &items->obj.klass + size;
              v32->fields._size = size + 1;
              v62[4] = (Il2CppClass *)v49;
              sub_1C32BC4((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v49, v41, v42);
              goto LABEL_72;
            }
            System_Collections_Generic_List_object___AddWithResize(
              v32,
              (Il2CppObject *)v49,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
            if ( (v53 & 1) == 0 )
              goto LABEL_80;
LABEL_73:
            if ( v149 )
            {
              v63 = v149->fields._items;
              v64 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
              ++v149->fields._version;
              if ( v63 )
              {
                v65 = v149->fields._size;
                if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v149,
                    (Il2CppObject *)v49,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
                }
                else
                {
                  v66 = &v63->obj.klass + v65;
                  v149->fields._size = v65 + 1;
                  v66[4] = (Il2CppClass *)v49;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v49, v41, v42);
                }
                goto LABEL_80;
              }
            }
          }
        }
        goto LABEL_167;
      }
LABEL_72:
      if ( (v53 & 1) != 0 )
        goto LABEL_73;
LABEL_80:
      m_CancellationTokenSource = (int)v47->fields.m_CancellationTokenSource;
    }
LABEL_81:
    if ( !v155 )
      goto LABEL_167;
    v67 = v155->fields._items;
    svts = v144;
    v68 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++v155->fields._version;
    if ( !v67 )
      goto LABEL_167;
    v69 = v155->fields._size;
    v36 = battle_ent;
    if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v155,
        (Il2CppObject *)v156,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &v67->obj.klass + v69;
      v155->fields._size = v69 + 1;
      v70[4] = (Il2CppClass *)v156;
      sub_1C32BC4((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v156, v41, v42);
    }
    v37 = v144->max_length;
    v35 = v150;
    v38 = v153 + 1;
  }
  while ( (int)(v153 + 1) < v37 );
LABEL_87:
  if ( !v32 )
    goto LABEL_167;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v159,
    v32,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v160 = v159;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v160,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    current = v160.fields._current;
    v72 = sub_1C32E6C(BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v72, 0);
    if ( !current )
      sub_1C32E7C(v73);
    v74 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[5].methodPtr)(
            current,
            current->klass->vtable[5].method);
    if ( !Master_object )
      sub_1C32E7C(0);
    Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v74, HIDWORD(current[2].klass), 0);
    v76 = Entity;
    if ( !Entity )
      sub_1C32E7C(0);
    if ( !v72 )
      sub_1C32E7C(Entity);
    funcId = (BattleServantData_o *)Entity->fields.funcId;
    *(_DWORD *)(v72 + 16) = current[1].monitor;
    v78 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v78,
      (Il2CppObject *)v72,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__,
      0);
    object__51398188 = (BattleServantData_array *)System_Linq_Enumerable__First_object__51398188(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v155,
                                                    (System_Func_TSource__bool__o *)v78,
                                                    (const MethodInfo_310462C *)Method_System_Linq_Enumerable_First_BattleServantData___);
    v154 = v76;
    v151 = (BattleData_o *)v72;
    if ( !funcId )
      sub_1C32E7C(object__51398188);
    v80 = *(_QWORD *)&funcId->fields.uniqueId;
    if ( (int)v80 >= 1 )
    {
      v81 = (BattleServantData_o *)object__51398188;
      v82 = 0;
      v157 = funcId;
      do
      {
        if ( v82 >= (unsigned int)v80 )
          sub_1C32E84(object__51398188);
        if ( !v33 )
          sub_1C32E7C(object__51398188);
        v83 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                *((_DWORD *)&funcId->fields.userSvtId.fields.currentCryptoKey + v82),
                (const MethodInfo_3396838 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v84 = (FunctionEntity_o *)v83;
        if ( !v83 )
          sub_1C32E7C(0);
        v85 = v83[2].klass;
        if ( !v85 )
          sub_1C32E7C(v83);
        if ( !LODWORD(v85->_1.namespaze) )
          sub_1C32E84(v83);
        if ( !v158 )
          sub_1C32E7C(0);
        object__51398188 = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v158,
                                                        (int32_t)v85->_1.byval_arg.data,
                                                        (const MethodInfo_3396838 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v86 = (BuffEntity_o *)object__51398188;
        if ( !object__51398188 )
          sub_1C32E7C(0);
        if ( (unsigned int)(HIDWORD(object__51398188->bounds) - 81) < 2 )
        {
          svals = v154->fields.svals;
          if ( !svals )
            sub_1C32E7C(object__51398188);
          if ( v82 >= LODWORD(svals->max_length) )
            sub_1C32E84(object__51398188);
          v88 = svals->m_Items[v82];
          v89 = (DataVals_o *)sub_1C32E6C(DataVals_TypeInfo);
          DataVals___ctor(v89, v88, 0);
          if ( !v89 )
            sub_1C32E7C(v90);
          DataVals__SetType_41578984(v89, v84, v82, 0);
          object__51398188 = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v89, 0);
          if ( ((unsigned __int8)object__51398188 & 1) == 0 )
          {
            if ( !v155 )
              sub_1C32E7C(0);
            targetType = v84->fields.targetType;
            v92 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                               v155,
                                               (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            object__51398188 = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                 targetType,
                                 v92,
                                 v151->fields.m_CachedPtr,
                                 v93);
            v94 = object__51398188;
            if ( !object__51398188 )
              sub_1C32E7C(0);
            v95 = object__51398188->max_length;
            if ( (int)v95 >= 1 )
            {
              v96 = 0;
              do
              {
                if ( v96 >= (unsigned int)v95 )
                  sub_1C32E84(object__51398188);
                if ( !v81 )
                  sub_1C32E7C(object__51398188);
                v97 = v94->m_Items[v96];
                Individualities = BattleServantData__getIndividualities(v81, 0, 1, 0, 1, 0);
                ckSelfIndv = v86->fields.ckSelfIndv;
                v100 = Individualities;
                CkSelfCountIndividuality = BuffEntity__GetCkSelfCountIndividuality(v86, 0);
                object__51398188 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                v100,
                                                                ckSelfIndv,
                                                                v86,
                                                                CkSelfCountIndividuality,
                                                                0);
                if ( ((unsigned __int8)object__51398188 & 1) != 0 )
                {
                  if ( !v97 )
                    sub_1C32E7C(object__51398188);
                  v102 = BattleServantData__getIndividualities(v97, 0, 1, 0, 1, 0);
                  ckOpIndv = v86->fields.ckOpIndv;
                  v104 = v102;
                  CkOpCountIndividuality = BuffEntity__GetCkOpCountIndividuality(v86, 0);
                  object__51398188 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                  v104,
                                                                  ckOpIndv,
                                                                  v86,
                                                                  CkOpCountIndividuality,
                                                                  0);
                  if ( ((unsigned __int8)object__51398188 & 1) != 0 )
                  {
                    type = v86->fields.type;
                    if ( type == 82 )
                    {
                      PreEntryStatusInfo_k__BackingField = v97->fields._PreEntryStatusInfo_k__BackingField;
                      v110 = DataVals__GetValue(v89, 0);
                      if ( !PreEntryStatusInfo_k__BackingField )
                        sub_1C32E7C(v110);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(PreEntryStatusInfo_k__BackingField, -(int)v110, 0);
                    }
                    else if ( type == 81 )
                    {
                      v107 = v97->fields._PreEntryStatusInfo_k__BackingField;
                      v108 = DataVals__GetValue(v89, 0);
                      if ( !v107 )
                        sub_1C32E7C(v108);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(v107, v108, 0);
                    }
                  }
                }
                LODWORD(v95) = v94->max_length;
                ++v96;
              }
              while ( (__int64)v96 < (int)v95 );
            }
          }
        }
        funcId = v157;
        ++v82;
        LODWORD(v80) = v157->fields.uniqueId;
      }
      while ( (__int64)v82 < (int)v80 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v160,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  this = (BattleSwitchPartyConfirmWindow_o *)v149;
  if ( !v149 )
    goto LABEL_167;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v159,
    v149,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v160 = v159;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v160,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    v111 = v160.fields._current;
    v112 = sub_1C32E6C(BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v112, 0);
    if ( !v111 )
      sub_1C32E7C(v113);
    v114 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v111->klass->vtable[5].methodPtr)(
             v111,
             v111->klass->vtable[5].method);
    if ( !Master_object )
      sub_1C32E7C(v114);
    v115 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v114, HIDWORD(v111[2].klass), 0);
    v116 = v115;
    if ( !v115 )
      sub_1C32E7C(0);
    if ( !v112 )
      sub_1C32E7C(v115);
    v117 = v115->fields.funcId;
    *(_DWORD *)(v112 + 16) = v111[1].monitor;
    v118 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v118,
      (Il2CppObject *)v112,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__,
      0);
    IsContainOnFieldsParameter = (BattleServantData_array *)System_Linq_Enumerable__First_object__51398188(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v155,
                                                              (System_Func_TSource__bool__o *)v118,
                                                              (const MethodInfo_310462C *)Method_System_Linq_Enumerable_First_BattleServantData___);
    if ( !v117 )
      sub_1C32E7C(IsContainOnFieldsParameter);
    v120 = v117->max_length;
    if ( (int)v120 >= 1 )
    {
      v121 = 0;
      do
      {
        if ( v121 >= (unsigned int)v120 )
          sub_1C32E84(IsContainOnFieldsParameter);
        if ( !v33 )
          sub_1C32E7C(IsContainOnFieldsParameter);
        IsContainOnFieldsParameter = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
                                                                  v117->m_Items[v121],
                                                                  (const MethodInfo_3396838 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v122 = (FunctionEntity_o *)IsContainOnFieldsParameter;
        if ( !IsContainOnFieldsParameter )
          sub_1C32E7C(0);
        if ( LODWORD(IsContainOnFieldsParameter->max_length) == 7 )
        {
          v123 = v116->fields.svals;
          if ( !v123 )
            sub_1C32E7C(IsContainOnFieldsParameter);
          if ( v121 >= LODWORD(v123->max_length) )
            sub_1C32E84(IsContainOnFieldsParameter);
          v124 = v123->m_Items[v121];
          v125 = (DataVals_o *)sub_1C32E6C(DataVals_TypeInfo);
          DataVals___ctor(v125, v124, 0);
          if ( !v125 )
            sub_1C32E7C(v126);
          DataVals__SetType_41578984(v125, v122, v121, 0);
          IsContainOnFieldsParameter = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v125, 0);
          if ( ((unsigned __int8)IsContainOnFieldsParameter & 1) == 0 )
          {
            if ( !v155 )
              sub_1C32E7C(0);
            v127 = v122->fields.targetType;
            v128 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                v155,
                                                (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            IsContainOnFieldsParameter = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                           v127,
                                           v128,
                                           *(_DWORD *)(v112 + 16),
                                           v129);
            v130 = IsContainOnFieldsParameter;
            if ( !IsContainOnFieldsParameter )
              sub_1C32E7C(0);
            v131 = IsContainOnFieldsParameter->max_length;
            if ( v131 >= 1 )
            {
              for ( j = 0; j < v131; ++j )
              {
                if ( j >= (unsigned int)v131 )
                  sub_1C32E84(IsContainOnFieldsParameter);
                v133 = v130->m_Items[j];
                if ( !v133 )
                  sub_1C32E7C(IsContainOnFieldsParameter);
                v134 = v133->fields._PreEntryStatusInfo_k__BackingField;
                v135 = DataVals__GetValue(v125, 0);
                if ( !v134 )
                  sub_1C32E7C(v135);
                BattleServantData_PreEntryStatus__AddGainNp(v134, v135, 0);
                v131 = v130->max_length;
              }
            }
          }
        }
        LODWORD(v120) = v117->max_length;
        ++v121;
      }
      while ( (__int64)v121 < (int)v120 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v160,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  nextPartyNameLabel = v148->fields.nextPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               v148->fields.nextPartyIndex,
                                               v137);
  if ( !nextPartyNameLabel )
    goto LABEL_167;
  UILabel__set_text(nextPartyNameLabel, (System_String_o *)this, 0);
  nextPartySvtList = v148->fields.nextPartySvtList;
  if ( !nextPartySvtList )
    goto LABEL_167;
  v139 = 0;
  while ( 1 )
  {
    v140 = nextPartySvtList->max_length;
    if ( (int)v139 >= v140 )
      break;
    if ( (unsigned int)v139 >= v140 )
      goto LABEL_169;
    if ( v155 )
    {
      v141 = nextPartySvtList->m_Items[v139];
      this = (BattleSwitchPartyConfirmWindow_o *)System_Collections_Generic_List_object___get_Item(
                                                   v155,
                                                   v139,
                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      if ( v141 )
      {
        if ( (int)v139 >= v155->fields._size )
        {
          BattleSelectServantComponent__setNone(v141, 0);
        }
        else
        {
          v142 = (BattleServantData_o *)this;
          BattleSelectServantComponent__setData(v141, (BattleServantData_o *)this, 2, v139, 0, 0);
          if ( !v142 )
            goto LABEL_167;
          v143 = BattleServantData__isAlive(v142, 0, 0);
          BattleSelectServantComponent__setSelectMask(v141, v143, overwriteDisableMessage, result, 0, 0);
        }
        ++v139;
        nextPartySvtList = v148->fields.nextPartySvtList;
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
  Il2CppObject *Object_object__51111776; // x20
  _BOOL8 v10; // x0
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C3B0EE & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    byte_4C3B0EE = 1;
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
      Object_object__51111776 = AssetData__GetObject_object__51111776(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51111776, 0, 0);
      if ( !v10 )
      {
        if ( !Object_object__51111776 )
          sub_1C32E7C(v10);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Object_object__51111776,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        p_battleAssetUiAtlas->klass = (CGThumbnailListItem_c *)Component_object;
        sub_1C32BC4(p_battleAssetUiAtlas, (int32_t)Component_object, v12, v13);
      }
    }
  }
}


void BattleSwitchPartyConfirmWindow__UpdateSprites(BattleSwitchPartyConfirmWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UISprite_o *v4; // x0
  struct BattleSwitchPartyConfirmWindow_SpriteParam_array *spriteParams; // x21
  int max_length; // w8
  unsigned int v7; // w22
  BattleSwitchPartyConfirmWindow_SpriteParam_o *v8; // x24
  UnityEngine_Object_o *sprite; // x20

  if ( (byte_4C3B0ED & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0ED = 1;
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
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
          sub_1C32E84(v4);
        v8 = spriteParams->m_Items[v7];
        if ( !v8 )
          break;
        sprite = (UnityEngine_Object_o *)v8->fields.sprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v4 = (UISprite_o *)UnityEngine_Object__op_Equality(sprite, 0, 0);
        if ( ((unsigned __int8)v4 & 1) == 0 )
        {
          v4 = v8->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_atlas(v4, this->fields.battleAssetUiAtlas, 0);
          v4 = v8->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_spriteName(v4, v8->fields.spriteName, 0);
        }
        max_length = spriteParams->max_length;
        if ( (int)++v7 >= max_length )
          return;
      }
LABEL_17:
      sub_1C32E7C(v4);
    }
  }
}


System_String_o *BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
        int32_t partyIndex,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  Il2CppObject *v12; // x0
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3B0F1 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_11161/*"ROMAN_NUMBER_{0}"*/);
    sub_1C32C20(&StringLiteral_5836/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/);
    byte_4C3B0F1 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_5836/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/, 0);
  v14 = partyIndex + 1;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v4, v5, v6, v7, v8, v9);
  v11 = System_String__Format((System_String_o *)StringLiteral_11161/*"ROMAN_NUMBER_{0}"*/, v10, 0);
  v12 = (Il2CppObject *)LocalizationManager__Get(v11, 0);
  return System_String__Format(v3, v12, 0);
}


BattleServantData_array *BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
        int32_t targetType,
        BattleServantData_array *svtList,
        int32_t actorId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  long double inited; // q0
  System_Func_object__bool__o *v10; // x0
  intptr_t *v11; // x8
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  System_Func_TSource__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4C3B0F2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_BattleServantData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C32C20(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C32C20(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__5__);
    sub_1C32C20(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__);
    sub_1C32C20(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
    byte_4C3B0F2 = 1;
  }
  v7 = sub_1C32E6C(BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = actorId;
  if ( targetType <= 3 )
  {
    if ( !targetType )
    {
      v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
      v11 = &Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__5__;
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
    v12 = Method_System_Array_Empty_BattleServantData___;
    v13 = *((_QWORD *)Method_System_Array_Empty_BattleServantData___ + 7);
    if ( !v13 )
    {
      sub_1C83390(Method_System_Array_Empty_BattleServantData___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C83334(inited);
    return **(BattleServantData_array ***)(v15 + 184);
  }
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
  v11 = &Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__;
LABEL_22:
  v17 = (System_Func_TSource__bool__o *)v10;
  System_Func_object__bool____ctor(v10, (Il2CppObject *)v7, *v11, 0);
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)svtList,
          v17,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v18,
                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


UnityEngine_GameObject_o *BattleSwitchPartyConfirmWindow__get_ParentPanel(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_1C32E7C(transform);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
}


System_String_o *BattleSwitchPartyConfirmWindow__get_closeBtnPath(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3B0E9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4510/*"CloseButton"*/);
    byte_4C3B0E9 = 1;
  }
  return (System_String_o *)StringLiteral_4510/*"CloseButton"*/;
}


void BattleSwitchPartyConfirmWindow__setInitialPos(BattleSwitchPartyConfirmWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v4; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v4 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C313D1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v4 )
LABEL_6:
    sub_1C32E7C(gameObject);
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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

  if ( (byte_4C3B0F3 & 1) == 0 )
  {
    sub_1C32C20(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    byte_4C3B0F3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleSwitchPartyConfirmWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields->__9 = (struct BattleSwitchPartyConfirmWindow___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(_4__this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return x->fields.uniqueId == this->fields.actorId;
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_2___SetSwitchPartyData_b__6(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.uniqueId != this->fields.actorId;
}