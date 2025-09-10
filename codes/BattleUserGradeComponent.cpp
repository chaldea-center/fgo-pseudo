void BattleUserGradeComponent___ctor(BattleUserGradeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleUserGradeComponent__Initialize(BattleUserGradeComponent_o *this, const MethodInfo *method)
{
  int32_t Kind; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  struct UISprite_o *masterIconBg; // x20
  System_String_o *v7; // x19
  UIAtlas_o *mAtlas; // x21

  if ( (byte_4C2A005 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Grade_TypeInfo);
    byte_4C2A005 = 1;
  }
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  if ( !Kind )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.gradeComp;
  if ( !gameObject )
    goto LABEL_15;
  UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind, 0);
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)Grade__GetBattleIconBgImage(Kind, 0);
  masterIconBg = this->fields.masterIconBg;
  if ( !masterIconBg )
LABEL_15:
    sub_1C2D6EC(gameObject, v5);
  v7 = (System_String_o *)gameObject;
  mAtlas = masterIconBg->fields.mAtlas;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGradeIcon_40368204(masterIconBg, v7, mAtlas, 0);
}