void __fastcall SummonListDialog___ctor(SummonListDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD8CB2 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4BD8CB2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonListDialog__CheckSerializeFieldNotNull(SummonListDialog_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonListDialog__Close(SummonListDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  UIScrollView_o *bannerListScrollView; // x0
  System_Action_object__o *v7; // x22
  Il2CppObject *v8; // x23
  struct SummonListDialog___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Collections_Generic_List_GameObject__o *v16; // x8
  int32_t size; // w2
  int v18; // w9

  if ( (byte_4BD8CB0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_GameObject__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C21E38(&Method_SummonListDialog___c__Close_b__16_0__);
    sub_1C21E38(&SummonListDialog___c_TypeInfo);
    byte_4BD8CB0 = 1;
  }
  if ( this->fields.isInit )
  {
    objectList = this->fields.objectList;
    bannerListScrollView = (UIScrollView_o *)SummonListDialog___c_TypeInfo;
    if ( !SummonListDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonListDialog___c_TypeInfo);
      bannerListScrollView = (UIScrollView_o *)SummonListDialog___c_TypeInfo;
    }
    v7 = *(System_Action_object__o **)(*(_QWORD *)&bannerListScrollView->fields.mLastPos.fields.z + 16LL);
    if ( !v7 )
    {
      if ( !LODWORD(bannerListScrollView->fields.mBounds.fields.m_Extents.fields.y) )
      {
        j_il2cpp_runtime_class_init_0(bannerListScrollView);
        bannerListScrollView = (UIScrollView_o *)SummonListDialog___c_TypeInfo;
      }
      v8 = **(Il2CppObject ***)&bannerListScrollView->fields.mLastPos.fields.z;
      v7 = (System_Action_object__o *)sub_1C22084(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v7, v8, Method_SummonListDialog___c__Close_b__16_0__, 0LL);
      static_fields = SummonListDialog___c_TypeInfo->static_fields;
      static_fields->__9__16_0 = (struct System_Action_GameObject__o *)v7;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__16_0, (int64_t)v7, v10, v11, v12, v13, v14, v15);
    }
    if ( !objectList )
      goto LABEL_19;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)objectList,
      (System_Action_T__o *)v7,
      (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
    v16 = this->fields.objectList;
    if ( !v16 )
      goto LABEL_19;
    size = v16->fields._size;
    v18 = v16->fields._version + 1;
    v16->fields._size = 0;
    v16->fields._version = v18;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0LL);
    bannerListScrollView = this->fields.bannerListScrollView;
    if ( !bannerListScrollView
      || (((void (__fastcall *)(UIScrollView_o *, _QWORD, Il2CppMethodPointer, float, float))bannerListScrollView->klass->vtable._9_SetDragAmount.method)(
            bannerListScrollView,
            0LL,
            bannerListScrollView->klass->vtable._10_MoveRelative.methodPtr,
            0.0,
            0.0),
          (bannerListScrollView = this->fields.bannerListScrollView) == 0LL)
      || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))bannerListScrollView->klass->vtable._8_UpdateScrollbars.method)(
            bannerListScrollView,
            1LL,
            bannerListScrollView->klass->vtable._9_SetDragAmount.methodPtr),
          (bannerListScrollView = this->fields.bannerListScrollView) == 0LL) )
    {
LABEL_19:
      sub_1C22094(bannerListScrollView, callback);
    }
    UIScrollView__UpdatePosition(bannerListScrollView, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, callback, 0LL);
    this->fields.isInit = 0;
  }
}


void __fastcall SummonListDialog__Init(
        SummonListDialog_o *this,
        int32_t currentIndex,
        int32_t currentSummonListGroupId,
        int32_t vaildGachaCount,
        System_Collections_Generic_List_VaildGachaInfo__o *dispGachaList,
        const MethodInfo *method)
{
  __int64 v11; // x21
  System_String_o *listRoot; // x0
  const MethodInfo *v13; // x1
  UnityEngine_Transform_o *transform; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  System_Func_object__bool__o *v17; // x23
  UnityEngine_Transform_o *v18; // x0
  int32_t v19; // w24
  int32_t v20; // w8
  Il2CppObject *summonBannerObject; // x23
  Il2CppObject *v22; // x26
  System_String_o *v23; // x0
  System_String_o *v24; // x27
  UnityEngine_GameObject_o *v25; // x28
  NetworkManager_c *v26; // x0
  int64_t userIdNumber; // x23
  int32_t v28; // w29
  int32_t num; // w23
  bool v30; // w23
  System_Action_int__o *v31; // x25
  System_Collections_Generic_List_object__o *objectList; // x23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  int64_t v42; // x1
  Il2CppClass **v43; // x0
  int32_t v44; // [xsp+Ch] [xbp-84h]
  UserGachaMaster_o *Master_object; // [xsp+10h] [xbp-80h]
  UnityEngine_Transform_o *parent; // [xsp+18h] [xbp-78h]
  int v47; // [xsp+24h] [xbp-6Ch]
  UserGachaEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4BD8CAC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_VaildGachaInfo___);
    sub_1C21E38(&System_Func_VaildGachaInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SummonListDialog_OnClickBanner__);
    sub_1C21E38(&Method_SummonListDialog___c__DisplayClass12_0__Init_b__0__);
    sub_1C21E38(&SummonListDialog___c__DisplayClass12_0_TypeInfo);
    sub_1C21E38(&StringLiteral_15911/*"Window/CloseButton"*/);
    sub_1C21E38(&StringLiteral_12596/*"SUMMON_LIST_DIALOG_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12598/*"SUMMON_LIST_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_20844/*"img_summon_mini_"*/);
    byte_4BD8CAC = 1;
  }
  entity = 0LL;
  v11 = sub_1C22084(SummonListDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_53;
  *(_DWORD *)(v11 + 16) = currentSummonListGroupId;
  if ( dispGachaList )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    AndroidBackKeyManager__AddBackKeyTarget_43099640(transform, (System_String_o *)StringLiteral_15911/*"Window/CloseButton"*/, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    listRoot = LocalizationManager__Get((System_String_o *)StringLiteral_12598/*"SUMMON_LIST_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_53;
    UILabel__set_text(titleLabel, listRoot, 0LL);
    messageLabel = this->fields.messageLabel;
    listRoot = LocalizationManager__Get((System_String_o *)StringLiteral_12596/*"SUMMON_LIST_DIALOG_MESSAGE"*/, 0LL);
    if ( !messageLabel )
      goto LABEL_53;
    UILabel__set_text(messageLabel, listRoot, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserGachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserGachaMaster___);
    v17 = (System_Func_object__bool__o *)sub_1C22084(System_Func_VaildGachaInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v11,
      Method_SummonListDialog___c__DisplayClass12_0__Init_b__0__,
      0LL);
    if ( System_Linq_Enumerable__Count_object__50119556(
           (System_Collections_Generic_IEnumerable_TSource__o *)dispGachaList,
           (System_Func_TSource__bool__o *)v17,
           (const MethodInfo_2FCC384 *)Method_System_Linq_Enumerable_Count_VaildGachaInfo___) >= 21 )
    {
      listRoot = (System_String_o *)this->fields.listRoot;
      if ( !listRoot )
        goto LABEL_53;
      v18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)listRoot, 0LL);
    }
    else
    {
      listRoot = (System_String_o *)this->fields.centerRoot;
      if ( !listRoot )
        goto LABEL_53;
      v18 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)listRoot, 0LL);
    }
    parent = v18;
    if ( dispGachaList->fields._size >= 1 )
    {
      v47 = 0;
      v19 = 0;
      if ( currentIndex + 1 <= vaildGachaCount )
        v20 = 0;
      else
        v20 = vaildGachaCount;
      v44 = v20;
      while ( 1 )
      {
        listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)dispGachaList,
                                        v19,
                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !listRoot )
          break;
        if ( LODWORD(listRoot[4].monitor) == *(_DWORD *)(v11 + 16) )
        {
          summonBannerObject = (Il2CppObject *)this->fields.summonBannerObject;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v22 = UnityEngine_Object__Instantiate_object__50551272(
                  summonBannerObject,
                  parent,
                  (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___);
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v19,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot )
            break;
          v23 = System_Int32__ToString((int)listRoot + 40, 0LL);
          listRoot = System_String__Concat_63115476((System_String_o *)StringLiteral_20844/*"img_summon_mini_"*/, v23, 0LL);
          if ( !this->fields.summonControl )
            break;
          v24 = listRoot;
          v25 = SummonControl__searchBannerImg(this->fields.summonControl, listRoot, 0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          v26 = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            v26 = NetworkManager_TypeInfo;
          }
          userIdNumber = v26->static_fields->userIdNumber;
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v19,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot || !Master_object )
            break;
          v28 = v44 + v19 - v47;
          if ( !UserGachaMaster__TryGetEntity(Master_object, &entity, userIdNumber, listRoot->fields._stringLength, 0LL) )
            goto LABEL_41;
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v19,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot )
            break;
          if ( listRoot[4].fields._stringLength < 1 )
            goto LABEL_41;
          if ( !entity )
            break;
          num = entity->fields.num;
          listRoot = (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)dispGachaList,
                                          v19,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
          if ( !listRoot )
            break;
          if ( num >= listRoot[4].fields._stringLength )
          {
            v28 = -1;
            v30 = 1;
            ++v47;
          }
          else
          {
LABEL_41:
            v30 = 0;
          }
          v31 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
          System_Action_int____ctor(v31, (Il2CppObject *)this, (intptr_t)Method_SummonListDialog_OnClickBanner__, 0LL);
          if ( !v22 )
            break;
          SummonBannerIconComponent__SetInfo((SummonBannerIconComponent_o *)v22, v28, v24, v30, v25, v31, 0LL);
          objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
          listRoot = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
          if ( !objectList )
            break;
          items = objectList->fields._items;
          v40 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++objectList->fields._version;
          if ( !items )
            break;
          size = objectList->fields._size;
          v42 = (int64_t)listRoot;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              objectList,
              (Il2CppObject *)listRoot,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            objectList->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v42;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v43 + 4), v42, v33, v34, v35, v36, v37, v38);
          }
        }
        if ( ++v19 >= dispGachaList->fields._size )
          goto LABEL_51;
      }
LABEL_53:
      sub_1C22094(listRoot, v13);
    }
LABEL_51:
    SummonListDialog__RepositionBanner(this, v13);
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    this->fields.isInit = 1;
  }
}


void __fastcall SummonListDialog__OnClickBanner(SummonListDialog_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *bannerLoopCtr; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct SummonControl_o *summonControl; // x8
  struct SummonControl_o *v15; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  if ( (byte_4BD8CAE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SummonListDialog_OnClickBanner__);
    sub_1C21E38(&Method_SummonListDialog___c__DisplayClass14_0__OnClickBanner_b__0__);
    sub_1C21E38(&SummonListDialog___c__DisplayClass14_0_TypeInfo);
    byte_4BD8CAE = 1;
  }
  v5 = sub_1C22084(SummonListDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = index;
  summonControl = this->fields.summonControl;
  if ( !summonControl )
    goto LABEL_19;
  if ( summonControl->fields.currentMoveIdx == index )
  {
    SummonListDialog__OnClickClose(this, v7);
    return;
  }
  if ( (index & 0x80000000) == 0 )
  {
    bannerLoopCtr = (UnityEngine_Component_o *)summonControl->fields.bannerLoopCtr;
    if ( !bannerLoopCtr )
      goto LABEL_19;
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
    if ( !bannerLoopCtr )
      goto LABEL_19;
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                                 (UnityEngine_Transform_o *)bannerLoopCtr,
                                                 0LL);
    if ( (int)bannerLoopCtr > *(_DWORD *)(v5 + 24) )
    {
      v15 = this->fields.summonControl;
      if ( v15 )
      {
        bannerLoopCtr = (UnityEngine_Component_o *)v15->fields.maskObject;
        if ( bannerLoopCtr )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bannerLoopCtr, 1, 0LL);
          MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
          v16 = Method_SummonListDialog_OnClickBanner__;
          if ( (*((_BYTE *)Method_SummonListDialog_OnClickBanner__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_1C21E50(Method_SummonListDialog_OnClickBanner__);
          v17 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
          v18 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v18,
            (Il2CppObject *)v5,
            Method_SummonListDialog___c__DisplayClass14_0__OnClickBanner_b__0__,
            0LL);
          SummonListDialog__Close(this, v18, v19);
          return;
        }
      }
LABEL_19:
      sub_1C22094(bannerLoopCtr, v7);
    }
  }
  v20 = Method_SummonListDialog_OnClickBanner__;
  if ( (*((_BYTE *)Method_SummonListDialog_OnClickBanner__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C21E50(Method_SummonListDialog_OnClickBanner__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0LL);
}


void __fastcall SummonListDialog__OnClickClose(SummonListDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BD8CB1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonListDialog_OnClickClose__);
    byte_4BD8CB1 = 1;
  }
  if ( this->fields.isInit )
  {
    v3 = Method_SummonListDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonListDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_SummonListDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    SummonListDialog__Close(this, 0LL, v5);
  }
}


void __fastcall SummonListDialog__Open(SummonListDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BD8CAF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SummonListDialog__Open_b__15_0__);
    byte_4BD8CAF = 1;
  }
  if ( this->fields.isInit )
  {
    v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v3, (Il2CppObject *)this, Method_SummonListDialog__Open_b__15_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v3, 0, 0LL);
  }
}


void __fastcall SummonListDialog__RepositionBanner(SummonListDialog_o *this, const MethodInfo *method)
{
  SummonListDialog_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  struct UIGrid_o *listRoot; // x9
  float size; // s8
  float maxPerLine; // s9
  float v7; // s8
  struct UIGrid_o *v8; // x8
  unsigned int v9; // w10
  signed int v10; // w22
  struct UIGrid_o *v11; // x8
  float v12; // s0
  bool v13; // nf
  float v14; // s0
  int v15; // w23
  float v16; // s9
  struct UIGrid_o *v17; // x8
  int v18; // w8
  int32_t v19; // w2
  struct UIGrid_o *v20; // x8
  int m_CancellationTokenSource; // w9
  System_Collections_Generic_List_object__o *v22; // x20
  bool v23; // vf
  int v24; // w9
  int32_t v25; // w21
  float v26; // s10
  struct UIGrid_o *v27; // x8
  float cellWidth; // s12
  float cellHeight; // s13
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BD8CAD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (SummonListDialog_o *)sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4BD8CAD = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
    goto LABEL_33;
  listRoot = v2->fields.listRoot;
  if ( !listRoot )
    goto LABEL_33;
  size = (float)objectList->fields._size;
  maxPerLine = (float)listRoot->fields.maxPerLine;
  if ( !byte_4BD7265 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD7265 = 1;
  }
  v7 = size / maxPerLine;
  this = (SummonListDialog_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = v2->fields.listRoot;
  v9 = vcvtps_s32_f32(v7);
  v10 = ceilf(v7) == INFINITY ? 0x80000000 : v9;
  if ( !v8 )
    goto LABEL_33;
  GameObjectExtensions__SetLocalPositionY(
    v2->fields.centerRoot,
    (float)(v8->fields.cellHeight * 0.5) * (float)(v10 - 1),
    0LL);
  v11 = v2->fields.listRoot;
  if ( !v11 )
    goto LABEL_33;
  LODWORD(v12) = *(_QWORD *)&NGUIMath__GetPivotOffset(v11->fields.pivot, 0LL);
  if ( v10 >= 1 )
  {
    v13 = v12 < 0.0;
    v14 = fminf(v12, 1.0);
    v15 = 0;
    if ( v13 )
      v16 = 0.0;
    else
      v16 = v14;
    while ( 1 )
    {
      v17 = v2->fields.listRoot;
      if ( !v17 )
        goto LABEL_33;
      this = (SummonListDialog_o *)v2->fields.objectList;
      if ( !this )
        goto LABEL_33;
      v18 = v17->fields.maxPerLine;
      v19 = LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15 >= v18
          ? v18
          : LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15;
      this = (SummonListDialog_o *)System_Collections_Generic_List_object___GetRange(
                                     (System_Collections_Generic_List_object__o *)this,
                                     v18 * v15,
                                     v19,
                                     (const MethodInfo_364FC84 *)Method_System_Collections_Generic_List_GameObject__GetRange__);
      if ( !this )
        goto LABEL_33;
      v20 = v2->fields.listRoot;
      if ( !v20 )
        goto LABEL_33;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v22 = (System_Collections_Generic_List_object__o *)this;
      v23 = __OFSUB__(m_CancellationTokenSource, 1);
      v24 = m_CancellationTokenSource - 1;
      if ( v24 < 0 == v23 )
        break;
LABEL_31:
      if ( ++v15 == v10 )
        return;
    }
    v25 = 0;
    v26 = (float)(v16 * (float)(v20->fields.cellWidth * (float)v24)) + 0.0;
    while ( 1 )
    {
      this = (SummonListDialog_o *)System_Collections_Generic_List_object___get_Item(
                                     v22,
                                     v25,
                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      v27 = v2->fields.listRoot;
      if ( !v27 )
        break;
      if ( !this )
        break;
      cellWidth = v27->fields.cellWidth;
      cellHeight = v27->fields.cellHeight;
      this = (SummonListDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        break;
      v30.fields.x = (float)(cellWidth * (float)v25) - v26;
      v30.fields.y = (float)v15 * (float)-cellHeight;
      v30.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0LL);
      if ( ++v25 >= v22->fields._size )
        goto LABEL_31;
    }
LABEL_33:
    sub_1C22094(this, method);
  }
}


void __fastcall SummonListDialog___Open_b__15_0(SummonListDialog_o *this, const MethodInfo *method)
{
  SummonListDialog___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *_9__15_1; // x20
  Il2CppObject *v6; // x21
  struct SummonListDialog___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BD8CB3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_GameObject__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C21E38(&Method_SummonListDialog___c__Open_b__15_1__);
    sub_1C21E38(&SummonListDialog___c_TypeInfo);
    byte_4BD8CB3 = 1;
  }
  v3 = SummonListDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !SummonListDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonListDialog___c_TypeInfo);
    v3 = SummonListDialog___c_TypeInfo;
  }
  _9__15_1 = (System_Action_object__o *)v3->static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SummonListDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__15_1 = (System_Action_object__o *)sub_1C22084(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__15_1, v6, Method_SummonListDialog___c__Open_b__15_1__, 0LL);
    static_fields = SummonListDialog___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = (struct System_Action_GameObject__o *)_9__15_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__15_1, (int64_t)_9__15_1, v8, v9, v10, v11, v12, v13);
  }
  if ( !objectList )
    sub_1C22094(v3, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__15_1,
    (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void __fastcall SummonListDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8CB4 & 1) == 0 )
  {
    sub_1C21E38(&SummonListDialog___c_TypeInfo);
    byte_4BD8CB4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SummonListDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SummonListDialog___c_TypeInfo->static_fields->__9 = (struct SummonListDialog___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SummonListDialog___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SummonListDialog___c___ctor(SummonListDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonListDialog___c___Close_b__16_0(
        SummonListDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4BD8CB6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8CB6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)obj, 0LL);
  }
}


void __fastcall SummonListDialog___c___Open_b__15_1(
        SummonListDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BD8CB5 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8CB5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v4 )
  {
    if ( !obj )
      sub_1C22094(v4, v5);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
  }
}


void __fastcall SummonListDialog___c__DisplayClass12_0___ctor(
        SummonListDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonListDialog___c__DisplayClass12_0___Init_b__0(
        SummonListDialog___c__DisplayClass12_0_o *this,
        VaildGachaInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.summonListGroupId == this->fields.currentSummonListGroupId;
}


void __fastcall SummonListDialog___c__DisplayClass14_0___ctor(
        SummonListDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonListDialog___c__DisplayClass14_0___OnClickBanner_b__0(
        SummonListDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct SummonListDialog_o *_4__this; // x8
  SummonControl_o *summonControl; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (summonControl = _4__this->fields.summonControl) == 0LL )
    sub_1C22094(this, method);
  SummonControl__OnClickMiniBanner(summonControl, this->fields.index, 0, 0LL);
}