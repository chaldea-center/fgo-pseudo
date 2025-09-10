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
  Il2CppObject *Object_object__51051712; // x23
  UnityEngine_Transform_o *transform; // x24

  v4 = displayKind;
  if ( (byte_4C220DF & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_GrandServantListMenuLayout___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_7157/*"GrandServantListMenuLayoutSupport"*/);
    sub_1C2D490(&StringLiteral_7154/*"GrandServantList"*/);
    sub_1C2D490(&StringLiteral_7156/*"GrandServantListMenuLayout"*/);
    byte_4C220DF = 1;
  }
  p_menu = &this->fields.menu;
  menu = (UnityEngine_Object_o *)this->fields.menu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(menu, 0, 0) )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7154/*"GrandServantList"*/, 0);
    if ( !AssetStorage )
      goto LABEL_16;
    v11 = (System_String_o **)&StringLiteral_7156/*"GrandServantListMenuLayout"*/;
    if ( (_BYTE)v4 )
      v11 = (System_String_o **)&StringLiteral_7157/*"GrandServantListMenuLayoutSupport"*/;
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                AssetStorage,
                                *v11,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object__51752420(
                                    Object_object__51051712,
                                    transform,
                                    (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    if ( !AssetStorage
      || (*p_menu = (struct GrandServantListMenuLayout_o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)AssetStorage,
                                                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_GrandServantListMenuLayout___),
          sub_1C2D434(&this->fields.menu),
          (AssetStorage = (AssetData_o *)*p_menu) == 0) )
    {
LABEL_16:
      sub_1C2D6EC(AssetStorage, v10);
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
    sub_1C2D6EC(0, grandServantListData);
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
    sub_1C2D6EC(0, grandServantListData);
  ((void (__fastcall *)(struct GrandServantListMenuLayout_o *, GrandServantListData_o *, const MethodInfo *))menu->klass->vtable._6_UpdateView.methodPtr)(
    menu,
    grandServantListData,
    menu->klass->vtable._6_UpdateView.method);
}


void GrandServantListMenu__Release(GrandServantListMenu_o *this, const MethodInfo *method)
{
  struct GrandServantListMenuLayout_o **p_menu; // x19
  UnityEngine_Object_o *v4; // x20
  struct GrandServantListMenuLayout_o *menu; // t1
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4C220E0 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C220E0 = 1;
  }
  menu = this->fields.menu;
  p_menu = &this->fields.menu;
  v4 = (UnityEngine_Object_o *)menu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)*p_menu;
    if ( !*p_menu
      || (((void (__fastcall *)(UnityEngine_Component_o *, const char *))v7->klass[1]._1.name)(
            v7,
            v7->klass[1]._1.namespaze),
          (v7 = (UnityEngine_Component_o *)*p_menu) == 0) )
    {
      sub_1C2D6EC(v7, v6);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
    *p_menu = 0;
    sub_1C2D434(p_menu);
  }
}


void GrandServantListMenu__SetItemSlotActive(GrandServantListMenu_o *this, bool value, const MethodInfo *method)
{
  GrandServantListMenuLayout_o *menu; // x0

  menu = this->fields.menu;
  if ( !menu )
    sub_1C2D6EC(0, value);
  GrandServantListMenuLayout__SetItemSlotActive(menu, value, method);
}