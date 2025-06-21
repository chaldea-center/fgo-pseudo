void __fastcall GrandServantListMenu___ctor(GrandServantListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandServantListMenu__Initialize(
        GrandServantListMenu_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct GrandServantListMenuLayout_o **p_menu; // x21
  UnityEngine_Object_o *menu; // x22
  AssetData_o *AssetStorage; // x0
  __int64 v14; // x1
  Il2CppObject *Object_object__50315216; // x22
  UnityEngine_Transform_o *transform; // x23
  const MethodInfo *v17; // x3

  if ( (byte_4B173C3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, fsm);
    sub_1BCAFF8(&AssetManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_GrandServantListMenuLayout___, v6);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_7094/*"GrandServantList"*/, v9);
    sub_1BCAFF8(&StringLiteral_7096/*"GrandServantListMenuLayout"*/, v10);
    byte_4B173C3 = 1;
  }
  p_menu = &this->fields.menu;
  menu = (UnityEngine_Object_o *)this->fields.menu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(menu, 0LL, 0LL) )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7094/*"GrandServantList"*/, 0LL);
    if ( !AssetStorage )
      goto LABEL_14;
    Object_object__50315216 = AssetData__GetObject_object__50315216(
                                AssetStorage,
                                (System_String_o *)StringLiteral_7096/*"GrandServantListMenuLayout"*/,
                                (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__Instantiate_object__51002592(
                                    Object_object__50315216,
                                    transform,
                                    (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
    if ( !AssetStorage
      || (*p_menu = (struct GrandServantListMenuLayout_o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)AssetStorage,
                                                             (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_GrandServantListMenuLayout___),
          sub_1BCAF9C(&this->fields.menu),
          (AssetStorage = (AssetData_o *)*p_menu) == 0LL) )
    {
LABEL_14:
      sub_1BCB254(AssetStorage, v14);
    }
    GrandServantListMenuLayout__Initialize(
      (GrandServantListMenuLayout_o *)AssetStorage,
      fsm,
      this->fields.itemPrefab,
      v17);
  }
}


void __fastcall GrandServantListMenu__Modify(
        GrandServantListMenu_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  GrandServantListMenuLayout_o *menu; // x0

  menu = this->fields.menu;
  if ( !menu )
    sub_1BCB254(0LL, grandServantListData);
  GrandServantListMenuLayout__UpdateView(menu, grandServantListData, method);
}


void __fastcall GrandServantListMenu__Open(
        GrandServantListMenu_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  GrandServantListMenuLayout_o *menu; // x0

  menu = this->fields.menu;
  if ( !menu )
    sub_1BCB254(0LL, grandServantListData);
  GrandServantListMenuLayout__UpdateView(menu, grandServantListData, method);
}


void __fastcall GrandServantListMenu__Release(GrandServantListMenu_o *this, const MethodInfo *method)
{
  struct GrandServantListMenuLayout_o **p_menu; // x19
  UnityEngine_Object_o *v4; // x20
  struct GrandServantListMenuLayout_o *menu; // t1
  const MethodInfo *v6; // x1
  GrandServantListMenuLayout_o *v7; // x0
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B173C4 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B173C4 = 1;
  }
  menu = this->fields.menu;
  p_menu = &this->fields.menu;
  v4 = (UnityEngine_Object_o *)menu;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    v7 = *p_menu;
    if ( !*p_menu || (GrandServantListMenuLayout__Release(v7, v6), (v7 = *p_menu) == 0LL) )
      sub_1BCB254(v7, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
    *p_menu = 0LL;
    sub_1BCAF9C(p_menu);
  }
}


void __fastcall GrandServantListMenu__SetItemSlotActive(
        GrandServantListMenu_o *this,
        bool value,
        const MethodInfo *method)
{
  GrandServantListMenuLayout_o *menu; // x0

  menu = this->fields.menu;
  if ( !menu )
    sub_1BCB254(0LL, value);
  GrandServantListMenuLayout__SetItemSlotActive(menu, value, method);
}