void __fastcall EnemyScriptParam___ctor(EnemyScriptParam_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EnemyScriptParam_OverwriteShadowData___ctor(
        EnemyScriptParam_OverwriteShadowData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EnemyScriptParam_OverwriteShadowData__IsForceOverwrite(
        EnemyScriptParam_OverwriteShadowData_o *this,
        const MethodInfo *method)
{
  return !this->fields.battleBgId && this->fields.battleBgType == 0;
}


bool __fastcall EnemyScriptParam_OverwriteShadowData__IsMatchBg(
        EnemyScriptParam_OverwriteShadowData_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  if ( !*(_QWORD *)&this->fields.battleBgId )
    return 1;
  if ( this->fields.battleBgId == id )
    return this->fields.battleBgType == type;
  return 0;
}


bool __fastcall EnemyScriptParam_OverwriteShadowData__get_IsHideShadow(
        EnemyScriptParam_OverwriteShadowData_o *this,
        const MethodInfo *method)
{
  return this->fields.isHideShadow == 1;
}


int32_t __fastcall EnemyScriptParam_OverwriteShadowData__get_ShadowImageId(
        EnemyScriptParam_OverwriteShadowData_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowImageId;
}


int32_t __fastcall EnemyScriptParam_OverwriteShadowData__get_SpecialShadowEffectId(
        EnemyScriptParam_OverwriteShadowData_o *this,
        const MethodInfo *method)
{
  return this->fields.specialShadowEffectId;
}


void __fastcall EnemyScriptParam_OverwriteShiftIcon___ctor(
        EnemyScriptParam_OverwriteShiftIcon_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EnemyScriptParam_OverwriteShiftIcon__get_ImageNo(
        EnemyScriptParam_OverwriteShiftIcon_o *this,
        const MethodInfo *method)
{
  return this->fields.imageNo;
}


int32_t __fastcall EnemyScriptParam_OverwriteShiftIcon__get_ImageType(
        EnemyScriptParam_OverwriteShiftIcon_o *this,
        const MethodInfo *method)
{
  return this->fields.imageType;
}


int32_t __fastcall EnemyScriptParam_OverwriteShiftIcon__get_Index(
        EnemyScriptParam_OverwriteShiftIcon_o *this,
        const MethodInfo *method)
{
  return this->fields.index;
}