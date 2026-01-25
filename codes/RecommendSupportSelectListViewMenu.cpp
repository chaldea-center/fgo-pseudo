void RecommendSupportSelectListViewMenu___ctor(RecommendSupportSelectListViewMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CEA479 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseMenu_TypeInfo);
    byte_4CEA479 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void RecommendSupportSelectListViewMenu__Awake(RecommendSupportSelectListViewMenu_o *this, const MethodInfo *method)
{
  ;
}


bool RecommendSupportSelectListViewMenu__CompareAllDeckData(
        RecommendSupportSelectListViewMenu_o *this,
        System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *data1,
        System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *data2,
        System_Int32_array **diffDeckDataIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x22
  __int64 v9; // x1
  unsigned int i; // w23
  BalanceConfig_c *v11; // x0
  System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c *v16; // x8
  RecommendSupportData_RecommendDeckData_o *v17; // x24
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  System_Int32_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CEA472 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEA472 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0; ; ++i )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v11->static_fields->RecommendSupportMemberMax )
      break;
    if ( !data1 )
      goto LABEL_31;
    klass = data1->klass;
    v13 = *(unsigned __int16 *)&data1->klass->_2.rank;
    if ( *(_WORD *)&data1->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_12;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v15 = sub_1C51E70(
              data1,
              System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo,
              0);
    }
    v11 = (BalanceConfig_c *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *, _QWORD, _QWORD))v15)(
                               data1,
                               i,
                               *(_QWORD *)(v15 + 8));
    if ( !data2 )
      goto LABEL_31;
    v16 = data2->klass;
    v17 = (RecommendSupportData_RecommendDeckData_o *)v11;
    v18 = *(unsigned __int16 *)&data2->klass->_2.rank;
    if ( *(_WORD *)&data2->klass->_2.rank )
    {
      v19 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c **)v19 - 1) != System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = (__int64)&v16->vtable[*v19];
    }
    else
    {
LABEL_19:
      v20 = sub_1C51E70(
              data2,
              System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo,
              0);
    }
    v11 = (BalanceConfig_c *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *, _QWORD, _QWORD))v20)(
                               data2,
                               i,
                               *(_QWORD *)(v20 + 8));
    if ( !v17 )
      goto LABEL_31;
    v11 = (BalanceConfig_c *)RecommendSupportData_RecommendDeckData__Compare(
                               v17,
                               (RecommendSupportData_RecommendDeckData_o *)v11,
                               0);
    if ( ((unsigned __int8)v11 & 1) == 0 )
    {
      if ( !v8 )
        goto LABEL_31;
      items = v8->fields._items;
      v22 = Method_System_Collections_Generic_List_int__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_31;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v8,
          i,
          *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v8->fields._size = size + 1;
        items->m_Items[size] = i;
      }
    }
  }
  if ( !v8 )
LABEL_31:
    sub_1C7BD40(v11, v9);
  v24 = System_Collections_Generic_List_int___ToArray(
          v8,
          (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
  *diffDeckDataIndex = v24;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)diffDeckDataIndex, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  return v8->fields._size < 1;
}


bool RecommendSupportSelectListViewMenu__CompareDeckData(
        RecommendSupportSelectListViewMenu_o *this,
        RecommendSupportData_RecommendDeckData_array *data1,
        RecommendSupportData_RecommendDeckData_array *data2,
        const MethodInfo *method)
{
  int v6; // w22
  BalanceConfig_c *v7; // x0
  int v8; // w24
  int32_t RecommendSupportMemberMax; // w23

  if ( (byte_4CEA473 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    byte_4CEA473 = 1;
  }
  v6 = -1;
  do
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = v6 + 1;
    RecommendSupportMemberMax = v7->static_fields->RecommendSupportMemberMax;
    if ( v6 + 1 >= RecommendSupportMemberMax )
      break;
    if ( !data1 )
      goto LABEL_14;
    if ( (unsigned int)v8 >= LODWORD(data1->max_length) )
      goto LABEL_15;
    if ( !data2 )
      goto LABEL_14;
    if ( (unsigned int)++v6 >= LODWORD(data2->max_length) )
LABEL_15:
      sub_1C7BD48(v7);
    v7 = (BalanceConfig_c *)data1->m_Items[v8];
    if ( !v7 )
LABEL_14:
      sub_1C7BD40(v7, data1);
  }
  while ( RecommendSupportData_RecommendDeckData__Compare(
            (RecommendSupportData_RecommendDeckData_o *)v7,
            data2->m_Items[v8],
            0) );
  return v8 >= RecommendSupportMemberMax;
}


void RecommendSupportSelectListViewMenu__Init(RecommendSupportSelectListViewMenu_o *this, const MethodInfo *method)
{
  void *titleInfoControl; // x0
  UILabel_o *infoMessageLabel; // x20
  UISprite_o *symbolSprite; // x20
  RecommendSupportData_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  RecommendSupportData_o *orgData; // x20
  const MethodInfo *v14; // x2
  struct UIPanel_o *blackMask; // x8
  const MethodInfo *v16; // x2

  if ( (byte_4CEA46A & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&RecommendSupportData_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C7BAE8(&StringLiteral_11107/*"RECOMMEND_SUPPORT_SERVANT_SELECT_EXPLANATION"*/);
    sub_1C7BAE8(&StringLiteral_19775/*"formation_symbol"*/);
    byte_4CEA46A = 1;
  }
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_15;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)titleInfoControl, 0, 1, 0, 94, 1, 0);
  infoMessageLabel = this->fields.infoMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleInfoControl = LocalizationManager__Get((System_String_o *)StringLiteral_11107/*"RECOMMEND_SUPPORT_SERVANT_SELECT_EXPLANATION"*/, 0);
  if ( !infoMessageLabel )
    goto LABEL_15;
  UILabel__set_text(infoMessageLabel, (System_String_o *)titleInfoControl, 0);
  symbolSprite = this->fields.symbolSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(symbolSprite, (System_String_o *)StringLiteral_19775/*"formation_symbol"*/, 0);
  v6 = (RecommendSupportData_o *)sub_1C7BD34(RecommendSupportData_TypeInfo);
  RecommendSupportData___ctor(v6, 0);
  this->fields.orgData = v6;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.orgData, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  orgData = this->fields.orgData;
  titleInfoControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfoControl
    || !orgData
    || (RecommendSupportData__CopyData(orgData, *((RecommendSupportData_o **)titleInfoControl + 14), 1, 0),
        (blackMask = this->fields.blackMask) == 0)
    || (titleInfoControl = this->fields.listViewManager) == 0
    || (RecommendSupportListViewManager__CreateList(
          (RecommendSupportListViewManager_o *)titleInfoControl,
          blackMask->fields.mDepth,
          v14),
        RecommendSupportSelectListViewMenu__SetEditUI(this, 0, v16),
        (titleInfoControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0) )
  {
LABEL_15:
    sub_1C7BD40(titleInfoControl, method);
  }
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)titleInfoControl, 0);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


bool RecommendSupportSelectListViewMenu__IsFinallyUpdate(
        RecommendSupportSelectListViewMenu_o *this,
        RecommendSupportData_RecommendDeckData_array **changedDeckData,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  Il2CppClass *klass; // x8
  struct RecommendSupportData_o *orgData; // x9
  RecommendSupportData_RecommendDeckData_array *name; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  bool v17; // w21
  RecommendSupportData_o *v18; // x19

  if ( (byte_4CEA471 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA471 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  klass = Instance[7].klass;
  if ( !klass )
    goto LABEL_12;
  orgData = this->fields.orgData;
  if ( !orgData )
    goto LABEL_12;
  name = (RecommendSupportData_RecommendDeckData_array *)klass->_1.name;
  v17 = RecommendSupportSelectListViewMenu__CompareDeckData(
          (RecommendSupportSelectListViewMenu_o *)Instance,
          name,
          orgData->fields.deckData,
          v7);
  if ( !v17 )
  {
    *changedDeckData = name;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)changedDeckData, (int32_t)name, v11, v12, v13, v14, v15, v16);
    v18 = this->fields.orgData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance && v18 )
    {
      RecommendSupportData__CopyData(v18, (RecommendSupportData_o *)Instance[7].klass, 0, 0);
      return !v17;
    }
LABEL_12:
    sub_1C7BD40(Instance, v6);
  }
  *changedDeckData = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)changedDeckData, 0, v11, v12, v13, v14, v15, v16);
  return !v17;
}


bool RecommendSupportSelectListViewMenu__IsUpdate(RecommendSupportSelectListViewMenu_o *this, const MethodInfo *method)
{
  RecommendSupportSelectListViewMenu_o *Instance; // x0
  __int64 v3; // x1
  struct UISkinSprite_o *backSkinSprite; // x8
  System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *m_CachedPtr; // x19
  const MethodInfo *v6; // x4
  struct UISkinSprite_o *v7; // x8
  System_Int32_array *diffDeckDataIndex; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CEA470 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA470 = 1;
  }
  diffDeckDataIndex = 0;
  Instance = (RecommendSupportSelectListViewMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (backSkinSprite = Instance->fields.backSkinSprite) == 0
    || (m_CachedPtr = (System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *)backSkinSprite->fields.m_CachedPtr,
        (Instance = (RecommendSupportSelectListViewMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || (v7 = Instance->fields.backSkinSprite) == 0 )
  {
    sub_1C7BD40(Instance, v3);
  }
  return !RecommendSupportSelectListViewMenu__CompareAllDeckData(
            Instance,
            m_CachedPtr,
            (System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *)v7->fields.m_CancellationTokenSource,
            &diffDeckDataIndex,
            v6);
}


void RecommendSupportSelectListViewMenu__OnClickBack(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  RecommendSupportSelectControl_o *Instance; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *v7; // x20
  RecommendSupportSelectControl_DialogResultCallBack_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4CEA475 & 1) == 0 )
  {
    sub_1C7BAE8(&RecommendSupportSelectControl_DialogResultCallBack_TypeInfo);
    sub_1C7BAE8(&Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___);
    sub_1C7BAE8(&Method_RecommendSupportSelectListViewMenu_OnClickBack__);
    sub_1C7BAE8(&Method_RecommendSupportSelectListViewMenu__OnClickBack_b__26_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    byte_4CEA475 = 1;
  }
  v3 = Method_RecommendSupportSelectListViewMenu_OnClickBack__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_RecommendSupportSelectListViewMenu_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( Instance->fields._IsEdit_k__BackingField && RecommendSupportSelectListViewMenu__IsUpdate(this, v6) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    v8 = (RecommendSupportSelectControl_DialogResultCallBack_o *)sub_1C7BD34(RecommendSupportSelectControl_DialogResultCallBack_TypeInfo);
    RecommendSupportSelectControl_DialogResultCallBack___ctor(
      v8,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectListViewMenu__OnClickBack_b__26_0__,
      v9);
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance && v7 )
    {
      RecommendSupportSelectControl__OpenDialog_object_(
        (RecommendSupportSelectControl_o *)v7,
        v8,
        Instance->fields._SelectIndex_k__BackingField,
        (const MethodInfo_3209BA0 *)Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___);
      return;
    }
LABEL_13:
    sub_1C7BD40(Instance, v6);
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  RecommendSupportSelectControl__ReturnScene(Instance, (System_String_o *)StringLiteral_22590/*"ok"*/, v10);
}


void RecommendSupportSelectListViewMenu__OnClickCancel(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *v8; // x20
  RecommendSupportSelectControl_DialogResultCallBack_o *v9; // x21
  const MethodInfo *v10; // x3

  if ( (byte_4CEA477 & 1) == 0 )
  {
    sub_1C7BAE8(&RecommendSupportSelectControl_DialogResultCallBack_TypeInfo);
    sub_1C7BAE8(&Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___);
    sub_1C7BAE8(&Method_RecommendSupportSelectListViewMenu_OnClickCancel__);
    sub_1C7BAE8(&Method_RecommendSupportSelectListViewMenu__OnClickCancel_b__28_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA477 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  if ( BYTE4(Instance[7].monitor) )
  {
    v5 = Method_RecommendSupportSelectListViewMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C7BB00(Method_RecommendSupportSelectListViewMenu_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
    if ( RecommendSupportSelectListViewMenu__IsUpdate(this, v7) )
    {
      v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      v9 = (RecommendSupportSelectControl_DialogResultCallBack_o *)sub_1C7BD34(RecommendSupportSelectControl_DialogResultCallBack_TypeInfo);
      RecommendSupportSelectControl_DialogResultCallBack___ctor(
        v9,
        (Il2CppObject *)this,
        Method_RecommendSupportSelectListViewMenu__OnClickCancel_b__28_0__,
        v10);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance && v8 )
      {
        RecommendSupportSelectControl__OpenDialog_object_(
          (RecommendSupportSelectControl_o *)v8,
          v9,
          (int32_t)Instance[7].monitor,
          (const MethodInfo_3209BA0 *)Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___);
        return;
      }
LABEL_12:
      sub_1C7BD40(Instance, v4);
    }
  }
}


void RecommendSupportSelectListViewMenu__OnClickDecide(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4CEA476 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_RecommendSupportSelectListViewMenu_OnClickDecide__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    byte_4CEA476 = 1;
  }
  v3 = Method_RecommendSupportSelectListViewMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_RecommendSupportSelectListViewMenu_OnClickDecide__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  if ( BYTE4(Instance[7].monitor) )
  {
    RecommendSupportSelectListViewMenu__SaveTemp((RecommendSupportSelectListViewMenu_o *)Instance, v6);
    RecommendSupportSelectListViewMenu__RequestApi(this, v7);
    RecommendSupportSelectListViewMenu__Redisplay(this, -1, v8);
    RecommendSupportSelectListViewMenu__SetEditUI(this, 0, v9);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1C7BD40(Instance, v6);
  RecommendSupportSelectControl__ReturnScene(
    (RecommendSupportSelectControl_o *)Instance,
    (System_String_o *)StringLiteral_22590/*"ok"*/,
    v10);
}


void RecommendSupportSelectListViewMenu__OnClickHelp(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4CEA478 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_RecommendSupportSelectListViewMenu_OnClickHelp__);
    byte_4CEA478 = 1;
  }
  v2 = Method_RecommendSupportSelectListViewMenu_OnClickHelp__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C7BB00(Method_RecommendSupportSelectListViewMenu_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, 92, 0, 0, 0);
}


void RecommendSupportSelectListViewMenu__Open(RecommendSupportSelectListViewMenu_o *this, const MethodInfo *method)
{
  void *titleInfoControl; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  if ( (byte_4CEA46B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA46B = 1;
  }
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_10;
  titleInfoControl = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfoControl, 0);
  if ( !titleInfoControl )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, 1, 0);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__changeTitleInfo((TitleInfoControl_o *)titleInfoControl, 2, 94, 0),
        (titleInfoControl = this->fields.backSkinSprite) == 0)
    || (titleInfoControl = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfoControl, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, 1, 0),
        RecommendSupportSelectListViewMenu__SetupFooterButtons(this, 1, v4),
        (titleInfoControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0) )
  {
LABEL_10:
    sub_1C7BD40(titleInfoControl, method);
  }
  RecommendSupportSelectListViewMenu__Redisplay(this, *((_DWORD *)titleInfoControl + 30), v5);
  BaseMenu__Open((BaseMenu_o *)this, 0, 0);
}


void RecommendSupportSelectListViewMenu__Redisplay(
        RecommendSupportSelectListViewMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4CEA46C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA46C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
        (gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || (RecommendSupportSelectListViewMenu__SetEditUI(this, *((_BYTE *)gameObject + 124), v7),
        (gameObject = this->fields.listViewManager) == 0) )
  {
    sub_1C7BD40(gameObject, v6);
  }
  RecommendSupportListViewManager__SetItem((RecommendSupportListViewManager_o *)gameObject, index, v8);
}


void RecommendSupportSelectListViewMenu__RedisplaySub(
        RecommendSupportSelectListViewMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportListViewManager_o *listViewManager; // x0

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C7BD40(0, index);
  RecommendSupportListViewManager__SetItemSub(listViewManager, index, method);
}


void RecommendSupportSelectListViewMenu__RequestApi(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  RecommendSupportSelectListViewMenu___c_c *v6; // x0
  NetworkManager_ResultCallbackFunc_o *_9__18_0; // x19
  Il2CppObject *v8; // x20
  struct RecommendSupportSelectListViewMenu___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  RecommendSupportData_RecommendDeckData_array *changedDeckData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEA46D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NetworkManager_getRequest_FollowerRecommendSupportSetupRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_RecommendSupportSelectListViewMenu___c__RequestApi_b__18_0__);
    sub_1C7BAE8(&RecommendSupportSelectListViewMenu___c_TypeInfo);
    byte_4CEA46D = 1;
  }
  changedDeckData = 0;
  if ( RecommendSupportSelectListViewMenu__IsFinallyUpdate(this, &changedDeckData, v2) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
    v6 = RecommendSupportSelectListViewMenu___c_TypeInfo;
    if ( !RecommendSupportSelectListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewMenu___c_TypeInfo);
      v6 = RecommendSupportSelectListViewMenu___c_TypeInfo;
    }
    _9__18_0 = v6->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = RecommendSupportSelectListViewMenu___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__18_0 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        _9__18_0,
        v8,
        Method_RecommendSupportSelectListViewMenu___c__RequestApi_b__18_0__,
        0);
      static_fields = RecommendSupportSelectListViewMenu___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = _9__18_0;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__18_0,
        (int32_t)_9__18_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getRequest_object_(
                 _9__18_0,
                 (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_FollowerRecommendSupportSetupRequest___);
    if ( !Instance )
LABEL_16:
      sub_1C7BD40(Instance, v5);
    FollowerRecommendSupportSetupRequest__beginRequest(
      (FollowerRecommendSupportSetupRequest_o *)Instance,
      changedDeckData,
      0);
  }
}


void RecommendSupportSelectListViewMenu__SaveTemp(RecommendSupportSelectListViewMenu_o *this, const MethodInfo *method)
{
  RecommendSupportData_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CEA46E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA46E = 1;
  }
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance || (Instance = (RecommendSupportData_o *)Instance[1].fields._EventSetupInfo_k__BackingField) == 0 )
    sub_1C7BD40(Instance, v3);
  RecommendSupportData__DecisionDeckData(Instance, 0);
}


void RecommendSupportSelectListViewMenu__SetEditUI(
        RecommendSupportSelectListViewMenu_o *this,
        bool editOn,
        const MethodInfo *method)
{
  UnityEngine_Component_o *Instance; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x19

  if ( (byte_4CEA474 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA474 = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  BYTE4(Instance[5].klass) = editOn;
  if ( !RecommendSupportSelectListViewMenu__IsUpdate(this, v6) )
  {
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    BYTE4(Instance[5].klass) = 0;
  }
  Instance = (UnityEngine_Component_o *)this->fields.blackMask;
  if ( !Instance )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(Instance, 0);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, BYTE4(Instance[5].klass), 0);
  Instance = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !Instance
    || (v8 = UnityEngine_Component__get_gameObject(Instance, 0),
        (Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || !v8
    || (UnityEngine_GameObject__SetActive(v8, BYTE4(Instance[5].klass) == 0, 0),
        (Instance = (UnityEngine_Component_o *)this->fields.cancelButton) == 0)
    || (v9 = UnityEngine_Component__get_gameObject(Instance, 0),
        (Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || !v9 )
  {
LABEL_17:
    sub_1C7BD40(Instance, v6);
  }
  UnityEngine_GameObject__SetActive(v9, BYTE4(Instance[5].klass), 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportSelectListViewMenu__SetupFooterButtons(
        RecommendSupportSelectListViewMenu_o *this,
        bool isEditing,
        const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, isEditing, 0),
        (helpButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0)
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0 )
  {
    sub_1C7BD40(helpButton, isEditing);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, isEditing, 0);
}


void RecommendSupportSelectListViewMenu__UndoTemp(RecommendSupportSelectListViewMenu_o *this, const MethodInfo *method)
{
  RecommendSupportData_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CEA46F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA46F = 1;
  }
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance || (Instance = (RecommendSupportData_o *)Instance[1].fields._EventSetupInfo_k__BackingField) == 0 )
    sub_1C7BD40(Instance, v3);
  RecommendSupportData__CancelDeckData(Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportSelectListViewMenu___OnClickBack_b__26_0(
        RecommendSupportSelectListViewMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  if ( result == 1 )
  {
    RecommendSupportSelectListViewMenu__UndoTemp(this, *(const MethodInfo **)&result);
    RecommendSupportSelectListViewMenu__Redisplay(this, -1, v4);
    RecommendSupportSelectListViewMenu__SetEditUI(this, 0, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportSelectListViewMenu___OnClickCancel_b__28_0(
        RecommendSupportSelectListViewMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  if ( result == 1 )
  {
    RecommendSupportSelectListViewMenu__UndoTemp(this, *(const MethodInfo **)&result);
    RecommendSupportSelectListViewMenu__Redisplay(this, -1, v4);
    RecommendSupportSelectListViewMenu__SetEditUI(this, 0, v5);
  }
}


void RecommendSupportSelectListViewMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEA47A & 1) == 0 )
  {
    sub_1C7BAE8(&RecommendSupportSelectListViewMenu___c_TypeInfo);
    byte_4CEA47A = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(RecommendSupportSelectListViewMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportSelectListViewMenu___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectListViewMenu___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)RecommendSupportSelectListViewMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportSelectListViewMenu___c___ctor(
        RecommendSupportSelectListViewMenu___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportSelectListViewMenu___c___RequestApi_b__18_0(
        RecommendSupportSelectListViewMenu___c_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  ;
}