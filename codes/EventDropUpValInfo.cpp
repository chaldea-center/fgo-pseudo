void __fastcall EventDropUpValInfo___ctor(
        EventDropUpValInfo_o *this,
        int32_t eventId,
        FunctionEntity_o *funcEntity,
        const MethodInfo *method)
{
  EventDropUpValInfo_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.funcEntity = funcEntity;
  v6 = (EventDropUpValInfo_o *)((char *)v6 + 24);
  *(_DWORD *)&v6[-1].fields.isInvalid = eventId;
  sub_B2C2F8((BattleServantConfConponent_o *)v6, (System_Int32_array **)funcEntity, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = 0;
}


void __fastcall EventDropUpValInfo___ctor_29736828(
        EventDropUpValInfo_o *this,
        int32_t eventId,
        FunctionEntity_o *funcEntity,
        int32_t individuality,
        const MethodInfo *method)
{
  EventDropUpValInfo_o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.funcEntity = funcEntity;
  v8 = (EventDropUpValInfo_o *)((char *)v8 + 24);
  *(_DWORD *)&v8[-1].fields.isInvalid = eventId;
  sub_B2C2F8((BattleServantConfConponent_o *)v8, (System_Int32_array **)funcEntity, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = individuality;
}


int32_t __fastcall EventDropUpValInfo__GetFuncType(EventDropUpValInfo_o *this, const MethodInfo *method)
{
  struct FunctionEntity_o *funcEntity; // x8

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_B2C434(this, method);
  return funcEntity->fields.funcType;
}


void __fastcall EventDropUpValInfo__SetAddCount(
        EventDropUpValInfo_o *this,
        int32_t v,
        bool isEquipUp,
        bool isInvalid,
        const MethodInfo *method)
{
  this->fields.addCount = v;
  this->fields.isEquipUp = isEquipUp;
  this->fields.isInvalid = isInvalid;
}


void __fastcall EventDropUpValInfo__SetRateCount(
        EventDropUpValInfo_o *this,
        int32_t v,
        bool isEquipUp,
        bool isInvalid,
        const MethodInfo *method)
{
  this->fields.rateCount = v;
  this->fields.isEquipUp = isEquipUp;
  this->fields.isInvalid = isInvalid;
}