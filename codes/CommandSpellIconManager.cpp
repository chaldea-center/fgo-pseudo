void __fastcall CommandSpellIconManager___ctor(CommandSpellIconManager_o *this, const MethodInfo *method)
{
  if ( (byte_4188141 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommandSpellIconManager___ctor__, method);
    byte_4188141 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_CommandSpellIconManager___ctor__);
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
    sub_B2C434(this, 0LL);
  SpellImageId = UserGameEntity__get_SpellImageId(dat, 0LL);
  CommandSpell = UserGameEntity__getCommandSpell(dat, 0LL);
  return CommandSpellIconManager__Create_25908608(this, SpellImageId, CommandSpell, width, height, v11);
}


// local variable allocation has failed, the output may be wrong!
CommandSpellIconComponent_o *__fastcall CommandSpellIconManager__Create_25908608(
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
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  CommandSpellIconComponent_o *v17; // x23
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4

  if ( (byte_4188140 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommandSpellIconComponent___, *(_QWORD *)&imageType);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_4188140 = 1;
  }
  commandSpellPrefab = this->fields.commandSpellPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)commandSpellPrefab,
                                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite
    || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                Component_srcLineSprite,
                                                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommandSpellIconComponent___)) == 0LL )
  {
    sub_B2C434(Component_srcLineSprite, v15);
  }
  v17 = (CommandSpellIconComponent_o *)Component_srcLineSprite;
  CommandSpellIconComponent__SetImageType((CommandSpellIconComponent_o *)Component_srcLineSprite, imageType, v16);
  CommandSpellIconComponent__SetRemain(v17, remain, v18);
  v21.fields.x = (float)width;
  v21.fields.y = (float)height;
  CommandSpellIconComponent__SetSize(v17, v21, v19);
  return v17;
}