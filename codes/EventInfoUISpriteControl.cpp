void __fastcall EventInfoUISpriteControl__Initialization(
        EventInfoUISpriteControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoUISpriteControl_o *v5; // x19
  UISprite_o *mainSprite; // x20
  System_String_o *v7; // x21

  v5 = this;
  if ( (byte_42E9AC1 & 1) == 0 )
  {
    this = (EventInfoUISpriteControl_o *)sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E9AC1 = 1;
  }
  if ( !entity )
    goto LABEL_9;
  mainSprite = v5->fields.mainSprite;
  v7 = System_Int32__ToString((int)entity + 52, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(mainSprite, v7, 0LL);
  this = (EventInfoUISpriteControl_o *)v5->fields.mainSprite;
  if ( !this )
LABEL_9:
    sub_B5D69C(this, entity);
  (*(void (__fastcall **)(EventInfoUISpriteControl_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
    this,
    this->klass[1].vtable._0_Equals.methodPtr);
}