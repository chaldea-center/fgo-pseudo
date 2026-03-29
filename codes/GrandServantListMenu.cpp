void GrandServantListMenu___ctor(GrandServantListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListMenu__Initialize(
        GrandServantListMenu_o *this,
        PlayMakerFSM_o *fsm,
        int8_t displayKind,
        const MethodInfo *method)
{
  unsigned int v4; // w19
  struct GrandServantListMenuLayout_o **p_menu; // x22
  UnityEngine_Object_o *menu; // x23
  AssetData_o *AssetStorage; // x0
  __int64 v10; // x1
  System_String_o **v11; // x8
  Il2CppObject *Object_object__51927708; // x23
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  v4 = displayKind;
  if ( (byte_4D2B616 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_GrandServantListMenuLayout___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_7200/*"GrandServantListMenuLayoutSupport"*/);
    sub_1C93AD4(&StringLiteral_7197/*"GrandServantList"*/);
    sub_1C93AD4(&StringLiteral_7199/*"GrandServantListMenuLayout"*/);
    byte_4D2B616 = 1;
  }
  p_menu = &this->fields.menu;
  menu = (UnityEngine_Object_o *)this->fields.menu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(menu, 0, 0) )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7197/*"GrandServantList"*/, 0);
    if ( !AssetStorage )
      goto LABEL_16;
    v11 = (System_String_o **)&StringLiteral_7199/*"GrandServantListMenuLayout"*/;
    if ( (_BYTE)v4 )
      v11 = (System_String_o **)&StringLiteral_7200/*"GrandServantListMenuLayoutSupport"*/;
    Object_object__51927708 = AssetData__GetObject_object__51927708(
                                AssetStorage,
                                *v11,
                                (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object__52629400(
                                    Object_object__51927708,
                                    transform,
                                    (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    if ( !AssetStorage
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)AssetStorage,
                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_GrandServantListMenuLayout___),
          *p_menu = (struct GrandServantListMenuLayout_o *)Component_object,
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.menu,
            (int32_t)Component_object,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20),
          (AssetStorage = (AssetData_o *)*p_menu) == 0) )
    {
LABEL_16:
      sub_1C93D2C(AssetStorage, v10);
    }
    ((void (__fastcall *)(AssetData_o *, PlayMakerFSM_o *, struct GrandServantListItemDraw_o *, _QWORD, void *))AssetStorage->klass[1]._1.image)(
      AssetStorage,
      fsm,
      this->fields.itemPrefab,
      v4,
      AssetStorage->klass[1]._1.gc_desc);
  }
}


void GrandServantListMenu__Modify(
        GrandServantListMenu_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  struct GrandServantListMenuLayout_o *menu; // x0

  menu = this->fields.menu;
  if ( !menu )
    sub_1C93D2C(0, grandServantListData);
  ((void (__fastcall *)(struct GrandServantListMenuLayout_o *, GrandServantListData_o *, const MethodInfo *))menu->klass->vtable._6_UpdateView.methodPtr)(
    menu,
    grandServantListData,
    menu->klass->vtable._6_UpdateView.method);
}


void GrandServantListMenu__Open(
        GrandServantListMenu_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  struct GrandServantListMenuLayout_o *menu; // x0

  menu = this->fields.menu;
  if ( !menu )
    sub_1C93D2C(0, grandServantListData);
  ((void (__fastcall *)(struct GrandServantListMenuLayout_o *, GrandServantListData_o *, const MethodInfo *))menu->klass->vtable._6_UpdateView.methodPtr)(
    menu,
    grandServantListData,
    menu->klass->vtable._6_UpdateView.method);
}


void GrandServantListMenu__Release(GrandServantListMenu_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_menu; // x19
  UnityEngine_Object_o *v4; // x20
  struct GrandServantListMenuLayout_o *menu; // t1
  __int64 v6; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2B617 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B617 = 1;
  }
  menu = this->fields.menu;
  p_menu = (GrandQuestFolderBoardItem_o *)&this->fields.menu;
  v4 = (UnityEngine_Object_o *)menu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Component_o *)p_menu->klass;
    if ( !p_menu->klass
      || (((void (__fastcall *)(UnityEngine_Component_o *, const char *))klass->klass[1]._1.name)(
            klass,
            klass->klass[1]._1.namespaze),
          (klass = (UnityEngine_Component_o *)p_menu->klass) == 0) )
    {
      sub_1C93D2C(klass, v6);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    p_menu->klass = 0;
    sub_1C93A78(p_menu, 0, v9, v10, v11, v12, v13, v14);
  }
}


void GrandServantListMenu__SetItemSlotActive(GrandServantListMenu_o *this, bool value, const MethodInfo *method)
{
  GrandServantListMenuLayout_o *menu; // x0

  menu = this->fields.menu;
  if ( !menu )
    sub_1C93D2C(0, value);
  GrandServantListMenuLayout__SetItemSlotActive(menu, value, method);
}