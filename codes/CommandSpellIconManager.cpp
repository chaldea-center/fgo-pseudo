void __fastcall CommandSpellIconManager___ctor(CommandSpellIconManager_o *this, const MethodInfo *method)
{
  if ( (byte_421089A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommandSpellIconManager___ctor__, method);
    byte_421089A = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_CommandSpellIconManager___ctor__);
}


CommandSpellIconComponent_o *__fastcall CommandSpellIconManager__Create(
        CommandSpellIconManager_o *this,
        UserGameEntity_o *dat,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  int32_t SpellImageId; // w23
  int32_t CommandSpell; // w2
  const MethodInfo *v11; // x5

  if ( !dat )
    sub_B0D97C(this);
  SpellImageId = UserGameEntity__get_SpellImageId(dat, 0LL);
  CommandSpell = UserGameEntity__getCommandSpell(dat, 0LL);
  return CommandSpellIconManager__Create_16923356(this, SpellImageId, CommandSpell, width, height, v11);
}


// local variable allocation has failed, the output may be wrong!
CommandSpellIconComponent_o *__fastcall CommandSpellIconManager__Create_16923356(
        CommandSpellIconManager_o *this,
        int32_t imageType,
        int32_t remain,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  struct UnityEngine_GameObject_o *commandSpellPrefab; // x23
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  CommandSpellIconComponent_o *v15; // x23
  UnityEngine_Vector2_o v17; // 0:s0.4,4:s1.4

  if ( (byte_4210899 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommandSpellIconComponent___, *(_QWORD *)&imageType);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4210899 = 1;
  }
  commandSpellPrefab = this->fields.commandSpellPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandSpellPrefab,
                                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Component_srcLineSprite,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommandSpellIconComponent___)) == 0LL )
  {
    sub_B0D97C(Component_srcLineSprite);
  }
  v15 = (CommandSpellIconComponent_o *)Component_srcLineSprite;
  CommandSpellIconComponent__SetImageType((CommandSpellIconComponent_o *)Component_srcLineSprite, imageType, 0LL);
  CommandSpellIconComponent__SetRemain(v15, remain, 0LL);
  v17.fields.x = (float)width;
  v17.fields.y = (float)height;
  CommandSpellIconComponent__SetSize(v15, v17, 0LL);
  return v15;
}