void __fastcall BattleUserGradeComponent___ctor(BattleUserGradeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleUserGradeComponent__Initialize(BattleUserGradeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t Kind; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  struct UISprite_o *masterIconBg; // x20
  System_String_o *v11; // x19
  UIAtlas_o *mAtlas; // x21

  if ( (byte_4B18A85 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Grade_TypeInfo, v4, v5);
    byte_4B18A85 = 1;
  }
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
  Kind = Grade__GetKind(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  if ( !Kind )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.gradeComp;
  if ( !gameObject )
    goto LABEL_15;
  UserGradeComponent__Set((UserGradeComponent_o *)gameObject, Kind, 0LL);
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, v9);
  gameObject = (UnityEngine_GameObject_o *)Grade__GetBattleIconBgImage(Kind, 0LL);
  masterIconBg = this->fields.masterIconBg;
  if ( !masterIconBg )
LABEL_15:
    sub_1BCAA3C(gameObject, v8);
  v11 = (System_String_o *)gameObject;
  mAtlas = masterIconBg->fields.mAtlas;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
  AtlasManager__SetGradeIcon_38558948(masterIconBg, v11, mAtlas, 0LL);
}