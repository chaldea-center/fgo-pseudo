void __fastcall ClassBoardAddClassDialog___ctor(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E50F & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
    byte_4A5E50F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantClassIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ServantClassIconComponent__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardAddClassDialog__Close(
        ClassBoardAddClassDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5E50C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardAddClassDialog_OnCloseEnd__);
    byte_4A5E50C = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallback,
    (int32_t)closeCallback,
    (int32_t)method,
    v3);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardAddClassDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardAddClassDialog__CreateServantClassIconComponents(
        ClassBoardAddClassDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ClassBoardAddClassDialog_o *v4; // x19
  struct System_Collections_Generic_List_ServantClassIconComponent__o *iconList; // x8
  int32_t size; // w8
  int v7; // w22
  Il2CppObject *iconPrefab; // x20
  Il2CppObject *v9; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  ClassBoardAddClassDialog_o *v16; // x1
  Il2CppClass **v17; // x0

  v4 = this;
  if ( (byte_4A5E50E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantClassIconComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ClassBoardAddClassDialog_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E50E = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_17:
    sub_1B8880C(this, *(_QWORD *)&count);
  size = iconList->fields._size;
  if ( size < count )
  {
    v7 = count - size;
    if ( count - size >= 1 )
    {
      do
      {
        iconPrefab = (Il2CppObject *)v4->fields.iconPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = UnityEngine_Object__Instantiate_object_(
               iconPrefab,
               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v9,
            (UnityEngine_Component_o *)v4->fields.iconListParent,
            0LL);
          if ( !v9 )
            goto LABEL_17;
          v10 = (System_Collections_Generic_List_object__o *)v4->fields.iconList;
          this = (ClassBoardAddClassDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)v9,
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
          if ( !v10 )
            goto LABEL_17;
          items = v10->fields._items;
          v14 = Method_System_Collections_Generic_List_ServantClassIconComponent__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_17;
          v15 = v10->fields._size;
          v16 = this;
          if ( (unsigned int)v15 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)this,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + v15;
            v10->fields._size = v15 + 1;
            v17[4] = (Il2CppClass *)v16;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
          }
        }
        --v7;
      }
      while ( v7 );
    }
  }
}


void __fastcall ClassBoardAddClassDialog__Init(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  ClassBoardAddClassDialog__SetupText(this, v3);
}


void __fastcall ClassBoardAddClassDialog__OnClickCloseButton(
        ClassBoardAddClassDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5E50B & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardAddClassDialog_OnClickCloseButton__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E50B = 1;
  }
  v2 = Method_ClassBoardAddClassDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardAddClassDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8(Method_ClassBoardAddClassDialog_OnClickCloseButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  CommonUI__CloseClassBoardAddClassDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ClassBoardAddClassDialog__OnCloseEnd(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0LL;
  sub_1B88554(p_closeCallback, 0, v2, v3);
  ActionExtensions__Call(closeCallback, 0LL);
}


void __fastcall ClassBoardAddClassDialog__Open(
        ClassBoardAddClassDialog_o *this,
        int32_t classBaseId,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *iconList; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x22
  UILabel_o *contentLabel; // x21
  int v16; // w8
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4A5E50A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3473/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/);
    byte_4A5E50A = 1;
  }
  entity = 0LL;
  memset(&v18, 0, sizeof(v18));
  if ( classIds )
  {
    v7 = *(_QWORD *)&classIds->max_length;
    if ( v7 )
    {
      ClassBoardAddClassDialog__CreateServantClassIconComponents(this, v7, (const MethodInfo *)classIds);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_39;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v17,
        iconList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
      v18 = v17;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v18,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__) )
      {
        if ( !v18.fields._current )
          sub_1B8880C(0LL, v10);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18.fields._current, 0LL);
        if ( !gameObject )
          sub_1B8880C(0LL, v12);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
      v13 = *(_QWORD *)&classIds->max_length;
      if ( (int)v13 >= 1 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
          if ( !iconList )
            break;
          if ( (__int64)v14 < iconList->fields._size )
          {
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v14,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
            if ( v14 >= classIds->max_length )
              sub_1B88814(iconList, v8);
            if ( !iconList )
              break;
            ServantClassIconComponent__Set_38211560(
              (ServantClassIconComponent_o *)iconList,
              classIds->m_Items[v14 + 1],
              3,
              0LL);
            iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v14,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)iconList,
                                                                      0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            v13 = *(_QWORD *)&classIds->max_length;
          }
          if ( (__int64)++v14 >= (int)v13 )
            goto LABEL_22;
        }
LABEL_39:
        sub_1B8880C(iconList, v8);
      }
LABEL_22:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      iconList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !iconList )
        goto LABEL_39;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)iconList,
             &entity,
             classBaseId,
             (const MethodInfo_311D988 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      {
        contentLabel = this->fields.contentLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        iconList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3473/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/,
                                                                  0LL);
        if ( !entity )
          goto LABEL_39;
        iconList = (System_Collections_Generic_List_object__o *)System_String__Format(
                                                                  (System_String_o *)iconList,
                                                                  (Il2CppObject *)entity[1].monitor,
                                                                  0LL);
        if ( !contentLabel )
          goto LABEL_39;
        UILabel__set_text(contentLabel, (System_String_o *)iconList, 0LL);
      }
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconListParent;
      if ( !iconList )
        goto LABEL_39;
      iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)iconList,
                                                                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_39;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
        iconList,
        iconList->klass->vtable._9_unknown.methodPtr);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_39;
      if ( (int)classIds->max_length > 4 )
        v16 = 1;
      else
        v16 = 4;
      HIDWORD(iconList[2].klass) = v16;
      UIScrollView__ResetPosition((UIScrollView_o *)iconList, 0LL);
    }
  }
}


void __fastcall ClassBoardAddClassDialog__SetupText(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_4A5E50D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3474/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4A5E50D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3474/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v4, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_1B8880C(v4, v5);
  }
  UILabel__set_text(closeButtonLabel, v4, 0LL);
}


void __fastcall ClassBoardAddClassDialog__Validation(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *__fastcall ClassBoardAddClassDialog__get_closeBtnObject(
        ClassBoardAddClassDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonObj;
}