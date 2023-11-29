void __fastcall BattleUserGradeComponent___ctor(BattleUserGradeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleUserGradeComponent__Initialize(BattleUserGradeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t Kind; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UserGradeComponent_o *gradeComp; // x0
  System_String_o *BattleIconBgImage; // x0
  struct UISprite_o *masterIconBg; // x20
  System_String_o *v9; // x19
  UIAtlas_o *mAtlas; // x21

  if ( (byte_40F8FF6 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Grade_TypeInfo, v3);
    byte_40F8FF6 = 1;
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
  gradeComp = this->fields.gradeComp;
  if ( !gradeComp )
    goto LABEL_18;
  UserGradeComponent__Set(gradeComp, Kind, 0LL);
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  BattleIconBgImage = Grade__GetBattleIconBgImage(Kind, 0LL);
  masterIconBg = this->fields.masterIconBg;
  if ( !masterIconBg )
LABEL_18:
    sub_B170D4();
  v9 = BattleIconBgImage;
  mAtlas = masterIconBg->fields.mAtlas;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon_28568352(masterIconBg, v9, mAtlas, 0LL);
}