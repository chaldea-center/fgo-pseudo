void BranchSkillLabelComponent___ctor(BranchSkillLabelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BranchSkillLabelComponent__Awake(BranchSkillLabelComponent_o *this, const MethodInfo *method)
{
  ;
}


void BranchSkillLabelComponent__SetActive(BranchSkillLabelComponent_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


void BranchSkillLabelComponent__SetData(
        BranchSkillLabelComponent_o *this,
        int32_t buffId,
        System_String_o *detailText,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *buffIcon; // x22
  bool v9; // w1

  if ( (byte_4C4672F & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    byte_4C4672F = 1;
  }
  BranchSkillLabelComponent__SetActive(this, 1, (const MethodInfo *)detailText);
  buffIcon = this->fields.buffIcon;
  if ( buffId )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetSBuffIcon(buffIcon, buffId, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.buffIcon;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        v9 = 1;
        goto LABEL_12;
      }
    }
LABEL_14:
    sub_1C372B4(gameObject);
  }
  if ( !buffIcon )
    goto LABEL_14;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)this->fields.buffIcon,
                                            0);
  if ( !gameObject )
    goto LABEL_14;
  v9 = 0;
LABEL_12:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.label;
  if ( !gameObject )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)gameObject, detailText, 0);
}