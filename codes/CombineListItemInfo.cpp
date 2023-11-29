void __fastcall CombineListItemInfo___ctor(
        CombineListItemInfo_o *this,
        int32_t kind,
        int32_t type,
        System_String_o *spriteName,
        System_String_o *eventData,
        const MethodInfo *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.kind = kind;
  this->fields.type = type;
  this->fields.spriteName = spriteName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.spriteName,
    (System_Int32_array **)spriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.eventData = eventData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventData,
    (System_Int32_array **)eventData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}