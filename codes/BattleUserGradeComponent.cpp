void __fastcall BattleUserGradeComponent___ctor(BattleUserGradeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleUserGradeComponent__Initialize(BattleUserGradeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t Kind; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  struct UISprite_o *masterIconBg; // x20
  System_String_o *v8; // x19
  UIAtlas_o *mAtlas; // x21

  if ( (byte_4187545 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Grade_TypeInfo, v3);
    byte_4187545 = 1;
  }
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  if ( !Kind )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.gradeComp;
  if ( !gameObject )
    goto LABEL_18;
  UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind, 0LL);
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)Grade__GetBattleIconBgImage(Kind, 0LL);
  masterIconBg = this->fields.masterIconBg;
  if ( !masterIconBg )
LABEL_18:
    sub_B2C434(gameObject, v6);
  v8 = (System_String_o *)gameObject;
  mAtlas = masterIconBg->fields.mAtlas;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon_28434816(masterIconBg, v8, mAtlas, 0LL);
}