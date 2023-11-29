void __fastcall EventInfoUISpriteControl__Initialization(
        EventInfoUISpriteControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  UISprite_o *mainSprite; // x20
  System_String_o *v6; // x21
  struct UISprite_o *v7; // x0

  if ( (byte_40F8808 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, entity);
    byte_40F8808 = 1;
  }
  if ( !entity )
    goto LABEL_9;
  mainSprite = this->fields.mainSprite;
  v6 = System_Int32__ToString((int)entity + 52, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(mainSprite, v6, 0LL);
  v7 = this->fields.mainSprite;
  if ( !v7 )
LABEL_9:
    sub_B170D4();
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
    v7,
    v7->klass->vtable._34_get_minWidth.methodPtr);
}