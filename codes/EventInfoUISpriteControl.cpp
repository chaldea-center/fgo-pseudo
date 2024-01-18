void __fastcall EventInfoUISpriteControl__Initialization(
        EventInfoUISpriteControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoUISpriteControl_o *v4; // x19
  UISprite_o *mainSprite; // x20
  System_String_o *v6; // x21

  v4 = this;
  if ( (byte_4188D0E & 1) == 0 )
  {
    this = (EventInfoUISpriteControl_o *)sub_B2C35C(&AtlasManager_TypeInfo, entity);
    byte_4188D0E = 1;
  }
  if ( !entity )
    goto LABEL_9;
  mainSprite = v4->fields.mainSprite;
  v6 = System_Int32__ToString((int)entity + 52, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(mainSprite, v6, 0LL);
  this = (EventInfoUISpriteControl_o *)v4->fields.mainSprite;
  if ( !this )
LABEL_9:
    sub_B2C434(this, entity);
  (*(void (__fastcall **)(EventInfoUISpriteControl_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
    this,
    this->klass[1].vtable._0_Equals.methodPtr);
}