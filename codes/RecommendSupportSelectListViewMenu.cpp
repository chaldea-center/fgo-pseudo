void __fastcall RecommendSupportSelectListViewMenu___ctor(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB08A1 & 1) == 0 )
  {
    sub_1C13D24(&BaseMenu_TypeInfo, method);
    byte_4BB08A1 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportSelectListViewMenu__Awake(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall RecommendSupportSelectListViewMenu__CompareAllDeckData(
        RecommendSupportSelectListViewMenu_o *this,
        System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *data1,
        System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *data2,
        System_Int32_array **diffDeckDataIndex,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x22
  __int64 v15; // x1
  unsigned int i; // w23
  BalanceConfig_c *v17; // x0
  System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c *v22; // x8
  RecommendSupportData_RecommendDeckData_o *v23; // x24
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  System_Int32_array *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4BB089A & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, data1);
    sub_1C13D24(&System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4BB089A = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0; ; ++i )
  {
    v17 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v17->static_fields->RecommendSupportMemberMax )
      break;
    if ( !data1 )
      goto LABEL_31;
    klass = data1->klass;
    v19 = *(unsigned __int16 *)(&data1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&data1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C65D04(
                   data1,
                   System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo,
                   0LL);
    }
    v17 = (BalanceConfig_c *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *, _QWORD, _QWORD))p_method)(
                               data1,
                               i,
                               *(_QWORD *)(p_method + 8));
    if ( !data2 )
      goto LABEL_31;
    v22 = data2->klass;
    v23 = (RecommendSupportData_RecommendDeckData_o *)v17;
    v24 = *(unsigned __int16 *)(&data2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&data2->klass->_2.bitflags2 + 3) )
    {
      v25 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c **)v25 - 1) != System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_19;
      }
      v26 = (__int64)&v22->vtable[*v25].method;
    }
    else
    {
LABEL_19:
      v26 = sub_1C65D04(
              data2,
              System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo,
              0LL);
    }
    v17 = (BalanceConfig_c *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *, _QWORD, _QWORD))v26)(
                               data2,
                               i,
                               *(_QWORD *)(v26 + 8));
    if ( !v23 )
      goto LABEL_31;
    v17 = (BalanceConfig_c *)RecommendSupportData_RecommendDeckData__Compare(
                               v23,
                               (RecommendSupportData_RecommendDeckData_o *)v17,
                               0LL);
    if ( ((unsigned __int8)v17 & 1) == 0 )
    {
      if ( !v14 )
        goto LABEL_31;
      items = v14->fields._items;
      v28 = Method_System_Collections_Generic_List_int__Add__;
      ++v14->fields._version;
      if ( !items )
        goto LABEL_31;
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v14,
          i,
          *(const MethodInfo_36101A8 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v14->fields._size = size + 1;
        items->m_Items[size + 1] = i;
      }
    }
  }
  if ( !v14 )
LABEL_31:
    sub_1C13F80(v17, v15);
  v30 = System_Collections_Generic_List_int___ToArray(
          v14,
          (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
  *diffDeckDataIndex = v30;
  sub_1C13CC8((PartyOrganizationUtility_o *)diffDeckDataIndex, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  return v14->fields._size < 1;
}


bool __fastcall RecommendSupportSelectListViewMenu__CompareDeckData(
        RecommendSupportSelectListViewMenu_o *this,
        RecommendSupportData_RecommendDeckData_array *data1,
        RecommendSupportData_RecommendDeckData_array *data2,
        const MethodInfo *method)
{
  int v6; // w22
  BalanceConfig_c *v7; // x0
  il2cpp_array_size_t v8; // w24
  int32_t RecommendSupportMemberMax; // w23

  if ( (byte_4BB089B & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, data1);
    byte_4BB089B = 1;
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
    if ( v8 >= data1->max_length )
      goto LABEL_15;
    if ( !data2 )
      goto LABEL_14;
    if ( ++v6 >= data2->max_length )
LABEL_15:
      sub_1C13F88(v7, data1);
    v7 = (BalanceConfig_c *)data1->m_Items[v8];
    if ( !v7 )
LABEL_14:
      sub_1C13F80(v7, data1);
  }
  while ( RecommendSupportData_RecommendDeckData__Compare(
            (RecommendSupportData_RecommendDeckData_o *)v7,
            data2->m_Items[v8],
            0LL) );
  return (int)v8 >= RecommendSupportMemberMax;
}


void __fastcall RecommendSupportSelectListViewMenu__Init(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *titleInfoControl; // x0
  UILabel_o *infoMessageLabel; // x20
  UISprite_o *symbolSprite; // x20
  RecommendSupportData_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  RecommendSupportData_o *orgData; // x20
  const MethodInfo *v20; // x2
  struct UIPanel_o *blackMask; // x8
  const MethodInfo *v22; // x2

  if ( (byte_4BB0892 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&LocalizationManager_TypeInfo, v3);
    sub_1C13D24(&RecommendSupportData_TypeInfo, v4);
    sub_1C13D24(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    sub_1C13D24(&StringLiteral_11233/*"RECOMMEND_SUPPORT_QUEST_SELECT_RESTRICTION"*/, v7);
    sub_1C13D24(&StringLiteral_19888/*"formation_frame_{0}"*/, v8);
    byte_4BB0892 = 1;
  }
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_15;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)titleInfoControl, 0LL, 1, 0LL, 91, 0LL);
  infoMessageLabel = this->fields.infoMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleInfoControl = LocalizationManager__Get((System_String_o *)StringLiteral_11233/*"RECOMMEND_SUPPORT_QUEST_SELECT_RESTRICTION"*/, 0LL);
  if ( !infoMessageLabel )
    goto LABEL_15;
  UILabel__set_text(infoMessageLabel, (System_String_o *)titleInfoControl, 0LL);
  symbolSprite = this->fields.symbolSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(symbolSprite, (System_String_o *)StringLiteral_19888/*"formation_frame_{0}"*/, 0LL);
  v12 = (RecommendSupportData_o *)sub_1C13F70(RecommendSupportData_TypeInfo);
  RecommendSupportData___ctor(v12, 0LL);
  this->fields.orgData = v12;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.orgData, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  orgData = this->fields.orgData;
  titleInfoControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfoControl
    || !orgData
    || (RecommendSupportData__CopyData(orgData, *((RecommendSupportData_o **)titleInfoControl + 14), 1, 0LL),
        (blackMask = this->fields.blackMask) == 0LL)
    || (titleInfoControl = this->fields.listViewManager) == 0LL
    || (RecommendSupportListViewManager__CreateList(
          (RecommendSupportListViewManager_o *)titleInfoControl,
          blackMask->fields.mDepth,
          v20),
        RecommendSupportSelectListViewMenu__SetEditUI(this, 0, v22),
        (titleInfoControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_1C13F80(titleInfoControl, method);
  }
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)titleInfoControl, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall RecommendSupportSelectListViewMenu__IsFinallyUpdate(
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  bool v17; // w21
  RecommendSupportData_o *v18; // x19

  if ( (byte_4BB0899 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, changedDeckData);
    byte_4BB0899 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
    sub_1C13CC8((PartyOrganizationUtility_o *)changedDeckData, (int64_t)name, v11, v12, v13, v14, v15, v16);
    v18 = this->fields.orgData;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance && v18 )
    {
      RecommendSupportData__CopyData(v18, (RecommendSupportData_o *)Instance[7].klass, 0, 0LL);
      return !v17;
    }
LABEL_12:
    sub_1C13F80(Instance, v6);
  }
  *changedDeckData = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)changedDeckData, 0LL, v11, v12, v13, v14, v15, v16);
  return !v17;
}


bool __fastcall RecommendSupportSelectListViewMenu__IsUpdate(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewMenu_o *Instance; // x0
  __int64 v3; // x1
  struct UISprite_o *symbolSprite; // x8
  System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *v5; // x19
  const MethodInfo *v6; // x4
  struct UISprite_o *v7; // x8
  System_Int32_array *diffDeckDataIndex; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BB0898 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, method);
    byte_4BB0898 = 1;
  }
  diffDeckDataIndex = 0LL;
  Instance = (RecommendSupportSelectListViewMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (symbolSprite = Instance->fields.symbolSprite) == 0LL
    || (v5 = *(System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o **)&symbolSprite->fields.m_CachedPtr,
        (Instance = (RecommendSupportSelectListViewMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (v7 = Instance->fields.symbolSprite) == 0LL )
  {
    sub_1C13F80(Instance, v3);
  }
  return !RecommendSupportSelectListViewMenu__CompareAllDeckData(
            Instance,
            v5,
            (System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *)v7->fields.m_CancellationTokenSource,
            &diffDeckDataIndex,
            v6);
}


void __fastcall RecommendSupportSelectListViewMenu__OnClickBack(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  RecommendSupportSelectControl_o *Instance; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x20
  RecommendSupportSelectControl_DialogResultCallBack_o *v13; // x21

  if ( (byte_4BB089D & 1) == 0 )
  {
    sub_1C13D24(&RecommendSupportSelectControl_DialogResultCallBack_TypeInfo, method);
    sub_1C13D24(&Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___, v3);
    sub_1C13D24(&Method_RecommendSupportSelectListViewMenu_OnClickBack__, v4);
    sub_1C13D24(&Method_RecommendSupportSelectListViewMenu__OnClickBack_b__26_0__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    sub_1C13D24(&StringLiteral_22595/*"offline"*/, v7);
    byte_4BB089D = 1;
  }
  v8 = Method_RecommendSupportSelectListViewMenu_OnClickBack__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickBack__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportSelectListViewMenu_OnClickBack__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C13D08(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0LL);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( Instance->fields._IsEdit_k__BackingField && RecommendSupportSelectListViewMenu__IsUpdate(this, v11) )
  {
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    v13 = (RecommendSupportSelectControl_DialogResultCallBack_o *)sub_1C13F70(RecommendSupportSelectControl_DialogResultCallBack_TypeInfo);
    RecommendSupportSelectControl_DialogResultCallBack___ctor(
      v13,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectListViewMenu__OnClickBack_b__26_0__,
      0LL);
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance && v12 )
    {
      RecommendSupportSelectControl__OpenDialog_object_(
        (RecommendSupportSelectControl_o *)v12,
        v13,
        Instance->fields._SelectIndex_k__BackingField,
        (const MethodInfo_3022018 *)Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___);
      return;
    }
LABEL_13:
    sub_1C13F80(Instance, v11);
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  RecommendSupportSelectControl__ReturnScene(Instance, (System_String_o *)StringLiteral_22595/*"offline"*/, 0LL);
}


void __fastcall RecommendSupportSelectListViewMenu__OnClickCancel(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x20
  RecommendSupportSelectControl_DialogResultCallBack_o *v13; // x21

  if ( (byte_4BB089F & 1) == 0 )
  {
    sub_1C13D24(&RecommendSupportSelectControl_DialogResultCallBack_TypeInfo, method);
    sub_1C13D24(&Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___, v3);
    sub_1C13D24(&Method_RecommendSupportSelectListViewMenu_OnClickCancel__, v4);
    sub_1C13D24(&Method_RecommendSupportSelectListViewMenu__OnClickCancel_b__28_0__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    byte_4BB089F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  if ( BYTE4(Instance[7].monitor) )
  {
    v9 = Method_RecommendSupportSelectListViewMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickCancel__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportSelectListViewMenu_OnClickCancel__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C13D08(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0LL);
    if ( RecommendSupportSelectListViewMenu__IsUpdate(this, v11) )
    {
      v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      v13 = (RecommendSupportSelectControl_DialogResultCallBack_o *)sub_1C13F70(RecommendSupportSelectControl_DialogResultCallBack_TypeInfo);
      RecommendSupportSelectControl_DialogResultCallBack___ctor(
        v13,
        (Il2CppObject *)this,
        Method_RecommendSupportSelectListViewMenu__OnClickCancel_b__28_0__,
        0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance && v12 )
      {
        RecommendSupportSelectControl__OpenDialog_object_(
          (RecommendSupportSelectControl_o *)v12,
          v13,
          (int32_t)Instance[7].monitor,
          (const MethodInfo_3022018 *)Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___);
        return;
      }
LABEL_12:
      sub_1C13F80(Instance, v8);
    }
  }
}


void __fastcall RecommendSupportSelectListViewMenu__OnClickDecide(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4BB089E & 1) == 0 )
  {
    sub_1C13D24(&Method_RecommendSupportSelectListViewMenu_OnClickDecide__, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    sub_1C13D24(&StringLiteral_22595/*"offline"*/, v4);
    byte_4BB089E = 1;
  }
  v5 = Method_RecommendSupportSelectListViewMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportSelectListViewMenu_OnClickDecide__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  if ( BYTE4(Instance[7].monitor) )
  {
    RecommendSupportSelectListViewMenu__SaveTemp((RecommendSupportSelectListViewMenu_o *)Instance, v8);
    RecommendSupportSelectListViewMenu__RequestApi(this, v9);
    RecommendSupportSelectListViewMenu__Redisplay(this, -1, v10);
    RecommendSupportSelectListViewMenu__SetEditUI(this, 0, v11);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1C13F80(Instance, v8);
  RecommendSupportSelectControl__ReturnScene(
    (RecommendSupportSelectControl_o *)Instance,
    (System_String_o *)StringLiteral_22595/*"offline"*/,
    0LL);
}


void __fastcall RecommendSupportSelectListViewMenu__OnClickHelp(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4BB08A0 & 1) == 0 )
  {
    sub_1C13D24(&Method_RecommendSupportSelectListViewMenu_OnClickHelp__, method);
    byte_4BB08A0 = 1;
  }
  v2 = Method_RecommendSupportSelectListViewMenu_OnClickHelp__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C13D3C(Method_RecommendSupportSelectListViewMenu_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C13D08(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, 92, 0LL, 0LL);
}


void __fastcall RecommendSupportSelectListViewMenu__Open(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  void *titleInfoControl; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  if ( (byte_4BB0893 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, method);
    byte_4BB0893 = 1;
  }
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_10;
  titleInfoControl = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfoControl, 0LL);
  if ( !titleInfoControl )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, 1, 0LL);
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl
    || (TitleInfoControl__changeTitleInfo((TitleInfoControl_o *)titleInfoControl, 2, 91, 0LL),
        (titleInfoControl = this->fields.backSkinSprite) == 0LL)
    || (titleInfoControl = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfoControl, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, 1, 0LL),
        RecommendSupportSelectListViewMenu__SetupFooterButtons(this, 1, v4),
        (titleInfoControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1C13F80(titleInfoControl, method);
  }
  RecommendSupportSelectListViewMenu__Redisplay(this, *((_DWORD *)titleInfoControl + 30), v5);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewMenu__Redisplay(
        RecommendSupportSelectListViewMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4BB0894 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, *(_QWORD *)&index);
    byte_4BB0894 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (RecommendSupportSelectListViewMenu__SetEditUI(this, *((_BYTE *)gameObject + 124), v7),
        (gameObject = this->fields.listViewManager) == 0LL) )
  {
    sub_1C13F80(gameObject, v6);
  }
  RecommendSupportListViewManager__SetItem((RecommendSupportListViewManager_o *)gameObject, index, v8);
}


void __fastcall RecommendSupportSelectListViewMenu__RedisplaySub(
        RecommendSupportSelectListViewMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportListViewManager_o *listViewManager; // x0

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C13F80(0LL, index);
  RecommendSupportListViewManager__SetItemSub(listViewManager, index, method);
}


void __fastcall RecommendSupportSelectListViewMenu__RequestApi(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  RecommendSupportSelectListViewMenu___c_c *v11; // x0
  NetworkManager_ResultCallbackFunc_o *_9__18_0; // x19
  Il2CppObject *v13; // x20
  struct RecommendSupportSelectListViewMenu___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  RecommendSupportData_RecommendDeckData_array *changedDeckData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB0895 & 1) == 0 )
  {
    sub_1C13D24(&Method_NetworkManager_getRequest_FollowerRecommendSupportSetupRequest___, method);
    sub_1C13D24(&NetworkManager_TypeInfo, v4);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C13D24(&Method_RecommendSupportSelectListViewMenu___c__RequestApi_b__18_0__, v7);
    sub_1C13D24(&RecommendSupportSelectListViewMenu___c_TypeInfo, v8);
    byte_4BB0895 = 1;
  }
  changedDeckData = 0LL;
  if ( RecommendSupportSelectListViewMenu__IsFinallyUpdate(this, &changedDeckData, v2) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
    v11 = RecommendSupportSelectListViewMenu___c_TypeInfo;
    if ( !RecommendSupportSelectListViewMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewMenu___c_TypeInfo);
      v11 = RecommendSupportSelectListViewMenu___c_TypeInfo;
    }
    _9__18_0 = v11->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = RecommendSupportSelectListViewMenu___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__18_0 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        _9__18_0,
        v13,
        Method_RecommendSupportSelectListViewMenu___c__RequestApi_b__18_0__,
        0LL);
      static_fields = RecommendSupportSelectListViewMenu___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = _9__18_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
        (int64_t)_9__18_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getRequest_object_(
                 _9__18_0,
                 (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_FollowerRecommendSupportSetupRequest___);
    if ( !Instance )
LABEL_16:
      sub_1C13F80(Instance, v10);
    FollowerRecommendSupportSetupRequest__beginRequest(
      (FollowerRecommendSupportSetupRequest_o *)Instance,
      changedDeckData,
      0LL);
  }
}


void __fastcall RecommendSupportSelectListViewMenu__SaveTemp(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BB0896 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, method);
    byte_4BB0896 = 1;
  }
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance || (Instance = (RecommendSupportData_o *)Instance[1].fields._EventSetupInfo_k__BackingField) == 0LL )
    sub_1C13F80(Instance, v3);
  RecommendSupportData__DecisionDeckData(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewMenu__SetEditUI(
        RecommendSupportSelectListViewMenu_o *this,
        bool editOn,
        const MethodInfo *method)
{
  UnityEngine_Component_o *Instance; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x19

  if ( (byte_4BB089C & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, editOn);
    byte_4BB089C = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  BYTE4(Instance[5].klass) = editOn;
  if ( !RecommendSupportSelectListViewMenu__IsUpdate(this, v6) )
  {
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    BYTE4(Instance[5].klass) = 0;
  }
  Instance = (UnityEngine_Component_o *)this->fields.blackMask;
  if ( !Instance )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(Instance, 0LL);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, BYTE4(Instance[5].klass), 0LL);
  Instance = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !Instance
    || (v8 = UnityEngine_Component__get_gameObject(Instance, 0LL),
        (Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !v8
    || (UnityEngine_GameObject__SetActive(v8, BYTE4(Instance[5].klass) == 0, 0LL),
        (Instance = (UnityEngine_Component_o *)this->fields.cancelButton) == 0LL)
    || (v9 = UnityEngine_Component__get_gameObject(Instance, 0LL),
        (Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !v9 )
  {
LABEL_17:
    sub_1C13F80(Instance, v6);
  }
  UnityEngine_GameObject__SetActive(v9, BYTE4(Instance[5].klass), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewMenu__SetupFooterButtons(
        RecommendSupportSelectListViewMenu_o *this,
        bool isEditing,
        const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, isEditing, 0LL),
        (helpButton = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL)
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
  {
    sub_1C13F80(helpButton, isEditing);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, isEditing, 0LL);
}


void __fastcall RecommendSupportSelectListViewMenu__UndoTemp(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BB0897 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, method);
    byte_4BB0897 = 1;
  }
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance || (Instance = (RecommendSupportData_o *)Instance[1].fields._EventSetupInfo_k__BackingField) == 0LL )
    sub_1C13F80(Instance, v3);
  RecommendSupportData__CancelDeckData(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewMenu___OnClickBack_b__26_0(
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
void __fastcall RecommendSupportSelectListViewMenu___OnClickCancel_b__28_0(
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


void __fastcall RecommendSupportSelectListViewMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB08A2 & 1) == 0 )
  {
    sub_1C13D24(&RecommendSupportSelectListViewMenu___c_TypeInfo, v1);
    byte_4BB08A2 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(RecommendSupportSelectListViewMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportSelectListViewMenu___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectListViewMenu___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)RecommendSupportSelectListViewMenu___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall RecommendSupportSelectListViewMenu___c___ctor(
        RecommendSupportSelectListViewMenu___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportSelectListViewMenu___c___RequestApi_b__18_0(
        RecommendSupportSelectListViewMenu___c_o *this,
        System_String_o *_,
        const MethodInfo *method)
{
  ;
}