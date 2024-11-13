void __fastcall ClassBoardAddClassDialog___ctor(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1

  if ( (byte_4B1963D & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantClassIconComponent__TypeInfo, v7, v8);
    byte_4B1963D = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ServantClassIconComponent__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantClassIconComponent___ctor__);
  this->fields.iconList = (struct System_Collections_Generic_List_ServantClassIconComponent__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v16);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardAddClassDialog__Close(
        ClassBoardAddClassDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B1963A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, closeCallback, method);
    sub_1BCA7E0(&Method_ClassBoardAddClassDialog_OnCloseEnd__, v10, v11);
    byte_4B1963A = 1;
  }
  this->fields.closeCallback = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallback,
    (int64_t)closeCallback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardAddClassDialog_OnCloseEnd__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardAddClassDialog__CreateServantClassIconComponents(
        ClassBoardAddClassDialog_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ClassBoardAddClassDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_ServantClassIconComponent__o *iconList; // x8
  int32_t size; // w8
  int v15; // w22
  Il2CppObject *iconPrefab; // x20
  Il2CppObject *v17; // x21
  System_Collections_Generic_List_object__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  ClassBoardAddClassDialog_o *v28; // x1
  Il2CppClass **v29; // x0

  v4 = this;
  if ( (byte_4B1963C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, *(_QWORD *)&count, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantClassIconComponent__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    this = (ClassBoardAddClassDialog_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1963C = 1;
  }
  iconList = v4->fields.iconList;
  if ( !iconList )
LABEL_17:
    sub_1BCAA3C(this, *(_QWORD *)&count);
  size = iconList->fields._size;
  if ( size < count )
  {
    v15 = count - size;
    if ( count - size >= 1 )
    {
      do
      {
        iconPrefab = (Il2CppObject *)v4->fields.iconPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
        v17 = UnityEngine_Object__Instantiate_object_(
                iconPrefab,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
        {
          GameObjectExtensions__SafeSetParent(
            (UnityEngine_GameObject_o *)v17,
            (UnityEngine_Component_o *)v4->fields.iconListParent,
            0LL);
          if ( !v17 )
            goto LABEL_17;
          v18 = (System_Collections_Generic_List_object__o *)v4->fields.iconList;
          this = (ClassBoardAddClassDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)v17,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
          if ( !v18 )
            goto LABEL_17;
          items = v18->fields._items;
          v26 = Method_System_Collections_Generic_List_ServantClassIconComponent__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_17;
          v27 = v18->fields._size;
          v28 = this;
          if ( (unsigned int)v27 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)this,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + v27;
            v18->fields._size = v27 + 1;
            v29[4] = (Il2CppClass *)v28;
            sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v28, v19, v20, v21, v22, v23, v24);
          }
        }
        --v15;
      }
      while ( v15 );
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B19639 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardAddClassDialog_OnClickCloseButton__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B19639 = 1;
  }
  v5 = Method_ClassBoardAddClassDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_ClassBoardAddClassDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardAddClassDialog_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  CommonUI__CloseClassBoardAddClassDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall ClassBoardAddClassDialog__OnCloseEnd(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_closeCallback; // x0
  System_Action_o *closeCallback; // t1

  closeCallback = this->fields.closeCallback;
  p_closeCallback = (PartyOrganizationUtility_o *)&this->fields.closeCallback;
  p_closeCallback->klass = 0LL;
  sub_1BCA784(p_closeCallback, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(closeCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardAddClassDialog__Open(
        ClassBoardAddClassDialog_o *this,
        int32_t classBaseId,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x1
  System_Collections_Generic_List_object__o *iconList; // x0
  __int64 v32; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  unsigned __int64 v36; // x22
  __int64 v37; // x1
  UILabel_o *contentLabel; // x21
  int v39; // w8
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4B19638 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, *(_QWORD *)&classBaseId, classIds);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_3499/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/, v27, v28);
    byte_4B19638 = 1;
  }
  entity = 0LL;
  memset(&v41, 0, sizeof(v41));
  if ( classIds )
  {
    v29 = *(_QWORD *)&classIds->max_length;
    if ( v29 )
    {
      ClassBoardAddClassDialog__CreateServantClassIconComponents(this, v29, (const MethodInfo *)classIds);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
      if ( !iconList )
        goto LABEL_39;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        iconList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantClassIconComponent__GetEnumerator__);
      v41 = v40;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__MoveNext__) )
      {
        if ( !v41.fields._current )
          sub_1BCAA3C(0LL, v32);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v41.fields._current, 0LL);
        if ( !gameObject )
          sub_1BCAA3C(0LL, v34);
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v41,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantClassIconComponent__Dispose__);
      v35 = *(_QWORD *)&classIds->max_length;
      if ( (int)v35 >= 1 )
      {
        v36 = 0LL;
        while ( 1 )
        {
          iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
          if ( !iconList )
            break;
          if ( (__int64)v36 < iconList->fields._size )
          {
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v36,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
            if ( v36 >= classIds->max_length )
              sub_1BCAA44(iconList, v30);
            if ( !iconList )
              break;
            ServantClassIconComponent__Set_38921992(
              (ServantClassIconComponent_o *)iconList,
              classIds->m_Items[v36 + 1],
              3,
              0LL);
            iconList = (System_Collections_Generic_List_object__o *)this->fields.iconList;
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      iconList,
                                                                      v36,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantClassIconComponent__get_Item__);
            if ( !iconList )
              break;
            iconList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)iconList,
                                                                      0LL);
            if ( !iconList )
              break;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconList, 1, 0LL);
            v35 = *(_QWORD *)&classIds->max_length;
          }
          if ( (__int64)++v36 >= (int)v35 )
            goto LABEL_22;
        }
LABEL_39:
        sub_1BCAA3C(iconList, v30);
      }
LABEL_22:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
      iconList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !iconList )
        goto LABEL_39;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)iconList,
             &entity,
             classBaseId,
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      {
        contentLabel = this->fields.contentLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
        iconList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3499/*"CLASS_BOARD_ADD_CLASS_DIALOG_CONTENT_FORMAT"*/,
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
                                                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
      if ( !iconList )
        goto LABEL_39;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer))iconList->klass->vtable._8_unknown.method)(
        iconList,
        iconList->klass->vtable._9_unknown.methodPtr);
      iconList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
      if ( !iconList )
        goto LABEL_39;
      if ( (int)classIds->max_length > 4 )
        v39 = 1;
      else
        v39 = 4;
      HIDWORD(iconList[2].klass) = v39;
      UIScrollView__ResetPosition((UIScrollView_o *)iconList, 0LL);
    }
  }
}


void __fastcall ClassBoardAddClassDialog__SetupText(ClassBoardAddClassDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *titleLabel; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  UILabel_o *closeButtonLabel; // x19

  if ( (byte_4B1963B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3500/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v6, v7);
    byte_4B1963B = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3500/*"CLASS_BOARD_ADD_CLASS_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v9, 0LL),
        closeButtonLabel = this->fields.closeButtonLabel,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeButtonLabel) )
  {
    sub_1BCAA3C(v9, v10);
  }
  UILabel__set_text(closeButtonLabel, v9, 0LL);
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