void BattleUserGradeComponent___ctor(BattleUserGradeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleUserGradeComponent__Initialize(BattleUserGradeComponent_o *this, const MethodInfo *method)
{
  int32_t Kind; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  struct UISprite_o *masterIconBg; // x20
  System_String_o *v8; // x19
  UIAtlas_o *mAtlas; // x21

  if ( (byte_593B5B8 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Grade_TypeInfo);
    byte_593B5B8 = 1;
  }
  if ( !*(&Grade_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
  Kind = Grade__GetKind(0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Kind )
  {
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      return;
    }
LABEL_16:
    sub_21FFECC(gameObject, v5);
  }
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.gradeComp;
  if ( !gameObject )
    goto LABEL_16;
  UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind, 0);
  if ( !*(&Grade_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, v6);
  gameObject = (UnityEngine_GameObject_o *)Grade__GetBattleIconBgImage(Kind, 0);
  masterIconBg = this->fields.masterIconBg;
  if ( !masterIconBg )
    goto LABEL_16;
  v8 = (System_String_o *)gameObject;
  mAtlas = masterIconBg->fields.mAtlas;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5);
  AtlasManager__SetGradeIcon_47520972(masterIconBg, v8, mAtlas, 0);
}