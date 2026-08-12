void SummonListDialog___ctor(SummonListDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596CB2B & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_596CB2B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10, v11);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x21

  if ( (byte_596CB29 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SummonListDialog___c__DisplayClass16_0__Close_b__0__);
    sub_2213A60(&SummonListDialog___c__DisplayClass16_0_TypeInfo);
    byte_596CB29 = 1;
  }
  v5 = sub_2213CCC(SummonListDialog___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  if ( this->fields.baseState == 2 )
  {
    bannerListScrollView = this->fields.bannerListScrollView;
    if ( bannerListScrollView )
    {
      ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *, double, double))bannerListScrollView->klass->vtable._9_SetDragAmount.methodPtr)(
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
          v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v20, (Il2CppObject *)v5, Method_SummonListDialog___c__DisplayClass16_0__Close_b__0__, 0);
          BaseDialog__SafeClose((BaseDialog_o *)this, v20, 0);
          return;
        }
      }
    }
LABEL_10:
    sub_2213CDC(bannerListScrollView, v7);
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
  __int64 v14; // x2
  DataManager_c *v15; // x0
  int v16; // w8
  System_Func_object__bool__o *v17; // x23
  int32_t v18; // w8
  int32_t v19; // w24
  __int64 v20; // x2
  Il2CppObject *summonBannerObject; // x23
  Il2CppObject *v22; // x26
  System_String_o *v23; // x0
  System_String_o *v24; // x27
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_GameObject_o *v27; // x28
  NetworkManager_c *v28; // x0
  int64_t userIdNumber; // x23
  int32_t v30; // w29
  int32_t num; // w23
  bool v32; // w23
  System_Action_int__o *v33; // x25
  System_Collections_Generic_List_object__o *objectList; // x23
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass *v43; // x1
  Il2CppClass **v44; // x0
  int32_t v45; // [xsp+Ch] [xbp-84h]
  UserGachaMaster_o *Master_object; // [xsp+10h] [xbp-80h]
  UnityEngine_Transform_o *parent; // [xsp+18h] [xbp-78h]
  int v48; // [xsp+24h] [xbp-6Ch]
  UserGachaEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_596CB25 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_VaildGachaInfo___);
    sub_2213A60(&System_Func_VaildGachaInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SummonListDialog_OnClickBanner__);
    sub_2213A60(&Method_SummonListDialog___c__DisplayClass12_0__CreateBanner_b__0__);
    sub_2213A60(&SummonListDialog___c__DisplayClass12_0_TypeInfo);
    sub_2213A60(&StringLiteral_21583/*"img_summon_mini_"*/);
    byte_596CB25 = 1;
  }
  entity = 0;
  v11 = sub_2213CCC(SummonListDialog___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_48;
  v15 = DataManager_TypeInfo;
  v16 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v11 + 16) = currentSummonListGroupId;
  if ( !v16 )
    j_il2cpp_runtime_class_init_0(v15, v13, v14);
  Master_object = (UserGachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_VaildGachaInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_SummonListDialog___c__DisplayClass12_0__CreateBanner_b__0__,
    0);
  if ( System_Linq_Enumerable__Count_object__59223900(
         (System_Collections_Generic_IEnumerable_TSource__o *)dispGachaList,
         (System_Func_TSource__bool__o *)v17,
         (const MethodInfo_387AF5C *)Method_System_Linq_Enumerable_Count_VaildGachaInfo___) >= 21 )
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
    sub_2213CDC(listRoot, v13);
  if ( currentIndex + 1 <= vaildGachaCount )
    v18 = 0;
  else
    v18 = vaildGachaCount;
  v45 = v18;
  if ( dispGachaList->fields._size >= 1 )
  {
    v48 = 0;
    v19 = 0;
    while ( 1 )
    {
      listRoot = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)dispGachaList,
                   v19,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !listRoot )
        goto LABEL_48;
      if ( *((_DWORD *)listRoot + 26) == *(_DWORD *)(v11 + 16) )
      {
        summonBannerObject = (Il2CppObject *)this->fields.summonBannerObject;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v20);
        v22 = UnityEngine_Object__Instantiate_object__59717116(
                summonBannerObject,
                parent,
                (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_SummonBannerIconComponent___);
        listRoot = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)dispGachaList,
                     v19,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !listRoot )
          goto LABEL_48;
        v23 = System_Int32__ToString((int)listRoot + 40, 0);
        listRoot = System_String__Concat_75651716((System_String_o *)StringLiteral_21583/*"img_summon_mini_"*/, v23, 0);
        if ( !this->fields.summonControl )
          goto LABEL_48;
        v24 = (System_String_o *)listRoot;
        v27 = SummonControl__searchBannerImg(this->fields.summonControl, (System_String_o *)listRoot, 0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25, v26);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        v28 = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25, v26);
          v28 = NetworkManager_TypeInfo;
        }
        userIdNumber = v28->static_fields->userIdNumber;
        listRoot = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)dispGachaList,
                     v19,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !listRoot || !Master_object )
          goto LABEL_48;
        v30 = v45 + v19 - v48;
        if ( !UserGachaMaster__TryGetEntity(Master_object, &entity, userIdNumber, *((_DWORD *)listRoot + 4), 0) )
          goto LABEL_37;
        listRoot = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)dispGachaList,
                     v19,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !listRoot )
          goto LABEL_48;
        if ( *((int *)listRoot + 28) < 1 )
          goto LABEL_37;
        if ( !entity )
          goto LABEL_48;
        num = entity->fields.num;
        listRoot = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)dispGachaList,
                     v19,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !listRoot )
          goto LABEL_48;
        if ( num >= *((_DWORD *)listRoot + 28) )
        {
          v30 = -1;
          v32 = 1;
          ++v48;
        }
        else
        {
LABEL_37:
          v32 = 0;
        }
        v33 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v33, (Il2CppObject *)this, (intptr_t)Method_SummonListDialog_OnClickBanner__, 0);
        if ( !v22 )
          goto LABEL_48;
        SummonBannerIconComponent__SetInfo((SummonBannerIconComponent_o *)v22, v30, v24, v32, v27, v33, 0);
        objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
        listRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
        if ( !objectList )
          goto LABEL_48;
        items = objectList->fields._items;
        ++objectList->fields._version;
        if ( !items )
          goto LABEL_48;
        size = objectList->fields._size;
        v43 = (Il2CppClass *)listRoot;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            objectList,
            (Il2CppObject *)listRoot,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_GameObject__Add__
                                                       + 4)
                                                     + 192LL)
                                         + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          objectList->fields._size = size + 1;
          v44[4] = v43;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v43, v35, v36, v37, v38, v39, v40);
        }
      }
      if ( ++v19 >= dispGachaList->fields._size )
        return;
    }
  }
}


void SummonListDialog__Init(SummonListDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *titleLabel; // x20
  void *v7; // x0
  __int64 v8; // x1
  UILabel_o *messageLabel; // x20
  __int64 v10; // x2
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  struct SummonListDialog___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__11_0; // x21
  Il2CppObject *v14; // x22
  struct SummonListDialog___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Collections_Generic_List_GameObject__o *v22; // x8
  int32_t size; // w2
  int v24; // w9

  if ( (byte_596CB24 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SummonListDialog___c__Init_b__11_0__);
    sub_2213A60(&SummonListDialog___c_TypeInfo);
    sub_2213A60(&StringLiteral_16261/*"Window/CloseButton"*/);
    sub_2213A60(&StringLiteral_12979/*"SUMMON_LIST_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12981/*"SUMMON_LIST_DIALOG_TITLE"*/);
    byte_596CB24 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackKeyTarget_51986024(transform, (System_String_o *)StringLiteral_16261/*"Window/CloseButton"*/, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12981/*"SUMMON_LIST_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)v7, 0);
  messageLabel = this->fields.messageLabel;
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12979/*"SUMMON_LIST_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_18;
  UILabel__set_text(messageLabel, (System_String_o *)v7, 0);
  v7 = SummonListDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&SummonListDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonListDialog___c_TypeInfo, v8, v10);
    v7 = SummonListDialog___c_TypeInfo;
  }
  static_fields = (struct SummonListDialog___c_StaticFields *)*((_QWORD *)v7 + 23);
  _9__11_0 = (System_Action_object__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*((_DWORD *)v7 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v7, v8, v10);
      static_fields = SummonListDialog___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__11_0, v14, Method_SummonListDialog___c__Init_b__11_0__, 0);
    v15 = SummonListDialog___c_TypeInfo->static_fields;
    v15->__9__11_0 = (struct System_Action_GameObject__o *)_9__11_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__11_0, (int32_t)_9__11_0, v16, v17, v18, v19, v20, v21);
  }
  if ( !objectList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Action_T__o *)_9__11_0,
          (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        (v22 = this->fields.objectList) == 0) )
  {
LABEL_18:
    sub_2213CDC(v7, v8);
  }
  size = v22->fields._size;
  v24 = v22->fields._version + 1;
  v22->fields._size = 0;
  v22->fields._version = v24;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SummonListDialog__OnClickBanner(SummonListDialog_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *bannerLoopCtr; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct SummonControl_o *summonControl; // x8
  struct SummonControl_o *v15; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0

  if ( (byte_596CB27 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SummonListDialog_OnClickBanner__);
    sub_2213A60(&Method_SummonListDialog___c__DisplayClass14_0__OnClickBanner_b__0__);
    sub_2213A60(&SummonListDialog___c__DisplayClass14_0_TypeInfo);
    byte_596CB27 = 1;
  }
  v5 = sub_2213CCC(SummonListDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  summonControl = this->fields.summonControl;
  *(_DWORD *)(v5 + 24) = index;
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
            v16 = (_QWORD *)sub_2213A78(Method_SummonListDialog_OnClickBanner__);
          v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
          v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
      sub_2213CDC(bannerLoopCtr, v7);
    }
  }
  v20 = Method_SummonListDialog_OnClickBanner__;
  if ( (*((_BYTE *)Method_SummonListDialog_OnClickBanner__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_2213A78(Method_SummonListDialog_OnClickBanner__);
  v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
}


void SummonListDialog__OnClickClose(SummonListDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596CB2A & 1) == 0 )
  {
    sub_2213A60(&Method_SummonListDialog_OnClickClose__);
    byte_596CB2A = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SummonListDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SummonListDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SummonListDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596CB28 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SummonListDialog__Open_b__15_0__);
    byte_596CB28 = 1;
  }
  SummonListDialog__CreateBanner(this, currentIndex, currentSummonListGroupId, vaildGachaCount, dispGachaList, method);
  SummonListDialog__RepositionBanner(this, v11);
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonListDialog__Open_b__15_0__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v12, 0, 0);
}


void SummonListDialog__RepositionBanner(SummonListDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonListDialog_o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  struct UIGrid_o *listRoot; // x9
  float size; // s8
  float maxPerLine; // s9
  float v8; // s8
  unsigned int v9; // w9
  struct UIGrid_o *v10; // x8
  signed int v11; // w22
  struct UIGrid_o *v12; // x8
  float v13; // s0
  float v14; // s1
  int v15; // w25
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
  float cellHeight; // s12
  float cellWidth; // s13
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_596CB26 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (SummonListDialog_o *)sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_596CB26 = 1;
  }
  objectList = v3->fields.objectList;
  if ( !objectList )
    goto LABEL_35;
  listRoot = v3->fields.listRoot;
  if ( !listRoot )
    goto LABEL_35;
  size = (float)objectList->fields._size;
  maxPerLine = (float)listRoot->fields.maxPerLine;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  v8 = size / maxPerLine;
  this = (SummonListDialog_o *)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  v9 = vcvtps_s32_f32(v8);
  v10 = v3->fields.listRoot;
  v11 = ceilf(v8) == INFINITY ? 0x80000000 : v9;
  if ( !v10 )
    goto LABEL_35;
  GameObjectExtensions__SetLocalPositionY(
    v3->fields.centerRoot,
    (float)(v10->fields.cellHeight * 0.5) * (float)(v11 - 1),
    0);
  v12 = v3->fields.listRoot;
  if ( !v12 )
    goto LABEL_35;
  LODWORD(v13) = *(_QWORD *)&NGUIMath__GetPivotOffset(v12->fields.pivot, 0);
  if ( v11 >= 1 )
  {
    v14 = 1.0;
    v15 = 0;
    if ( v13 <= 1.0 )
      v14 = v13;
    if ( v13 >= 0.0 )
      v16 = v14;
    else
      v16 = 0.0;
    while ( 1 )
    {
      v17 = v3->fields.listRoot;
      if ( !v17 )
        goto LABEL_35;
      this = (SummonListDialog_o *)v3->fields.objectList;
      if ( !this )
        goto LABEL_35;
      v18 = v17->fields.maxPerLine;
      v19 = LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15 >= v18
          ? v18
          : LODWORD(this->fields.m_CancellationTokenSource) - v18 * v15;
      this = (SummonListDialog_o *)System_Collections_Generic_List_object___GetRange(
                                     (System_Collections_Generic_List_object__o *)this,
                                     v18 * v15,
                                     v19,
                                     (const MethodInfo_4484814 *)Method_System_Collections_Generic_List_GameObject__GetRange__);
      if ( !this )
        goto LABEL_35;
      v20 = v3->fields.listRoot;
      if ( !v20 )
        goto LABEL_35;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      v22 = (System_Collections_Generic_List_object__o *)this;
      v23 = __OFSUB__(m_CancellationTokenSource, 1);
      v24 = m_CancellationTokenSource - 1;
      if ( v24 < 0 == v23 )
        break;
LABEL_33:
      if ( ++v15 == v11 )
        return;
    }
    v25 = 0;
    v26 = (float)(v16 * (float)(v20->fields.cellWidth * (float)v24)) + 0.0;
    while ( 1 )
    {
      this = (SummonListDialog_o *)System_Collections_Generic_List_object___get_Item(
                                     v22,
                                     v25,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      v27 = v3->fields.listRoot;
      if ( !v27 )
        break;
      if ( !this )
        break;
      cellWidth = v27->fields.cellWidth;
      cellHeight = v27->fields.cellHeight;
      this = (SummonListDialog_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        break;
      v30.fields.y = -(float)(cellHeight * (float)v15);
      v30.fields.z = 0.0;
      v30.fields.x = (float)(cellWidth * (float)v25) - v26;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0);
      if ( ++v25 >= v22->fields._size )
        goto LABEL_33;
    }
LABEL_35:
    sub_2213CDC(this, method);
  }
}


void SummonListDialog___Open_b__15_0(SummonListDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonListDialog___c_c *v4; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  struct SummonListDialog___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__15_1; // x20
  Il2CppObject *v8; // x21
  struct SummonListDialog___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596CB2C & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_2213A60(&Method_SummonListDialog___c__Open_b__15_1__);
    sub_2213A60(&SummonListDialog___c_TypeInfo);
    byte_596CB2C = 1;
  }
  v4 = SummonListDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&SummonListDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonListDialog___c_TypeInfo, method, v2);
    v4 = SummonListDialog___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__15_1 = (System_Action_object__o *)static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = SummonListDialog___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__15_1 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__15_1, v8, Method_SummonListDialog___c__Open_b__15_1__, 0);
    v9 = SummonListDialog___c_TypeInfo->static_fields;
    v9->__9__15_1 = (struct System_Action_GameObject__o *)_9__15_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__15_1, (int32_t)_9__15_1, v10, v11, v12, v13, v14, v15);
  }
  if ( !objectList )
    sub_2213CDC(v4, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__15_1,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void SummonListDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CB2D & 1) == 0 )
  {
    sub_2213A60(&SummonListDialog___c_TypeInfo);
    byte_596CB2D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SummonListDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonListDialog___c_TypeInfo->static_fields->__9 = (struct SummonListDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SummonListDialog___c_TypeInfo->static_fields,
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
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_596CB2E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CB2E = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)obj, 0);
  }
}


void SummonListDialog___c___Open_b__15_1(
        SummonListDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_596CB2F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CB2F = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v4 )
  {
    if ( !obj )
      sub_2213CDC(v4, v5);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(0, method);
  SummonListDialog__Init(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}