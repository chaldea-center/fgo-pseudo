void ReturnCombineItemDialog___ctor(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_GameObject__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_593208F & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_593208F = 1;
  }
  v3 = System_Collections_Generic_List_GameObject__TypeInfo;
  *(_QWORD *)&this->fields.ItemIconScale = 0x743F333333LL;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v11, v12);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ReturnCombineItemDialog__ClearItemList(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ReturnCombineItemDialog___c_c *v4; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  struct ReturnCombineItemDialog___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__9_0; // x21
  Il2CppObject *v8; // x22
  struct ReturnCombineItemDialog___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Collections_Generic_List_GameObject__o *v16; // x8
  int32_t size; // w2
  int v18; // w9

  if ( (byte_5932089 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_21FFC50(&Method_ReturnCombineItemDialog___c__ClearItemList_b__9_0__);
    sub_21FFC50(&ReturnCombineItemDialog___c_TypeInfo);
    byte_5932089 = 1;
  }
  v4 = ReturnCombineItemDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&ReturnCombineItemDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ReturnCombineItemDialog___c_TypeInfo, method, v2);
    v4 = ReturnCombineItemDialog___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__9_0 = (System_Action_object__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = ReturnCombineItemDialog___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__9_0, v8, Method_ReturnCombineItemDialog___c__ClearItemList_b__9_0__, 0);
    v9 = ReturnCombineItemDialog___c_TypeInfo->static_fields;
    v9->__9__9_0 = (struct System_Action_GameObject__o *)_9__9_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__9_0, (int32_t)_9__9_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__9_0,
          (const MethodInfo_445054C *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v16 = this->fields.objectList) == 0) )
  {
    sub_21FFECC(v4, method);
  }
  size = v16->fields._size;
  v18 = v16->fields._version + 1;
  v16->fields._size = 0;
  v16->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0);
}


void ReturnCombineItemDialog__Close(
        ReturnCombineItemDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_593208C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ReturnCombineItemDialog_OnCloseEnd__);
    byte_593208C = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ReturnCombineItemDialog_OnCloseEnd__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v10, 0);
}


void ReturnCombineItemDialog__CreateReturnItemList(
        ReturnCombineItemDialog_o *this,
        int64_t qpNum,
        System_Int64_array *svtIds,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x22
  __int64 Entity; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  il2cpp_array_size_t v12; // x8
  il2cpp_array_size_t *p_max_length; // x19
  il2cpp_array_size_t max_length; // t1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  __int64 v16; // x24
  int32_t v17; // w26
  int32_t monitor; // w27
  int64_t v19; // x28
  Il2CppObject *itemIconPrefab; // x25
  UnityEngine_Transform_o *listRoot; // x29
  UnityEngine_GameObject_o *v22; // x25
  UnityEngine_Transform_o *v23; // x29
  ItemIconComponent_o *v24; // x29
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593208A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593208A = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)svtIds, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
    Entity = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !svtIds )
LABEL_37:
      sub_21FFECC(Entity, v10);
    max_length = svtIds->max_length;
    p_max_length = &svtIds->max_length;
    LODWORD(v12) = max_length;
    if ( (__int64)((max_length << 32) + 0x100000000LL) >= 1 )
    {
      v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Entity;
      v16 = 0;
      while ( 1 )
      {
        v17 = v16 ? 1 : 2;
        if ( !v16 )
          break;
        if ( (int)v16 - 1 >= (unsigned int)v12 )
          sub_21FFED4(Entity);
        if ( !v15 )
          goto LABEL_37;
        Entity = (__int64)DataMasterBase_object__object__long___GetEntity(
                            v15,
                            p_max_length[v16],
                            (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Entity )
        {
          Entity = UserServantEntity__getSvtId((UserServantEntity_o *)Entity, 0);
          monitor = Entity;
          v19 = -1;
          if ( (Entity & 0x80000000) == 0 )
            goto LABEL_20;
        }
LABEL_35:
        v12 = *p_max_length;
        if ( ++v16 >= (int)(*p_max_length + 1) )
          return;
      }
      if ( !Master_object )
        goto LABEL_37;
      monitor = (int32_t)Master_object[4].monitor;
      v19 = qpNum;
      if ( monitor < 0 )
        goto LABEL_35;
LABEL_20:
      listRoot = this->fields.listRoot;
      itemIconPrefab = (Il2CppObject *)this->fields.itemIconPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      Entity = (__int64)UnityEngine_Object__Instantiate_object__59506996(
                          itemIconPrefab,
                          listRoot,
                          (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
      if ( !Entity )
        goto LABEL_37;
      v22 = (UnityEngine_GameObject_o *)Entity;
      Entity = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Entity, 0);
      v23 = (UnityEngine_Transform_o *)Entity;
      if ( !byte_5931940 )
      {
        Entity = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      if ( !v23 )
        goto LABEL_37;
      UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      Entity = (__int64)UnityEngine_GameObject__get_transform(v22, 0);
      if ( !Entity )
        goto LABEL_37;
      v37.fields.x = this->fields.ItemIconScale;
      v37.fields.y = v37.fields.x;
      v37.fields.z = v37.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Entity, v37, 0);
      Entity = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                          v22,
                          (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_ItemIconComponent___);
      if ( !Entity )
        goto LABEL_37;
      v24 = (ItemIconComponent_o *)Entity;
      ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)Entity, v17, monitor, v19, 0, 0);
      ItemIconComponent__SetCondensedScale(v24, this->fields.CounterLabelMaxWidth, 0);
      UnityEngine_GameObject__SetActive(v22, 1, 0);
      Entity = (__int64)this->fields.listRoot;
      if ( !Entity )
        goto LABEL_37;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Entity, 0);
      Entity = (__int64)GameObjectExtensions__SafeGetComponent_object_(
                          gameObject,
                          (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_UIGrid___);
      if ( !Entity )
        goto LABEL_37;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Entity + 440LL))(
        Entity,
        *(_QWORD *)(*(_QWORD *)Entity + 448LL));
      Entity = (__int64)this->fields.objectList;
      if ( !Entity )
        goto LABEL_37;
      v32 = *(_QWORD *)(Entity + 16);
      v33 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(Entity + 28);
      if ( !v32 )
        goto LABEL_37;
      v34 = *(int *)(Entity + 24);
      if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Entity,
          (Il2CppObject *)v22,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = v32 + 8 * v34;
        *(_DWORD *)(Entity + 24) = v34 + 1;
        *(_QWORD *)(v35 + 32) = v22;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 32), (int32_t)v22, v26, v27, v28, v29, v30, v31);
      }
      goto LABEL_35;
    }
  }
}


void ReturnCombineItemDialog__Init(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5932088 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932088 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        ReturnCombineItemDialog__ClearItemList(this, v4),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ReturnCombineItemDialog__OnClickClose(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_593208D & 1) == 0 )
  {
    sub_21FFC50(&Method_ReturnCombineItemDialog_OnClickClose__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593208D = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_ReturnCombineItemDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ReturnCombineItemDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ReturnCombineItemDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v6);
    CommonUI__CloseReturnCombineItemDialog((CommonUI_o *)Instance, 0);
  }
}


void ReturnCombineItemDialog__OnCloseEnd(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0;
  sub_21FFBF4(p_closeCallback, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(closeCallback, 0);
}


void ReturnCombineItemDialog__OnEnable(ReturnCombineItemDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_593208E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3194/*"BaseWindow/CloseButton"*/);
    byte_593208E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_3194/*"BaseWindow/CloseButton"*/, 0);
}


void ReturnCombineItemDialog__Open(
        ReturnCombineItemDialog_o *this,
        int64_t qpNum,
        System_Int64_array *svtIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *titleLabel; // x22
  System_String_o *v10; // x0
  __int64 v11; // x1
  UILabel_o *closeButtonLabel; // x22
  const MethodInfo *v13; // x3

  if ( (byte_593208B & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11608/*"RETURN_COMBINE_ITEM_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_11607/*"RETURN_COMBINE_ITEM_DIALOG_BUTTON_TEXT"*/);
    byte_593208B = 1;
  }
  ReturnCombineItemDialog__Init(this, (const MethodInfo *)qpNum);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11608/*"RETURN_COMBINE_ITEM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v10, 0),
        closeButtonLabel = this->fields.closeButtonLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"RETURN_COMBINE_ITEM_DIALOG_BUTTON_TEXT"*/, 0),
        !closeButtonLabel) )
  {
    sub_21FFECC(v10, v11);
  }
  UILabel__set_text(closeButtonLabel, v10, 0);
  ReturnCombineItemDialog__CreateReturnItemList(this, qpNum, svtIds, v13);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void ReturnCombineItemDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932090 & 1) == 0 )
  {
    sub_21FFC50(&ReturnCombineItemDialog___c_TypeInfo);
    byte_5932090 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ReturnCombineItemDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ReturnCombineItemDialog___c_TypeInfo->static_fields->__9 = (struct ReturnCombineItemDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ReturnCombineItemDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ReturnCombineItemDialog___c___ctor(ReturnCombineItemDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ReturnCombineItemDialog___c___ClearItemList_b__9_0(
        ReturnCombineItemDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_5932091 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932091 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)obj, 0);
  }
}