void __fastcall RecommendSupportSelectListViewMenu___ctor(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F8780 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F8780 = 1;
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
  unsigned int i; // w23
  BalanceConfig_c *v16; // x0
  System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c *v21; // x8
  RecommendSupportData_RecommendDeckData_o *v22; // x24
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_Int32_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_49F8779 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, data1);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_49F8779 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    data1,
                                                    data2);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  for ( i = 0; ; ++i )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v16->static_fields->RecommendSupportMemberMax )
      break;
    if ( !data1 )
      goto LABEL_31;
    klass = data1->klass;
    v18 = *(unsigned __int16 *)(&data1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&data1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BB60A8(
                   data1,
                   System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo,
                   0LL);
    }
    v16 = (BalanceConfig_c *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *, _QWORD, _QWORD))p_method)(
                               data1,
                               i,
                               *(_QWORD *)(p_method + 8));
    if ( !data2 )
      goto LABEL_31;
    v21 = data2->klass;
    v22 = (RecommendSupportData_RecommendDeckData_o *)v16;
    v23 = *(unsigned __int16 *)(&data2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&data2->klass->_2.bitflags2 + 3) )
    {
      v24 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__c **)v24 - 1) != System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_19;
      }
      v25 = (__int64)&v21->vtable[*v24].method;
    }
    else
    {
LABEL_19:
      v25 = sub_1BB60A8(
              data2,
              System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__TypeInfo,
              0LL);
    }
    v16 = (BalanceConfig_c *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *, _QWORD, _QWORD))v25)(
                               data2,
                               i,
                               *(_QWORD *)(v25 + 8));
    if ( !v22 )
      goto LABEL_31;
    v16 = (BalanceConfig_c *)RecommendSupportData_RecommendDeckData__Compare(
                               v22,
                               (RecommendSupportData_RecommendDeckData_o *)v16,
                               0LL);
    if ( ((unsigned __int8)v16 & 1) == 0 )
    {
      if ( !v14 )
        goto LABEL_31;
      items = v14->fields._items;
      v27 = Method_System_Collections_Generic_List_int__Add__;
      ++v14->fields._version;
      if ( !items )
        goto LABEL_31;
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v14,
          i,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
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
    sub_1B64324(v16);
  v29 = System_Collections_Generic_List_int___ToArray(
          v14,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  *diffDeckDataIndex = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)diffDeckDataIndex, (int32_t)v29, v30, v31);
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

  if ( (byte_49F877A & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, data1);
    byte_49F877A = 1;
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
      sub_1B6432C(v7, data1);
    v7 = (BalanceConfig_c *)data1->m_Items[v8];
    if ( !v7 )
LABEL_14:
      sub_1B64324(v7);
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
  __int64 v12; // x1
  __int64 v13; // x2
  RecommendSupportData_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  RecommendSupportData_o *orgData; // x20
  const MethodInfo *v18; // x2
  struct UIPanel_o *blackMask; // x8
  const MethodInfo *v20; // x2

  if ( (byte_49F8771 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&RecommendSupportData_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_10986/*"RECOMMEND_SUPPORT_SERVANT_SELECT_EXPLANATION"*/, v7);
    sub_1B640C8(&StringLiteral_19505/*"formation_symbol"*/, v8);
    byte_49F8771 = 1;
  }
  titleInfoControl = this->fields.titleInfoControl;
  if ( !titleInfoControl )
    goto LABEL_15;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)titleInfoControl, 0LL, 1, 0LL, 90, 0LL);
  infoMessageLabel = this->fields.infoMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleInfoControl = LocalizationManager__Get((System_String_o *)StringLiteral_10986/*"RECOMMEND_SUPPORT_SERVANT_SELECT_EXPLANATION"*/, 0LL);
  if ( !infoMessageLabel )
    goto LABEL_15;
  UILabel__set_text(infoMessageLabel, (System_String_o *)titleInfoControl, 0LL);
  symbolSprite = this->fields.symbolSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(symbolSprite, (System_String_o *)StringLiteral_19505/*"formation_symbol"*/, 0LL);
  v14 = (RecommendSupportData_o *)sub_1B64314(RecommendSupportData_TypeInfo, v12, v13);
  RecommendSupportData___ctor(v14, 0LL);
  this->fields.orgData = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.orgData, (int32_t)v14, v15, v16);
  orgData = this->fields.orgData;
  titleInfoControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfoControl
    || !orgData
    || (RecommendSupportData__CopyData(orgData, *((RecommendSupportData_o **)titleInfoControl + 14), 1, 0LL),
        (blackMask = this->fields.blackMask) == 0LL)
    || (titleInfoControl = this->fields.listViewManager) == 0LL
    || (RecommendSupportListViewManager__CreateList(
          (RecommendSupportListViewManager_o *)titleInfoControl,
          blackMask->fields.mDepth,
          v18),
        RecommendSupportSelectListViewMenu__SetEditUI(this, 0, v20),
        (titleInfoControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_1B64324(titleInfoControl);
  }
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)titleInfoControl, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RecommendSupportSelectListViewMenu__IsFinallyUpdate(
        RecommendSupportSelectListViewMenu_o *this,
        int32_t index,
        RecommendSupportData_RecommendDeckData_array **changedDeckData,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewMenu_o *Instance; // x0
  const MethodInfo *v7; // x3
  struct UISprite_o *symbolSprite; // x8
  struct RecommendSupportData_o *orgData; // x9
  RecommendSupportData_RecommendDeckData_array *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  bool v13; // w21
  RecommendSupportData_RecommendDeckData_array *v14; // x1

  if ( (byte_49F8778 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, *(_QWORD *)&index);
    byte_49F8778 = 1;
  }
  Instance = (RecommendSupportSelectListViewMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance || (symbolSprite = Instance->fields.symbolSprite) == 0LL || (orgData = this->fields.orgData) == 0LL )
    sub_1B64324(Instance);
  v10 = *(RecommendSupportData_RecommendDeckData_array **)&symbolSprite->fields.m_CachedPtr;
  v13 = RecommendSupportSelectListViewMenu__CompareDeckData(Instance, v10, orgData->fields.deckData, v7);
  if ( v13 )
    v14 = 0LL;
  else
    v14 = v10;
  *changedDeckData = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)changedDeckData, (int32_t)v14, v11, v12);
  return !v13;
}


bool __fastcall RecommendSupportSelectListViewMenu__IsUpdate(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewMenu_o *Instance; // x0
  struct UISprite_o *symbolSprite; // x8
  System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *v4; // x19
  const MethodInfo *v5; // x4
  struct UISprite_o *v6; // x8
  System_Int32_array *diffDeckDataIndex; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49F8777 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, method);
    byte_49F8777 = 1;
  }
  diffDeckDataIndex = 0LL;
  Instance = (RecommendSupportSelectListViewMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (symbolSprite = Instance->fields.symbolSprite) == 0LL
    || (v4 = *(System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o **)&symbolSprite->fields.m_CachedPtr,
        (Instance = (RecommendSupportSelectListViewMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (v6 = Instance->fields.symbolSprite) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return !RecommendSupportSelectListViewMenu__CompareAllDeckData(
            Instance,
            v4,
            (System_Collections_Generic_IReadOnlyList_RecommendSupportData_RecommendDeckData__o *)v6->fields.m_CancellationTokenSource,
            &diffDeckDataIndex,
            v5);
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
  __int64 v13; // x1
  __int64 v14; // x2
  RecommendSupportSelectControl_DialogResultCallBack_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_49F877C & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportSelectControl_DialogResultCallBack_TypeInfo, method);
    sub_1B640C8(&Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___, v3);
    sub_1B640C8(&Method_RecommendSupportSelectListViewMenu_OnClickBack__, v4);
    sub_1B640C8(&Method_RecommendSupportSelectListViewMenu__OnClickBack_b__26_0__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v7);
    byte_49F877C = 1;
  }
  v8 = Method_RecommendSupportSelectListViewMenu_OnClickBack__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickBack__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B640E0(Method_RecommendSupportSelectListViewMenu_OnClickBack__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( Instance->fields._IsEdit_k__BackingField && RecommendSupportSelectListViewMenu__IsUpdate(this, v11) )
  {
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    v15 = (RecommendSupportSelectControl_DialogResultCallBack_o *)sub_1B64314(
                                                                    RecommendSupportSelectControl_DialogResultCallBack_TypeInfo,
                                                                    v13,
                                                                    v14);
    RecommendSupportSelectControl_DialogResultCallBack___ctor(
      v15,
      (Il2CppObject *)this,
      Method_RecommendSupportSelectListViewMenu__OnClickBack_b__26_0__,
      v16);
    Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance && v12 )
    {
      RecommendSupportSelectControl__OpenDialog_object_(
        (RecommendSupportSelectControl_o *)v12,
        v15,
        Instance->fields._SelectIndex_k__BackingField,
        (const MethodInfo_2EC9AE8 *)Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___);
      return;
    }
LABEL_13:
    sub_1B64324(Instance);
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  RecommendSupportSelectControl__ReturnScene(Instance, (System_String_o *)StringLiteral_22137/*"ok"*/, v17);
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  RecommendSupportSelectControl_DialogResultCallBack_o *v14; // x21
  const MethodInfo *v15; // x3

  if ( (byte_49F877E & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportSelectControl_DialogResultCallBack_TypeInfo, method);
    sub_1B640C8(&Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___, v3);
    sub_1B640C8(&Method_RecommendSupportSelectListViewMenu_OnClickCancel__, v4);
    sub_1B640C8(&Method_RecommendSupportSelectListViewMenu__OnClickCancel_b__28_0__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    byte_49F877E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  if ( BYTE4(Instance[7].monitor) )
  {
    v8 = Method_RecommendSupportSelectListViewMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickCancel__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B640E0(Method_RecommendSupportSelectListViewMenu_OnClickCancel__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    if ( RecommendSupportSelectListViewMenu__IsUpdate(this, v10) )
    {
      v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      v14 = (RecommendSupportSelectControl_DialogResultCallBack_o *)sub_1B64314(
                                                                      RecommendSupportSelectControl_DialogResultCallBack_TypeInfo,
                                                                      v12,
                                                                      v13);
      RecommendSupportSelectControl_DialogResultCallBack___ctor(
        v14,
        (Il2CppObject *)this,
        Method_RecommendSupportSelectListViewMenu__OnClickCancel_b__28_0__,
        v15);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance && v11 )
      {
        RecommendSupportSelectControl__OpenDialog_object_(
          (RecommendSupportSelectControl_o *)v11,
          v14,
          (int32_t)Instance[7].monitor,
          (const MethodInfo_2EC9AE8 *)Method_RecommendSupportSelectControl_OpenDialog_RecommendSupportCancelConfirmDialog___);
        return;
      }
LABEL_12:
      sub_1B64324(Instance);
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
  const MethodInfo *v12; // x2

  if ( (byte_49F877D & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportSelectListViewMenu_OnClickDecide__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v4);
    byte_49F877D = 1;
  }
  v5 = Method_RecommendSupportSelectListViewMenu_OnClickDecide__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_RecommendSupportSelectListViewMenu_OnClickDecide__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1B64324(Instance);
  RecommendSupportSelectControl__ReturnScene(
    (RecommendSupportSelectControl_o *)Instance,
    (System_String_o *)StringLiteral_22137/*"ok"*/,
    v12);
}


void __fastcall RecommendSupportSelectListViewMenu__OnClickHelp(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_49F877F & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportSelectListViewMenu_OnClickHelp__, method);
    byte_49F877F = 1;
  }
  v2 = Method_RecommendSupportSelectListViewMenu_OnClickHelp__;
  if ( (*((_BYTE *)Method_RecommendSupportSelectListViewMenu_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B640E0(Method_RecommendSupportSelectListViewMenu_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B640AC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(0, 92, 0LL, 0LL);
}


void __fastcall RecommendSupportSelectListViewMenu__Open(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  void *titleInfoControl; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  if ( (byte_49F8772 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, method);
    byte_49F8772 = 1;
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
    || (TitleInfoControl__changeTitleInfo((TitleInfoControl_o *)titleInfoControl, 2, 90, 0LL),
        (titleInfoControl = this->fields.backSkinSprite) == 0LL)
    || (titleInfoControl = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfoControl, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfoControl, 1, 0LL),
        RecommendSupportSelectListViewMenu__SetupFooterButtons(this, 1, v4),
        (titleInfoControl = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1B64324(titleInfoControl);
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
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_49F8773 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, *(_QWORD *)&index);
    byte_49F8773 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (RecommendSupportSelectListViewMenu__SetEditUI(this, *((_BYTE *)gameObject + 124), v6),
        (gameObject = this->fields.listViewManager) == 0LL) )
  {
    sub_1B64324(gameObject);
  }
  RecommendSupportListViewManager__SetItem((RecommendSupportListViewManager_o *)gameObject, index, v7);
}


void __fastcall RecommendSupportSelectListViewMenu__RedisplaySub(
        RecommendSupportSelectListViewMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportListViewManager_o *listViewManager; // x0

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1B64324(0LL);
  RecommendSupportListViewManager__SetItemSub(listViewManager, index, method);
}


void __fastcall RecommendSupportSelectListViewMenu__RequestApi(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  __int64 v13; // x2
  RecommendSupportSelectListViewMenu___c_c *v14; // x0
  NetworkManager_ResultCallbackFunc_o *_9__18_0; // x19
  Il2CppObject *v16; // x20
  struct RecommendSupportSelectListViewMenu___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  RecommendSupportData_RecommendDeckData_array *changedDeckData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F8774 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_FollowerRecommendSupportSetupRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    sub_1B640C8(&Method_RecommendSupportSelectListViewMenu___c__RequestApi_b__18_0__, v7);
    sub_1B640C8(&RecommendSupportSelectListViewMenu___c_TypeInfo, v8);
    byte_49F8774 = 1;
  }
  changedDeckData = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !RecommendSupportSelectListViewMenu__IsFinallyUpdate(this, v10, &changedDeckData, v11) )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v14 = RecommendSupportSelectListViewMenu___c_TypeInfo;
  if ( !RecommendSupportSelectListViewMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportSelectListViewMenu___c_TypeInfo);
    v14 = RecommendSupportSelectListViewMenu___c_TypeInfo;
  }
  _9__18_0 = v14->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = RecommendSupportSelectListViewMenu___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__18_0 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__18_0,
      v16,
      Method_RecommendSupportSelectListViewMenu___c__RequestApi_b__18_0__,
      0LL);
    static_fields = RecommendSupportSelectListViewMenu___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = _9__18_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v18, v19);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               _9__18_0,
               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FollowerRecommendSupportSetupRequest___);
  if ( !Instance )
LABEL_17:
    sub_1B64324(Instance);
  FollowerRecommendSupportSetupRequest__beginRequest(
    (FollowerRecommendSupportSetupRequest_o *)Instance,
    changedDeckData,
    0LL);
}


void __fastcall RecommendSupportSelectListViewMenu__SaveTemp(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *Instance; // x0

  if ( (byte_49F8775 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, method);
    byte_49F8775 = 1;
  }
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance || (Instance = (RecommendSupportData_o *)Instance[1].fields._EventSetupInfo_k__BackingField) == 0LL )
    sub_1B64324(Instance);
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

  if ( (byte_49F877B & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, editOn);
    byte_49F877B = 1;
  }
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  BYTE4(Instance[5].klass) = editOn;
  if ( !RecommendSupportSelectListViewMenu__IsUpdate(this, v6) )
  {
    Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    BYTE4(Instance[5].klass) = 0;
  }
  Instance = (UnityEngine_Component_o *)this->fields.blackMask;
  if ( !Instance )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(Instance, 0LL);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, BYTE4(Instance[5].klass), 0LL);
  Instance = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !Instance
    || (v8 = UnityEngine_Component__get_gameObject(Instance, 0LL),
        (Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !v8
    || (UnityEngine_GameObject__SetActive(v8, BYTE4(Instance[5].klass) == 0, 0LL),
        (Instance = (UnityEngine_Component_o *)this->fields.cancelButton) == 0LL)
    || (v9 = UnityEngine_Component__get_gameObject(Instance, 0LL),
        (Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !v9 )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  UnityEngine_GameObject__SetActive(v9, BYTE4(Instance[5].klass), 0LL);
}


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
    sub_1B64324(helpButton);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, isEditing, 0LL);
}


void __fastcall RecommendSupportSelectListViewMenu__UndoTemp(
        RecommendSupportSelectListViewMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportData_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49F8776 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, method);
    byte_49F8776 = 1;
  }
  Instance = (RecommendSupportData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance || (Instance = (RecommendSupportData_o *)Instance[1].fields._EventSetupInfo_k__BackingField) == 0LL )
    sub_1B64324(Instance);
  RecommendSupportData__CancelDeckData(Instance, 0LL);
  RecommendSupportSelectListViewMenu__Redisplay(this, -1, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewMenu___OnClickBack_b__26_0(
        RecommendSupportSelectListViewMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( result == 1 )
  {
    RecommendSupportSelectListViewMenu__UndoTemp(this, *(const MethodInfo **)&result);
    RecommendSupportSelectListViewMenu__SetEditUI(this, 0, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportSelectListViewMenu___OnClickCancel_b__28_0(
        RecommendSupportSelectListViewMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( result == 1 )
  {
    RecommendSupportSelectListViewMenu__UndoTemp(this, *(const MethodInfo **)&result);
    RecommendSupportSelectListViewMenu__SetEditUI(this, 0, v4);
  }
}


void __fastcall RecommendSupportSelectListViewMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8781 & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportSelectListViewMenu___c_TypeInfo, v1);
    byte_49F8781 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RecommendSupportSelectListViewMenu___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RecommendSupportSelectListViewMenu___c_TypeInfo->static_fields->__9 = (struct RecommendSupportSelectListViewMenu___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RecommendSupportSelectListViewMenu___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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