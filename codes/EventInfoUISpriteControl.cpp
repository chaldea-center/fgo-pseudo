void __fastcall EventInfoUISpriteControl__Initialization(
        EventInfoUISpriteControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoUISpriteControl_o *v4; // x19
  UISprite_o *mainSprite; // x20
  System_String_o *v6; // x21

  v4 = this;
  if ( (byte_4A0AE19 & 1) == 0 )
  {
    this = (EventInfoUISpriteControl_o *)sub_1B686D4(&AtlasManager_TypeInfo, entity);
    byte_4A0AE19 = 1;
  }
  if ( !entity )
    goto LABEL_8;
  mainSprite = v4->fields.mainSprite;
  v6 = System_Int32__ToString((int)entity + 52, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(mainSprite, v6, 0LL);
  this = (EventInfoUISpriteControl_o *)v4->fields.mainSprite;
  if ( !this )
LABEL_8:
    sub_1B68930(this, entity);
  (*(void (__fastcall **)(EventInfoUISpriteControl_o *, _QWORD))&this->klass[1]._2.field_count)(
    this,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
}