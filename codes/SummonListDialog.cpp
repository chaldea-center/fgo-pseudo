void SummonListDialog___ctor(SummonListDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC3994 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CC3994 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SummonListDialog__CheckSerializeFieldNotNull(SummonListDialog_o *this, const MethodInfo *method)
{
  ;
}


void SummonListDialog__Close(SummonListDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x20
  UIScrollView_o *bannerListScrollView; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x21

  if ( (byte_4CC3992 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SummonListDialog___c__DisplayClass16_0__Close_b__0__);
    sub_1C713B0(&SummonListDialog___c__DisplayClass16_0_TypeInfo);
    byte_4CC3992 = 1;
  }
  v5 = sub_1C715FC(SummonListDialog___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  if ( this->fields.baseState == 2 )
  {
    bannerListScrollView = this->fields.bannerListScrollView;
    if ( bannerListScrollView )
    {
      ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, float, float))bannerListScrollView->klass->vtable._9_SetDragAmount.methodPtr)(
        bannerListScrollView,
        0,
        bannerListScrollView->klass->vtable._9_SetDragAmount.method,
        0.0,
        0.0);
      bannerListScrollView = this->fields.bannerListScrollView;
      if ( bannerListScrollView )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))bannerListScrollView->klass->vtable._8_UpdateScrollbars.methodPtr)(
          bannerListScrollView,
          1,
          bannerListScrollView->klass->vtable._8_UpdateScrollbars.method);
        bannerListScrollView = this->fields.bannerListScrollView;
        if ( bannerListScrollView )
        {
          UIScrollView__UpdatePosition(bannerListScrollView, 0);
          v20 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(v20, (Il2CppObject *)v5, Method_SummonListDialog___c__DisplayClass16_0__Close_b__0__, 0);
          BaseDialog__SafeClose((BaseDialog_o *)this, v20, 0);
          return;
        }
      }
    }
LABEL_10:
    sub_1C71608(bannerListScrollView, v7);
  }
}


void SummonListDialog__CreateBanner(
        SummonListDialog_o *this,
        int32_t currentIndex,
        int32_t currentSummonListGroupId,
        int32_t vaildGachaCount,
        System_Collections_Generic_List_VaildGachaInfo__o *dispGachaList,
        const MethodInfo *method)
{
  __int64 v11; // x21
  void *listRoot; // x0
  __int64 v13; // x1
  System_Func_object__bool__o *v14; // x23
  int32_t v15; // w9
  int32_t v16; // w24
  Il2CppObject *summonBannerObject; // x23
  Il2CppObject *v18; // x26
  System_String_o *v19; // x0
  System_String_o *v20; // x27
  UnityEngine_GameObject_o *v21; // x28
  NetworkManager_c *v22; // x0
  int64_t userIdNumber; // x23
  int32_t v24; // w29
  int32_t num; // w23
  bool v26; // w23
  System_Action_int__o *v27; // x25
  System_Collections_Generic_List_object__o *objectList; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass *v38; // x1
  Il2CppClass **v39; // x0
  int32_t v40; // [xsp+Ch] [xbp-84h]
  UserGachaMaster_o *Master_object; // [xsp+10h] [xbp-80h]
  UnityEngine_Transform_o *parent; // [xsp+18h] [xbp-78h]
  int v43; // [xsp+24h] [xbp-6Ch]
  UserGachaEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CC398E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Count_VaildGachaInfo___);
    sub_1C713B0(&System_Func_VaildGachaInfo__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SummonListDialog_OnClickBanner__);
    sub_1C713B0(&Method_SummonListDialog___c__DisplayClass12_0__CreateBanner_b__0__);
    sub_1C713B0(&SummonListDialog___c__DisplayClass12_0_TypeInfo);
    sub_1C713B0(&StringLiteral_20667/*"img_summon_mini_"*/);
    byte_4CC398E = 1;
  }
  entity = 0;
  v11 = sub_1C715FC(SummonListDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_48;
  *(_DWORD *)(v11 + 16) = currentSummonListGroupId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserGachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v14 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_VaildGachaInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v11,
    Method_SummonListDialog___c__DisplayClass12_0__CreateBanner_b__0__,
    0);
  if ( System_Linq_Enumerable__Count_object__51826244(
         (System_Collections_Generic_IEnumerable_TSource__o *)dispGachaList,
         (System_Func_TSource__bool__o *)v14,
         (const MethodInfo_316CE44 *)Method_System_Linq_Enumerable_Count_VaildGachaInfo___) >= 21 )
  {
    listRoot = this->fields.listRoot;
    if ( !listRoot )
      goto LABEL_48;
    listRoot = UnityEngine_Component__get_transform((UnityEngine_Component_o *)listRoot, 0);
  }
  else
  {
    listRoot = this->fields.centerRoot;
    if ( !listRoot )
      goto LABEL_48;
    listRoot = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)listRoot, 0);
  }
  parent = (UnityEngine_Transform_o *)listRoot;
  if ( !dispGachaList )
LABEL_48:
    sub_1C71608(listRoot, v13);
  if ( currentIndex + 1 <= vaildGachaCount )
    v15 = 0;
  else
    v15 = vaildGachaCount;
  v40 = v15;
  if ( dispGachaList->fields._size >= 1 )
  {
    v43 = 0;
    v16 = 0;
    while ( 1 )
    {
      listRoot = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)dispGachaList,
                   v16,
                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !listRoot )
        goto LABEL_48;
      if ( *((_DWORD *)listRoot + 26) == *(_DWORD *)(v11 + 16) )
      {
        summonBannerObject = (Il2CppObject *)this->fields.summonBannerObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v18 = UnityEngine_Object__Instantiate_object__52264420(
                summonBannerObject,
                parent,
                (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___);
        listRoot = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)dispGachaList,
                     v16,
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !listRoot )
          goto LABEL_48;
        v19 = System_Int32__ToString((int)listRoot + 40, 0);
        listRoot = System_String__Concat_64031724((System_String_o *)StringLiteral_20667/*"img_summon_mini_"*/, v19, 0);
        if ( !this->fields.summonControl )
          goto LABEL_48;
        v20 = (System_String_o *)listRoot;
        v21 = SummonControl__searchBannerImg(this->fields.summonControl, (System_String_o *)listRoot, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CC112A )
        {
          sub_1C713B0(&NetworkManager_TypeInfo);
          byte_4CC112A = 1;
        }
        v22 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v22 = NetworkManager_TypeInfo;
        }
        userIdNumber = v22->static_fields->userIdNumber;
        listRoot = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)dispGachaList,
                     v16,
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !listRoot || !Master_object )
          goto LABEL_48;
        v24 = v40 + v16 - v43;
        if ( !UserGachaMaster__TryGetEntity(Master_object, &entity, userIdNumber, *((_DWORD *)listRoot + 4), 0) )
          goto LABEL_37;
        listRoot = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)dispGachaList,
                     v16,
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !listRoot )
          goto LABEL_48;
        if ( *((int *)listRoot + 28) < 1 )
          goto LABEL_37;
        if ( !entity )
          goto LABEL_48;
        num = entity->fields.num;
        listRoot = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)dispGachaList,
                     v16,
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !listRoot )
          goto LABEL_48;
        if ( num >= *((_DWORD *)listRoot + 28) )
        {
          v24 = -1;
          v26 = 1;
          ++v43;
        }
        else
        {
LABEL_37:
          v26 = 0;
        }
        v27 = (System_Action_int__o *)sub_1C715FC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v27, (Il2CppObject *)this, (intptr_t)Method_SummonListDialog_OnClickBanner__, 0);
        if ( !v18 )
          goto LABEL_48;
        SummonBannerIconComponent__SetInfo((SummonBannerIconComponent_o *)v18, v24, v20, v26, v21, v27, 0);
        objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
        listRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0);
        if ( !objectList )
          goto LABEL_48;
        items = objectList->fields._items;
        v36 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++objectList->fields._version;
        if ( !items )
          goto LABEL_48;
        size = objectList->fields._size;
        v38 = (Il2CppClass *)listRoot;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objectList,
            (Il2CppObject *)listRoot,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          objectList->fields._size = size + 1;
          v39[4] = v38;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)v38, v29, v30, v31, v32, v33, v34);
        }
      }
      if ( ++v16 >= dispGachaList->fields._size )
        return;
    }
  }
}


void SummonListDialog__Init(SummonListDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UILabel_o *titleLabel; // x20
  void *v5; // x0
  __int64 v6; // x1
  UILabel_o *messageLabel; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *v9; // x21
  Il2CppObject *v10; // x22
  struct SummonListDialog___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Collections_Generic_List_GameObject__o *v18; // x8
  int32_t size; // w2
  int v20; // w9

  if ( (byte_4CC398D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_GameObject__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SummonListDialog___c__Init_b__11_0__);
    sub_1C713B0(&SummonListDialog___c_TypeInfo);
    sub_1C713B0(&StringLiteral_15647/*"Window/CloseButton"*/);
    sub_1C713B0(&StringLiteral_12463/*"SUMMON_LIST_DIALOG_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_12465/*"SUMMON_LIST_DIALOG_TITLE"*/);
    byte_4CC398D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_45261920(transform, (System_String_o *)StringLiteral_15647/*"Window/CloseButton"*/, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12465/*"SUMMON_LIST_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)v5, 0);
  messageLabel = this->fields.messageLabel;
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SUMMON_LIST_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_18;
  UILabel__set_text(messageLabel, (System_String_o *)v5, 0);
  v5 = SummonListDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !SummonListDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonListDialog___c_TypeInfo);
    v5 = SummonListDialog___c_TypeInfo;
  }
  v9 = *(System_Action_object__o **)(*((_QWORD *)v5 + 23) + 8LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)v5 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SummonListDialog___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)v5 + 23);
    v9 = (System_Action_object__o *)sub_1C715FC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(v9, v10, Method_SummonListDialog___c__Init_b__11_0__, 0);
    static_fields = SummonListDialog___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Action_GameObject__o *)v9;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0, (int32_t)v9, v12, v13, v14, v15, v16, v17);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)v9,
          (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v18 = this->fields.objectList) == 0) )
  {
LABEL_18:
    sub_1C71608(v5, v6);
  }
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SummonListDialog__OnClickBanner(SummonListDialog_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *bannerLoopCtr; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct SummonControl_o *summonControl; // x8
  struct SummonControl_o *v15; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  if ( (byte_4CC3990 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SummonListDialog_OnClickBanner__);
    sub_1C713B0(&Method_SummonListDialog___c__DisplayClass14_0__OnClickBanner_b__0__);
    sub_1C713B0(&SummonListDialog___c__DisplayClass14_0_TypeInfo);
    byte_4CC3990 = 1;
  }
  v5 = sub_1C715FC(SummonListDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
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
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
    if ( !bannerLoopCtr )
      goto LABEL_19;
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                                 (UnityEngine_Transform_o *)bannerLoopCtr,
                                                 0);
    if ( (int)bannerLoopCtr > *(_DWORD *)(v5 + 24) )
    {
      v15 = this->fields.summonControl;
      if ( v15 )
      {
        bannerLoopCtr = (UnityEngine_Component_o *)v15->fields.maskObject;
        if ( bannerLoopCtr )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bannerLoopCtr, 1, 0);
          MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
          v16 = Method_SummonListDialog_OnClickBanner__;
          if ( (*((_BYTE *)Method_SummonListDialog_OnClickBanner__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_1C713C8(Method_SummonListDialog_OnClickBanner__);
          v17 = (System_Reflection_MethodBase_o *)sub_1C71394(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
          v18 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v18,
            (Il2CppObject *)v5,
            Method_SummonListDialog___c__DisplayClass14_0__OnClickBanner_b__0__,
            0);
          SummonListDialog__Close(this, v18, v19);
          return;
        }
      }
LABEL_19:
      sub_1C71608(bannerLoopCtr, v7);
    }
  }
  v20 = Method_SummonListDialog_OnClickBanner__;
  if ( (*((_BYTE *)Method_SummonListDialog_OnClickBanner__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1C713C8(Method_SummonListDialog_OnClickBanner__);
  v21 = (System_Reflection_MethodBase_o *)sub_1C71394(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
}


void SummonListDialog__OnClickClose(SummonListDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC3993 & 1) == 0 )
  {
    sub_1C713B0(&Method_SummonListDialog_OnClickClose__);
    byte_4CC3993 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SummonListDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonListDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_SummonListDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SummonListDialog__Close(this, 0, v5);
  }
}


void SummonListDialog__Open(
        SummonListDialog_o *this,
        int32_t currentIndex,
        int32_t currentSummonListGroupId,
        int32_t vaildGachaCount,
        System_Collections_Generic_List_VaildGachaInfo__o *dispGachaList,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_4CC3991 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SummonListDialog__Open_b__15_0__);
    byte_4CC3991 = 1;
  }
  SummonListDialog__CreateBanner(this, currentIndex, currentSummonListGroupId, vaildGachaCount, dispGachaList, method);
  SummonListDialog__RepositionBanner(this, v11);
  v12 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonListDialog__Open_b__15_0__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v12, 0, 0);
}


void SummonListDialog__RepositionBanner(SummonListDialog_o *this, const MethodInfo *method)
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
  if ( (byte_4CC398F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (SummonListDialog_o *)sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_4CC398F = 1;
  }
  objectList = v2->fields.objectList;
  if ( !objectList )
    goto LABEL_33;
  listRoot = v2->fields.listRoot;
  if ( !listRoot )
    goto LABEL_33;
  size = (float)objectList->fields._size;
  maxPerLine = (float)listRoot->fields.maxPerLine;
  if ( !byte_4CC13B2 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
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
    0);
  v11 = v2->fields.listRoot;
  if ( !v11 )
    goto LABEL_33;
  LODWORD(v12) = *(_QWORD *)&NGUIMath__GetPivotOffset(v11->fields.pivot, 0);
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
                                     (const MethodInfo_38112E8 *)Method_System_Collections_Generic_List_GameObject__GetRange__);
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
                                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      v27 = v2->fields.listRoot;
      if ( !v27 )
        break;
      if ( !this )
        break;
      cellWidth = v27->fields.cellWidth;
      cellHeight = v27->fields.cellHeight;
      this = (SummonListDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        break;
      v30.fields.x = (float)(cellWidth * (float)v25) - v26;
      v30.fields.y = (float)v15 * (float)-cellHeight;
      v30.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0);
      if ( ++v25 >= v22->fields._size )
        goto LABEL_31;
    }
LABEL_33:
    sub_1C71608(this, method);
  }
}


void SummonListDialog___Open_b__15_0(SummonListDialog_o *this, const MethodInfo *method)
{
  SummonListDialog___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *_9__15_1; // x20
  Il2CppObject *v6; // x21
  struct SummonListDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC3995 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_GameObject__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C713B0(&Method_SummonListDialog___c__Open_b__15_1__);
    sub_1C713B0(&SummonListDialog___c_TypeInfo);
    byte_4CC3995 = 1;
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
    _9__15_1 = (System_Action_object__o *)sub_1C715FC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__15_1, v6, Method_SummonListDialog___c__Open_b__15_1__, 0);
    static_fields = SummonListDialog___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = (struct System_Action_GameObject__o *)_9__15_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__15_1, (int32_t)_9__15_1, v8, v9, v10, v11, v12, v13);
  }
  if ( !objectList )
    sub_1C71608(v3, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__15_1,
    (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void SummonListDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC3996 & 1) == 0 )
  {
    sub_1C713B0(&SummonListDialog___c_TypeInfo);
    byte_4CC3996 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(SummonListDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonListDialog___c_TypeInfo->static_fields->__9 = (struct SummonListDialog___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)SummonListDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SummonListDialog___c___ctor(SummonListDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonListDialog___c___Init_b__11_0(
        SummonListDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4CC3997 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3997 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)obj, 0);
  }
}


void SummonListDialog___c___Open_b__15_1(
        SummonListDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4CC3998 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3998 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v4 )
  {
    if ( !obj )
      sub_1C71608(v4, v5);
    UnityEngine_GameObject__SetActive(obj, 1, 0);
  }
}


void SummonListDialog___c__DisplayClass12_0___ctor(
        SummonListDialog___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonListDialog___c__DisplayClass12_0___CreateBanner_b__0(
        SummonListDialog___c__DisplayClass12_0_o *this,
        VaildGachaInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.summonListGroupId == this->fields.currentSummonListGroupId;
}


void SummonListDialog___c__DisplayClass14_0___ctor(
        SummonListDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonListDialog___c__DisplayClass14_0___OnClickBanner_b__0(
        SummonListDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct SummonListDialog_o *_4__this; // x8
  SummonControl_o *summonControl; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (summonControl = _4__this->fields.summonControl) == 0 )
    sub_1C71608(this, method);
  SummonControl__OnClickMiniBanner(summonControl, this->fields.index, 0, 0);
}


void SummonListDialog___c__DisplayClass16_0___ctor(
        SummonListDialog___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonListDialog___c__DisplayClass16_0___Close_b__0(
        SummonListDialog___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  SummonListDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  SummonListDialog__Init(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}