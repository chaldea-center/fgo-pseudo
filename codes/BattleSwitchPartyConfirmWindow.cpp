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

  if ( (byte_4C2A9CC & 1) == 0 )
  {
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass16_0__Close_b__0__);
    sub_1C2D490(&BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
    byte_4C2A9CC = 1;
  }
  v5 = sub_1C2D6DC(BattleSwitchPartyConfirmWindow___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = call;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)call, v10, v11);
  v12 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
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

  if ( (byte_4C2A9D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_int___);
    byte_4C2A9D0 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    closeCallback = (System_Action_T__o *)this->fields.closeCallback;
    p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
    ActionExtensions__Call_int_(closeCallback, -1, (const MethodInfo_301B1A0 *)Method_ActionExtensions_Call_int___);
    p_closeCallback->klass = 0;
    sub_1C2D434(p_closeCallback, 0, v5, v6);
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

  if ( (byte_4C2A9D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_int___);
    byte_4C2A9D1 = 1;
  }
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    closeCallback = (System_Action_T__o *)this->fields.closeCallback;
    p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
    ActionExtensions__Call_int_(
      closeCallback,
      (int32_t)p_closeCallback[-1].fields._ThumbnailSpritePath_k__BackingField,
      (const MethodInfo_301B1A0 *)Method_ActionExtensions_Call_int___);
    p_closeCallback->klass = 0;
    sub_1C2D434(p_closeCallback, 0, v5, v6);
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

  if ( (byte_4C2A9CB & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleSwitchPartyConfirmWindow_OnClickCloseButton__);
    sub_1C2D490(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4C2A9CB = 1;
  }
  ParentPanel = BattleSwitchPartyConfirmWindow__get_ParentPanel(this, (const MethodInfo *)call);
  if ( !ParentPanel )
    sub_1C2D6EC(0, v6);
  UnityEngine_GameObject__SetActive(ParentPanel, 1, 0);
  BattleSwitchPartyConfirmWindow__UpdateSprites(this, v7);
  v8 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C2D6DC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
  __int64 v23; // x2
  struct BattleSelectServantComponent_array *currentPartySvtList; // x8
  __int64 v25; // x28
  int max_length; // w9
  unsigned int v27; // w3
  unsigned int v28; // w9
  BattleSelectServantComponent_o *v29; // x20
  BattleServantData_o *v30; // x21
  bool isAlive; // w0
  DeckData_o *SelectPartyMyDeck; // x19
  System_Collections_Generic_List_object__o *v33; // x28
  Il2CppObject *v34; // x23
  struct BattleDeckServantData_array *svts; // x19
  BattleData_o *v36; // x20
  BattleEntity_o *v37; // x21
  int v38; // w8
  unsigned int v39; // w22
  BattleDeckServantData_o *v40; // x19
  Il2CppObject *DataFromMessagePackString_object; // x19
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
  BattleServantData_array *object__51338124; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x8
  BattleServantData_o *v84; // x27
  unsigned __int64 v85; // x28
  Il2CppObject *v86; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  FunctionEntity_o *v89; // x21
  Il2CppClass *v90; // x8
  BuffEntity_o *v91; // x29
  struct System_String_array *svals; // x8
  System_String_o *v93; // x22
  DataVals_o *v94; // x19
  __int64 v95; // x0
  __int64 v96; // x1
  int32_t targetType; // w21
  BattleServantData_array *v98; // x1
  const MethodInfo *v99; // x3
  BattleServantData_array *v100; // x22
  il2cpp_array_size_t v101; // x8
  unsigned __int64 v102; // x20
  BattleServantData_o *v103; // x21
  System_Int32_array *Individualities; // x0
  System_Int32_array *ckSelfIndv; // x25
  System_Int32_array *v106; // x24
  System_Int32_array *CkSelfCountIndividuality; // x3
  System_Int32_array *v108; // x0
  System_Int32_array *ckOpIndv; // x25
  System_Int32_array *v110; // x24
  System_Int32_array *CkOpCountIndividuality; // x3
  int32_t type; // w8
  BattleServantData_PreEntryStatus_o *v113; // x21
  __int64 v114; // x0
  BattleServantData_PreEntryStatus_o *PreEntryStatusInfo_k__BackingField; // x21
  __int64 v116; // x0
  __int64 v117; // x1
  Il2CppObject *v118; // x21
  __int64 v119; // x20
  __int64 v120; // x0
  __int64 v121; // x1
  __int64 v122; // x0
  SkillLvEntity_o *v123; // x0
  __int64 v124; // x1
  SkillLvEntity_o *v125; // x19
  struct System_Int32_array *v126; // x26
  System_Func_object__bool__o *v127; // x21
  BattleServantData_array *IsContainOnFieldsParameter; // x0
  __int64 v129; // x1
  __int64 v130; // x2
  il2cpp_array_size_t v131; // x8
  unsigned __int64 v132; // x24
  FunctionEntity_o *v133; // x21
  struct System_String_array *v134; // x8
  System_String_o *v135; // x25
  DataVals_o *v136; // x22
  __int64 v137; // x0
  __int64 v138; // x1
  int32_t v139; // w21
  BattleServantData_array *v140; // x1
  const MethodInfo *v141; // x3
  BattleServantData_array *v142; // x21
  int v143; // w8
  int j; // w27
  BattleServantData_o *v145; // x8
  BattleServantData_PreEntryStatus_o *v146; // x25
  __int64 v147; // x0
  UILabel_o *nextPartyNameLabel; // x19
  const MethodInfo *v149; // x1
  struct BattleSelectServantComponent_array *nextPartySvtList; // x8
  __int64 v151; // x19
  int v152; // w9
  BattleSelectServantComponent_o *v153; // x20
  BattleServantData_o *v154; // x21
  bool v155; // w0
  struct BattleDeckServantData_array *v156; // [xsp+8h] [xbp-108h]
  System_Collections_Generic_List_commandAssistData__o *commandAssistDataList; // [xsp+10h] [xbp-100h]
  BattleEntity_o *battle_ent; // [xsp+18h] [xbp-F8h]
  System_String_o *overwriteDisableMessage; // [xsp+20h] [xbp-F0h]
  BattleSwitchPartyConfirmWindow_o *v160; // [xsp+28h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v161; // [xsp+30h] [xbp-E0h]
  BattleData_o *v162; // [xsp+38h] [xbp-D8h]
  BattleData_o *v163; // [xsp+38h] [xbp-D8h]
  Il2CppObject *Master_object; // [xsp+40h] [xbp-D0h]
  unsigned int v165; // [xsp+48h] [xbp-C8h]
  SkillLvEntity_o *v166; // [xsp+48h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v167; // [xsp+50h] [xbp-C0h]
  BattleServantData_o *v168; // [xsp+58h] [xbp-B8h]
  BattleServantData_o *v169; // [xsp+58h] [xbp-B8h]
  BattleSwitchPartyConfirmWindow_o *v170; // [xsp+60h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v171; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v172; // [xsp+80h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+A0h] [xbp-70h] BYREF
  int32_t result; // [xsp+ACh] [xbp-64h] BYREF

  v7 = battleData;
  v160 = this;
  if ( (byte_4C2A9CD & 1) == 0 )
  {
    sub_1C2D490(&BattleServantData_TypeInfo);
    sub_1C2D490(&Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
    sub_1C2D490(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C2D490(&DataVals_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_1C2D490(&Method_System_Linq_Enumerable_First_BattleServantData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1C2D490(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C2D490(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&BattleServantData_PreEntryStatus_TypeInfo);
    sub_1C2D490(&Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__);
    sub_1C2D490(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__);
    sub_1C2D490(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    sub_1C2D490(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__);
    sub_1C2D490(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    sub_1C2D490(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    sub_1C2D490(&StringLiteral_5826/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/);
    sub_1C2D490(&StringLiteral_5827/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/);
    this = v160;
    byte_4C2A9CD = 1;
  }
  result = 0;
  value = 0;
  memset(&v172, 0, sizeof(v172));
  if ( !v7 )
    goto LABEL_167;
  v162 = v7;
  SelectedPartyIndex_k__BackingField = v7->fields._SelectedPartyIndex_k__BackingField;
  this->fields.closeCallback = callback;
  p_closeCallback = &this->fields.closeCallback;
  *((_DWORD *)p_closeCallback - 2) = nextPtIndex;
  sub_1C2D434((CGThumbnailListItem_o *)p_closeCallback, (int32_t)callback, nextPtIndex, (const MethodInfo *)callback);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  overwriteDisableMessage = LocalizationManager__Get((System_String_o *)StringLiteral_5827/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_MESSAGE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5826/*"EX_BATTLE_WINDOW_SWITCH_PARTY_DEAD_SERVANT_FONT_SIZE"*/, 0);
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
    _9__17_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__17_0,
      v15,
      Method_BattleSwitchPartyConfirmWindow___c__SetSwitchPartyData_b__17_0__,
      0);
    static_fields = BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Func_BattleServantData__int__o *)_9__17_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TKey__o *)_9__17_0,
                                                               (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          v19,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  currentPartyNameLabel = v160->fields.currentPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               SelectedPartyIndex_k__BackingField,
                                               v22);
  if ( !currentPartyNameLabel )
    goto LABEL_167;
  UILabel__set_text(currentPartyNameLabel, (System_String_o *)this, 0);
  currentPartySvtList = v160->fields.currentPartySvtList;
  if ( !currentPartySvtList )
    goto LABEL_167;
  v25 = 4;
  while ( 1 )
  {
    max_length = currentPartySvtList->max_length;
    v27 = v25 - 4;
    if ( (int)v25 - 4 >= max_length )
      break;
    if ( v27 >= max_length )
      goto LABEL_169;
    if ( v20 )
    {
      v28 = v20->max_length;
      if ( v27 >= v28 )
LABEL_169:
        sub_1C2D6F4(this, battleData, v23);
      v29 = (BattleSelectServantComponent_o *)*((_QWORD *)&currentPartySvtList->obj.klass + v25);
      if ( v29 )
      {
        if ( (int)v27 >= (int)v28 )
        {
          BattleSelectServantComponent__setNone(
            *((BattleSelectServantComponent_o **)&currentPartySvtList->obj.klass + v25),
            0);
        }
        else
        {
          v30 = (BattleServantData_o *)*((_QWORD *)&v20->obj.klass + v25);
          BattleSelectServantComponent__setData(
            *((BattleSelectServantComponent_o **)&currentPartySvtList->obj.klass + v25),
            v30,
            1,
            v27,
            0,
            0);
          if ( !v30 )
            goto LABEL_167;
          isAlive = BattleServantData__isAlive(v30, 0, 0);
          BattleSelectServantComponent__setSelectMask(v29, isAlive, overwriteDisableMessage, result, 0, 0);
        }
        ++v25;
        currentPartySvtList = v160->fields.currentPartySvtList;
        if ( currentPartySvtList )
          continue;
      }
    }
    goto LABEL_167;
  }
  v167 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v167,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this = (BattleSwitchPartyConfirmWindow_o *)v162->fields.battle_info;
  if ( !this )
    goto LABEL_167;
  SelectPartyMyDeck = BattleInfoData__GetSelectPartyMyDeck((BattleInfoData_o *)this, v160->fields.nextPartyIndex, 0);
  battle_ent = v162->fields.battle_ent;
  commandAssistDataList = BattleData__CreateLotteryCommandAssistInfo(v162, SelectPartyMyDeck, 0);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  v161 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v161,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillLvMaster___);
  v34 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FunctionMaster___);
  this = (BattleSwitchPartyConfirmWindow_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !SelectPartyMyDeck || (svts = SelectPartyMyDeck->fields.svts, v36 = v162, v37 = battle_ent, !svts) )
LABEL_167:
    sub_1C2D6EC(this, battleData);
  v38 = svts->max_length;
  v170 = this;
  if ( v38 < 1 )
    goto LABEL_87;
  v39 = 0;
  v156 = svts;
  do
  {
    if ( v39 >= v38 )
      goto LABEL_169;
    v40 = svts->m_Items[v39];
    v168 = (BattleServantData_o *)sub_1C2D6DC(BattleServantData_TypeInfo);
    BattleServantData___ctor(v168, 0);
    if ( !v37 )
      goto LABEL_167;
    if ( !v40 )
      goto LABEL_167;
    this = (BattleSwitchPartyConfirmWindow_o *)BattleDeckServantData__GetFollowerType(v40, v37->fields.followerType, 0);
    if ( !v168 )
      goto LABEL_167;
    BattleServantData__setServantData(v168, v40, v37, (int32_t)this, 0, commandAssistDataList, 0);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleData__get_MySvtDataStringDict(v36, 0);
    if ( !this )
      goto LABEL_167;
    v165 = v39;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v168->fields.uniqueId,
           &value,
           (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
    {
      DataFromMessagePackString_object = BattleUtility__GetDataFromMessagePackString_object_(
                                           (System_String_o *)value,
                                           (const MethodInfo_30BFED8 *)Method_BattleUtility_GetDataFromMessagePackString_BattleServantData_SaveData___);
      ((void (__fastcall *)(BattleServantData_o *, Il2CppObject *, const MethodInfo *))v168->klass->vtable._17_setSaveData.methodPtr)(
        v168,
        DataFromMessagePackString_object,
        v168->klass->vtable._17_setSaveData.method);
      BattleServantData__SetTransformSaveData(v168, (BattleServantData_SaveData_o *)DataFromMessagePackString_object, 0);
      BattleServantData__loadTransformServant(v168, v36, 0);
      goto LABEL_81;
    }
    v43 = (BattleServantData_PreEntryStatus_o *)sub_1C2D6DC(BattleServantData_PreEntryStatus_TypeInfo);
    BattleServantData_PreEntryStatus___ctor(v43, 0);
    v168->fields._PreEntryStatusInfo_k__BackingField = v43;
    sub_1C2D434((CGThumbnailListItem_o *)&v168->fields._PreEntryStatusInfo_k__BackingField, (int32_t)v43, v44, v45);
    this = (BattleSwitchPartyConfirmWindow_o *)BattleServantData__getPassiveSkills(v168, 0);
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
        if ( !v34 )
          goto LABEL_167;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v34,
                                                     *((_DWORD *)&closeBtnObject[1].monitor + v54),
                                                     (const MethodInfo_3387D98 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
        this = v170;
        if ( !v170 )
          goto LABEL_167;
        this = (BattleSwitchPartyConfirmWindow_o *)DataMasterBase_object__object__int___GetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)v170,
                                                     (int32_t)v57[1].monitor,
                                                     (const MethodInfo_3387D98 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
        if ( v33 )
        {
          items = v33->fields._items;
          v59 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
          ++v33->fields._version;
          if ( items )
          {
            size = v33->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
            {
              v61 = &items->obj.klass + size;
              v33->fields._size = size + 1;
              v61[4] = (Il2CppClass *)v49;
              sub_1C2D434((CGThumbnailListItem_o *)(v61 + 4), (int32_t)v49, v23, v42);
              goto LABEL_72;
            }
            System_Collections_Generic_List_object___AddWithResize(
              v33,
              (Il2CppObject *)v49,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
            if ( (v52 & 1) == 0 )
              goto LABEL_80;
LABEL_73:
            if ( v161 )
            {
              v62 = v161->fields._items;
              v63 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
              ++v161->fields._version;
              if ( v62 )
              {
                v64 = v161->fields._size;
                if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v161,
                    (Il2CppObject *)v49,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
                }
                else
                {
                  v65 = &v62->obj.klass + v64;
                  v161->fields._size = v64 + 1;
                  v65[4] = (Il2CppClass *)v49;
                  sub_1C2D434((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v49, v23, v42);
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
    if ( !v167 )
      goto LABEL_167;
    v66 = v167->fields._items;
    svts = v156;
    v67 = Method_System_Collections_Generic_List_BattleServantData__Add__;
    ++v167->fields._version;
    if ( !v66 )
      goto LABEL_167;
    v68 = v167->fields._size;
    v37 = battle_ent;
    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v167,
        (Il2CppObject *)v168,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v167->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)v168;
      sub_1C2D434((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v168, v23, v42);
    }
    v38 = v156->max_length;
    v36 = v162;
    v39 = v165 + 1;
  }
  while ( (int)(v165 + 1) < v38 );
LABEL_87:
  if ( !v33 )
    goto LABEL_167;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v171,
    v33,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v172 = v171;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v172,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    current = v172.fields._current;
    v71 = sub_1C2D6DC(BattleSwitchPartyConfirmWindow___c__DisplayClass17_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v71, 0);
    if ( !current )
      sub_1C2D6EC(v72, v73);
    v74 = ((unsigned int (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[5].methodPtr)(
            current,
            current->klass->vtable[5].method);
    if ( !Master_object )
      sub_1C2D6EC(0, v74);
    Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v74, HIDWORD(current[2].klass), 0);
    v77 = Entity;
    if ( !Entity )
      sub_1C2D6EC(0, v76);
    if ( !v71 )
      sub_1C2D6EC(Entity, v76);
    funcId = (BattleServantData_o *)Entity->fields.funcId;
    *(_DWORD *)(v71 + 16) = current[1].monitor;
    v79 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v79,
      (Il2CppObject *)v71,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_0__SetSwitchPartyData_b__3__,
      0);
    object__51338124 = (BattleServantData_array *)System_Linq_Enumerable__First_object__51338124(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v167,
                                                    (System_Func_TSource__bool__o *)v79,
                                                    (const MethodInfo_30F5B8C *)Method_System_Linq_Enumerable_First_BattleServantData___);
    v166 = v77;
    v163 = (BattleData_o *)v71;
    if ( !funcId )
      sub_1C2D6EC(object__51338124, v81);
    v83 = *(_QWORD *)&funcId->fields.uniqueId;
    if ( (int)v83 >= 1 )
    {
      v84 = (BattleServantData_o *)object__51338124;
      v85 = 0;
      v169 = funcId;
      do
      {
        if ( v85 >= (unsigned int)v83 )
          sub_1C2D6F4(object__51338124, v81, v82);
        if ( !v34 )
          sub_1C2D6EC(object__51338124, v81);
        v86 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v34,
                *((_DWORD *)&funcId->fields.userSvtId.fields.currentCryptoKey + v85),
                (const MethodInfo_3387D98 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v89 = (FunctionEntity_o *)v86;
        if ( !v86 )
          sub_1C2D6EC(0, v87);
        v90 = v86[2].klass;
        if ( !v90 )
          sub_1C2D6EC(v86, v87);
        if ( !LODWORD(v90->_1.namespaze) )
          sub_1C2D6F4(v86, v87, v88);
        if ( !v170 )
          sub_1C2D6EC(0, v87);
        object__51338124 = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v170,
                                                        (int32_t)v90->_1.byval_arg.data,
                                                        (const MethodInfo_3387D98 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v91 = (BuffEntity_o *)object__51338124;
        if ( !object__51338124 )
          sub_1C2D6EC(0, v81);
        if ( (unsigned int)(HIDWORD(object__51338124->bounds) - 81) < 2 )
        {
          svals = v166->fields.svals;
          if ( !svals )
            sub_1C2D6EC(object__51338124, v81);
          if ( v85 >= LODWORD(svals->max_length) )
            sub_1C2D6F4(object__51338124, v81, v82);
          v93 = svals->m_Items[v85];
          v94 = (DataVals_o *)sub_1C2D6DC(DataVals_TypeInfo);
          DataVals___ctor(v94, v93, 0);
          if ( !v94 )
            sub_1C2D6EC(v95, v96);
          DataVals__SetType_41456176(v94, v89, v85, 0);
          object__51338124 = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v94, 0);
          if ( ((unsigned __int8)object__51338124 & 1) == 0 )
          {
            if ( !v167 )
              sub_1C2D6EC(0, v81);
            targetType = v89->fields.targetType;
            v98 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                               v167,
                                               (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            object__51338124 = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                 targetType,
                                 v98,
                                 v163->fields.m_CachedPtr,
                                 v99);
            v100 = object__51338124;
            if ( !object__51338124 )
              sub_1C2D6EC(0, v81);
            v101 = object__51338124->max_length;
            if ( (int)v101 >= 1 )
            {
              v102 = 0;
              do
              {
                if ( v102 >= (unsigned int)v101 )
                  sub_1C2D6F4(object__51338124, v81, v82);
                if ( !v84 )
                  sub_1C2D6EC(object__51338124, v81);
                v103 = v100->m_Items[v102];
                Individualities = BattleServantData__getIndividualities(v84, 0, 1, 0, 1, 0);
                ckSelfIndv = v91->fields.ckSelfIndv;
                v106 = Individualities;
                CkSelfCountIndividuality = BuffEntity__GetCkSelfCountIndividuality(v91, 0);
                object__51338124 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                v106,
                                                                ckSelfIndv,
                                                                v91,
                                                                CkSelfCountIndividuality,
                                                                0);
                if ( ((unsigned __int8)object__51338124 & 1) != 0 )
                {
                  if ( !v103 )
                    sub_1C2D6EC(object__51338124, v81);
                  v108 = BattleServantData__getIndividualities(v103, 0, 1, 0, 1, 0);
                  ckOpIndv = v91->fields.ckOpIndv;
                  v110 = v108;
                  CkOpCountIndividuality = BuffEntity__GetCkOpCountIndividuality(v91, 0);
                  object__51338124 = (BattleServantData_array *)BattleBuffData__CheckBuffTypeIndiviuality(
                                                                  v110,
                                                                  ckOpIndv,
                                                                  v91,
                                                                  CkOpCountIndividuality,
                                                                  0);
                  if ( ((unsigned __int8)object__51338124 & 1) != 0 )
                  {
                    type = v91->fields.type;
                    if ( type == 82 )
                    {
                      PreEntryStatusInfo_k__BackingField = v103->fields._PreEntryStatusInfo_k__BackingField;
                      v116 = DataVals__GetValue(v94, 0);
                      if ( !PreEntryStatusInfo_k__BackingField )
                        sub_1C2D6EC(v116, v117);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(PreEntryStatusInfo_k__BackingField, -(int)v116, 0);
                    }
                    else if ( type == 81 )
                    {
                      v113 = v103->fields._PreEntryStatusInfo_k__BackingField;
                      v114 = DataVals__GetValue(v94, 0);
                      if ( !v113 )
                        sub_1C2D6EC(v114, (unsigned int)v114);
                      BattleServantData_PreEntryStatus__AddAddMaxHp(v113, v114, 0);
                    }
                  }
                }
                LODWORD(v101) = v100->max_length;
                ++v102;
              }
              while ( (__int64)v102 < (int)v101 );
            }
          }
        }
        funcId = v169;
        ++v85;
        LODWORD(v83) = v169->fields.uniqueId;
      }
      while ( (__int64)v85 < (int)v83 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v172,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  this = (BattleSwitchPartyConfirmWindow_o *)v161;
  if ( !v161 )
    goto LABEL_167;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v171,
    v161,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v172 = v171;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v172,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    v118 = v172.fields._current;
    v119 = sub_1C2D6DC(BattleSwitchPartyConfirmWindow___c__DisplayClass17_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v119, 0);
    if ( !v118 )
      sub_1C2D6EC(v120, v121);
    v122 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v118->klass->vtable[5].methodPtr)(
             v118,
             v118->klass->vtable[5].method);
    if ( !Master_object )
      sub_1C2D6EC(v122, (unsigned int)v122);
    v123 = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, v122, HIDWORD(v118[2].klass), 0);
    v125 = v123;
    if ( !v123 )
      sub_1C2D6EC(0, v124);
    if ( !v119 )
      sub_1C2D6EC(v123, v124);
    v126 = v123->fields.funcId;
    *(_DWORD *)(v119 + 16) = v118[1].monitor;
    v127 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v127,
      (Il2CppObject *)v119,
      Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_1__SetSwitchPartyData_b__4__,
      0);
    IsContainOnFieldsParameter = (BattleServantData_array *)System_Linq_Enumerable__First_object__51338124(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v167,
                                                              (System_Func_TSource__bool__o *)v127,
                                                              (const MethodInfo_30F5B8C *)Method_System_Linq_Enumerable_First_BattleServantData___);
    if ( !v126 )
      sub_1C2D6EC(IsContainOnFieldsParameter, v129);
    v131 = v126->max_length;
    if ( (int)v131 >= 1 )
    {
      v132 = 0;
      do
      {
        if ( v132 >= (unsigned int)v131 )
          sub_1C2D6F4(IsContainOnFieldsParameter, v129, v130);
        if ( !v34 )
          sub_1C2D6EC(IsContainOnFieldsParameter, v129);
        IsContainOnFieldsParameter = (BattleServantData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v34,
                                                                  v126->m_Items[v132],
                                                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        v133 = (FunctionEntity_o *)IsContainOnFieldsParameter;
        if ( !IsContainOnFieldsParameter )
          sub_1C2D6EC(0, v129);
        if ( LODWORD(IsContainOnFieldsParameter->max_length) == 7 )
        {
          v134 = v125->fields.svals;
          if ( !v134 )
            sub_1C2D6EC(IsContainOnFieldsParameter, v129);
          if ( v132 >= LODWORD(v134->max_length) )
            sub_1C2D6F4(IsContainOnFieldsParameter, v129, v130);
          v135 = v134->m_Items[v132];
          v136 = (DataVals_o *)sub_1C2D6DC(DataVals_TypeInfo);
          DataVals___ctor(v136, v135, 0);
          if ( !v136 )
            sub_1C2D6EC(v137, v138);
          DataVals__SetType_41456176(v136, v133, v132, 0);
          IsContainOnFieldsParameter = (BattleServantData_array *)DataVals__IsContainOnFieldsParameter(v136, 0);
          if ( ((unsigned __int8)IsContainOnFieldsParameter & 1) == 0 )
          {
            if ( !v167 )
              sub_1C2D6EC(0, v129);
            v139 = v133->fields.targetType;
            v140 = (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                v167,
                                                (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
            IsContainOnFieldsParameter = BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetTargetSvtList_17_2(
                                           v139,
                                           v140,
                                           *(_DWORD *)(v119 + 16),
                                           v141);
            v142 = IsContainOnFieldsParameter;
            if ( !IsContainOnFieldsParameter )
              sub_1C2D6EC(0, v129);
            v143 = IsContainOnFieldsParameter->max_length;
            if ( v143 >= 1 )
            {
              for ( j = 0; j < v143; ++j )
              {
                if ( j >= (unsigned int)v143 )
                  sub_1C2D6F4(IsContainOnFieldsParameter, v129, v130);
                v145 = v142->m_Items[j];
                if ( !v145 )
                  sub_1C2D6EC(IsContainOnFieldsParameter, v129);
                v146 = v145->fields._PreEntryStatusInfo_k__BackingField;
                v147 = DataVals__GetValue(v136, 0);
                if ( !v146 )
                  sub_1C2D6EC(v147, (unsigned int)v147);
                BattleServantData_PreEntryStatus__AddGainNp(v146, v147, 0);
                v143 = v142->max_length;
              }
            }
          }
        }
        LODWORD(v131) = v126->max_length;
        ++v132;
      }
      while ( (__int64)v132 < (int)v131 );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v172,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  nextPartyNameLabel = v160->fields.nextPartyNameLabel;
  this = (BattleSwitchPartyConfirmWindow_o *)BattleSwitchPartyConfirmWindow___SetSwitchPartyData_g__GetPartyName_17_1(
                                               v160->fields.nextPartyIndex,
                                               v149);
  if ( !nextPartyNameLabel )
    goto LABEL_167;
  UILabel__set_text(nextPartyNameLabel, (System_String_o *)this, 0);
  nextPartySvtList = v160->fields.nextPartySvtList;
  if ( !nextPartySvtList )
    goto LABEL_167;
  v151 = 0;
  while ( 1 )
  {
    v152 = nextPartySvtList->max_length;
    if ( (int)v151 >= v152 )
      break;
    if ( (unsigned int)v151 >= v152 )
      goto LABEL_169;
    if ( v167 )
    {
      v153 = nextPartySvtList->m_Items[v151];
      this = (BattleSwitchPartyConfirmWindow_o *)System_Collections_Generic_List_object___get_Item(
                                                   v167,
                                                   v151,
                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
      if ( v153 )
      {
        if ( (int)v151 >= v167->fields._size )
        {
          BattleSelectServantComponent__setNone(v153, 0);
        }
        else
        {
          v154 = (BattleServantData_o *)this;
          BattleSelectServantComponent__setData(v153, (BattleServantData_o *)this, 2, v151, 0, 0);
          if ( !v154 )
            goto LABEL_167;
          v155 = BattleServantData__isAlive(v154, 0, 0);
          BattleSelectServantComponent__setSelectMask(v153, v155, overwriteDisableMessage, result, 0, 0);
        }
        ++v151;
        nextPartySvtList = v160->fields.nextPartySvtList;
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
  Il2CppObject *Object_object__51051712; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C2A9CF & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&BattleDataDefine_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_3104/*"BattleAssetUIAtlas"*/);
    byte_4C2A9CF = 1;
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
      Object_object__51051712 = AssetData__GetObject_object__51051712(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3104/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0);
      if ( !v10 )
      {
        if ( !Object_object__51051712 )
          sub_1C2D6EC(v10, v11);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Object_object__51051712,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        p_battleAssetUiAtlas->klass = (CGThumbnailListItem_c *)Component_object;
        sub_1C2D434(p_battleAssetUiAtlas, (int32_t)Component_object, v13, v14);
      }
    }
  }
}


void BattleSwitchPartyConfirmWindow__UpdateSprites(BattleSwitchPartyConfirmWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UISprite_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleSwitchPartyConfirmWindow_SpriteParam_array *spriteParams; // x21
  int max_length; // w8
  unsigned int v9; // w22
  BattleSwitchPartyConfirmWindow_SpriteParam_o *v10; // x24
  UnityEngine_Object_o *sprite; // x20

  if ( (byte_4C2A9CE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A9CE = 1;
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
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1C2D6F4(v4, v5, v6);
        v10 = spriteParams->m_Items[v9];
        if ( !v10 )
          break;
        sprite = (UnityEngine_Object_o *)v10->fields.sprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v4 = (UISprite_o *)UnityEngine_Object__op_Equality(sprite, 0, 0);
        if ( ((unsigned __int8)v4 & 1) == 0 )
        {
          v4 = v10->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_atlas(v4, this->fields.battleAssetUiAtlas, 0);
          v4 = v10->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_spriteName(v4, v10->fields.spriteName, 0);
        }
        max_length = spriteParams->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_17:
      sub_1C2D6EC(v4, v5);
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
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  Il2CppObject *v9; // x0
  int v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2A9D2 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11155/*"ROMAN_NUMBER_{0}"*/);
    sub_1C2D490(&StringLiteral_5828/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/);
    byte_4C2A9D2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_5828/*"EX_BATTLE_WINDOW_SWITCH_PARTY_PARTY_NAME"*/, 0);
  v11 = partyIndex + 1;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v4, v5, v6);
  v8 = System_String__Format((System_String_o *)StringLiteral_11155/*"ROMAN_NUMBER_{0}"*/, v7, 0);
  v9 = (Il2CppObject *)LocalizationManager__Get(v8, 0);
  return System_String__Format(v3, v9, 0);
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

  if ( (byte_4C2A9D3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_BattleServantData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C2D490(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C2D490(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__5__);
    sub_1C2D490(&Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__);
    sub_1C2D490(&BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
    byte_4C2A9D3 = 1;
  }
  v7 = sub_1C2D6DC(BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_DWORD *)(v7 + 16) = actorId;
  if ( targetType <= 3 )
  {
    if ( !targetType )
    {
      v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleServantData__bool__TypeInfo);
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
      sub_1C7DC00(Method_System_Array_Empty_BattleServantData___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C7DBA4(inited);
    return **(BattleServantData_array ***)(v16 + 184);
  }
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleServantData__bool__TypeInfo);
  v12 = &Method_BattleSwitchPartyConfirmWindow___c__DisplayClass17_2__SetSwitchPartyData_b__6__;
LABEL_22:
  v18 = (System_Func_TSource__bool__o *)v11;
  System_Func_object__bool____ctor(v11, (Il2CppObject *)v7, *v12, 0);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)svtList,
          v18,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v19,
                                      (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


UnityEngine_GameObject_o *BattleSwitchPartyConfirmWindow__get_ParentPanel(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_1C2D6EC(transform, v3);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
}


System_String_o *BattleSwitchPartyConfirmWindow__get_closeBtnPath(
        BattleSwitchPartyConfirmWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2A9CA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4502/*"CloseButton"*/);
    byte_4C2A9CA = 1;
  }
  return (System_String_o *)StringLiteral_4502/*"CloseButton"*/;
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
  if ( !byte_4C20DA1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C2D6EC(gameObject, v4);
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

  if ( (byte_4C2A9D4 & 1) == 0 )
  {
    sub_1C2D490(&BattleSwitchPartyConfirmWindow___c_TypeInfo);
    byte_4C2A9D4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleSwitchPartyConfirmWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields->__9 = (struct BattleSwitchPartyConfirmWindow___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleSwitchPartyConfirmWindow___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(_4__this, method);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return x->fields.uniqueId == this->fields.actorId;
}


bool BattleSwitchPartyConfirmWindow___c__DisplayClass17_2___SetSwitchPartyData_b__6(
        BattleSwitchPartyConfirmWindow___c__DisplayClass17_2_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.uniqueId != this->fields.actorId;
}