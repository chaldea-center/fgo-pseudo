void GrandServantListMenu___ctor(GrandServantListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListMenu__Initialize(
        GrandServantListMenu_o *this,
        PlayMakerFSM_o *fsm,
        int8_t displayKind,
        const MethodInfo *method)
{
  unsigned int v4; // w19
  struct GrandServantListMenuLayout_o **p_menu; // x22
  UnityEngine_Object_o *menu; // x23
  __int64 v9; // x1
  __int64 v10; // x2
  AssetData_o *AssetStorage; // x0
  __int64 v12; // x1
  System_String_o **v13; // x8
  Il2CppObject *Object_object__58532980; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *Component_object; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  v4 = displayKind;
  if ( (byte_596B339 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_GrandServantListMenuLayout___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_7460/*"GrandServantListMenuLayoutSupport"*/);
    sub_2213A60(&StringLiteral_7457/*"GrandServantList"*/);
    sub_2213A60(&StringLiteral_7459/*"GrandServantListMenuLayout"*/);
    byte_596B339 = 1;
  }
  p_menu = &this->fields.menu;
  menu = (UnityEngine_Object_o *)this->fields.menu;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, fsm, displayKind);
  if ( !UnityEngine_Object__op_Inequality(menu, 0, 0) )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9, v10);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7457/*"GrandServantList"*/, 0);
    if ( !AssetStorage )
      goto LABEL_16;
    v13 = (System_String_o **)&StringLiteral_7459/*"GrandServantListMenuLayout"*/;
    if ( (_BYTE)v4 )
      v13 = (System_String_o **)&StringLiteral_7460/*"GrandServantListMenuLayoutSupport"*/;
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                AssetStorage,
                                *v13,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object__59717116(
                                    Object_object__58532980,
                                    transform,
                                    (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    if ( !AssetStorage
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)AssetStorage,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_GrandServantListMenuLayout___),
          *p_menu = (struct GrandServantListMenuLayout_o *)Component_object,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.menu,
            (int32_t)Component_object,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24),
          (AssetStorage = (AssetData_o *)*p_menu) == 0) )
    {
LABEL_16:
      sub_2213CDC(AssetStorage, v12);
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
    sub_2213CDC(0, grandServantListData);
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
    sub_2213CDC(0, grandServantListData);
  ((void (__fastcall *)(struct GrandServantListMenuLayout_o *, GrandServantListData_o *, const MethodInfo *))menu->klass->vtable._6_UpdateView.methodPtr)(
    menu,
    grandServantListData,
    menu->klass->vtable._6_UpdateView.method);
}


void GrandServantListMenu__Release(GrandServantListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_menu; // x19
  UnityEngine_Object_o *v5; // x20
  struct GrandServantListMenuLayout_o *menu; // t1
  __int64 v7; // x1
  UnityEngine_Component_o *klass; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596B33A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B33A = 1;
  }
  menu = this->fields.menu;
  p_menu = (MissionNaviTransitionBoardItem_o *)&this->fields.menu;
  v5 = (UnityEngine_Object_o *)menu;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Component_o *)p_menu->klass;
    if ( !p_menu->klass
      || (((void (__fastcall *)(UnityEngine_Component_o *, const char *))klass->klass[1]._1.name)(
            klass,
            klass->klass[1]._1.namespaze),
          (klass = (UnityEngine_Component_o *)p_menu->klass) == 0) )
    {
      sub_2213CDC(klass, v7);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    p_menu->klass = 0;
    sub_2213A04(p_menu, 0, v12, v13, v14, v15, v16, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListMenu__SetItemSlotActive(GrandServantListMenu_o *this, bool value, const MethodInfo *method)
{
  GrandServantListMenuLayout_o *menu; // x0

  menu = this->fields.menu;
  if ( !menu )
    sub_2213CDC(0, value);
  GrandServantListMenuLayout__SetItemSlotActive(menu, value, method);
}