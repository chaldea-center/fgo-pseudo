void EquipGraphViewModeState___ctor(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  this->fields._topbtn_k__BackingField = 1;
  this->fields._btmbtn_k__BackingField = 1;
  this->fields._rarebtn_k__BackingField = 1;
  this->fields._atkbtn_k__BackingField = 1;
  this->fields._hpbtn_k__BackingField = 1;
  this->fields._namebtn_k__BackingField = 1;
  this->fields._allbtn_k__BackingField = 1;
  this->fields.AutoPlayInterval = 5.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EquipGraphViewModeState__AutoPlayView(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t AutoPlayMode; // w8
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_c *v6; // x0
  int v7; // w9
  UIEquipGraphV_o *uiEquipGraphV; // x0
  int32_t v9; // w1

  if ( (byte_596DC42 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2612/*"AutoPlayView"*/);
    byte_596DC42 = 1;
  }
  AutoPlayMode = this->fields.AutoPlayMode;
  if ( AutoPlayMode == 2 )
  {
    uiEquipGraphV = this->fields.uiEquipGraphV;
    this->fields.AutoPlayMode = 3;
    if ( uiEquipGraphV )
    {
      v9 = 1;
      goto LABEL_16;
    }
LABEL_21:
    sub_2213CDC(uiEquipGraphV, method);
  }
  if ( AutoPlayMode == 1 )
  {
    uiEquipGraphV = this->fields.uiEquipGraphV;
    this->fields._rotbtn_k__BackingField = 0;
    this->fields.AutoPlayMode = 2;
    if ( uiEquipGraphV )
    {
      UIEquipGraphV__SetRotateButton(uiEquipGraphV, 0, 0);
LABEL_17:
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_2612/*"AutoPlayView"*/,
        this->fields.AutoPlayInterval,
        0);
      return;
    }
    goto LABEL_21;
  }
  if ( AutoPlayMode )
  {
    uiEquipGraphV = (UIEquipGraphV_o *)this->fields.scriptManager;
    if ( !uiEquipGraphV )
      goto LABEL_21;
    ScriptManager__OnClickFowardView((ScriptManager_o *)uiEquipGraphV, 0);
  }
  else
  {
    v5 = (UnityEngine_Object_o *)this->fields.uiEquipGraphV;
    v6 = UnityEngine_Object_TypeInfo;
    this->fields.AutoPlayMode = 1;
    v7 = *(&v6->_2.cctor_finished + 1);
    this->fields._rotbtn_k__BackingField = 1;
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(v6, method, v2);
    if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
    {
      uiEquipGraphV = this->fields.uiEquipGraphV;
      if ( uiEquipGraphV )
      {
        UIEquipGraphV__SetRotateButton(uiEquipGraphV, 0, 0);
        uiEquipGraphV = this->fields.uiEquipGraphV;
        if ( uiEquipGraphV )
        {
          v9 = 2;
LABEL_16:
          UIEquipGraphV__SetAllButton(uiEquipGraphV, v9, 0);
          goto LABEL_17;
        }
      }
      goto LABEL_21;
    }
  }
}


void EquipGraphViewModeState__Awake(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  ;
}


void EquipGraphViewModeState__FowardView(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  ScriptManager_o *scriptManager; // x0

  scriptManager = this->fields.scriptManager;
  if ( !scriptManager )
    sub_2213CDC(0, method);
  ScriptManager__OnClickFowardView(scriptManager, 0);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphViewModeState__OnClickAutoPlayButton(
        EquipGraphViewModeState_o *this,
        bool isSetting,
        const MethodInfo *method)
{
  int autobtn_k__BackingField; // w8
  UnityEngine_Behaviour_o *autoPlaySprite; // x0
  const MethodInfo *v6; // x1

  autobtn_k__BackingField = this->fields._autobtn_k__BackingField;
  if ( !isSetting )
  {
    autobtn_k__BackingField ^= 1u;
    this->fields._autobtn_k__BackingField = autobtn_k__BackingField;
  }
  autoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.autoPlaySprite;
  if ( autobtn_k__BackingField )
  {
    if ( autoPlaySprite )
    {
      UnityEngine_Behaviour__set_enabled(autoPlaySprite, 1, 0);
      autoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.quickAutoPlaySprite;
      this->fields._quickAutobtn_k__BackingField = 0;
      if ( autoPlaySprite )
      {
        UnityEngine_Behaviour__set_enabled(autoPlaySprite, 0, 0);
        this->fields.AutoPlayMode = 0;
        UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0);
        EquipGraphViewModeState__AutoPlayView(this, v6);
        return;
      }
    }
LABEL_10:
    sub_2213CDC(autoPlaySprite, isSetting);
  }
  if ( !autoPlaySprite )
    goto LABEL_10;
  UnityEngine_Behaviour__set_enabled(autoPlaySprite, 0, 0);
  if ( !this->fields._quickAutobtn_k__BackingField )
    UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EquipGraphViewModeState__OnClickQuickAutoPlayButton(
        EquipGraphViewModeState_o *this,
        bool isSetting,
        const MethodInfo *method)
{
  int quickAutobtn_k__BackingField; // w8
  UnityEngine_Behaviour_o *quickAutoPlaySprite; // x0

  if ( (byte_596DC41 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7140/*"FowardView"*/);
    byte_596DC41 = 1;
  }
  quickAutobtn_k__BackingField = this->fields._quickAutobtn_k__BackingField;
  if ( !isSetting )
  {
    quickAutobtn_k__BackingField ^= 1u;
    this->fields._quickAutobtn_k__BackingField = quickAutobtn_k__BackingField;
  }
  quickAutoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.quickAutoPlaySprite;
  if ( quickAutobtn_k__BackingField )
  {
    if ( quickAutoPlaySprite )
    {
      UnityEngine_Behaviour__set_enabled(quickAutoPlaySprite, 1, 0);
      quickAutoPlaySprite = (UnityEngine_Behaviour_o *)this->fields.autoPlaySprite;
      this->fields._autobtn_k__BackingField = 0;
      if ( quickAutoPlaySprite )
      {
        UnityEngine_Behaviour__set_enabled(quickAutoPlaySprite, 0, 0);
        UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0);
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_7140/*"FowardView"*/,
          this->fields.AutoPlayInterval,
          0);
        return;
      }
    }
LABEL_12:
    sub_2213CDC(quickAutoPlaySprite, isSetting);
  }
  if ( !quickAutoPlaySprite )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(quickAutoPlaySprite, 0, 0);
  if ( !this->fields._autobtn_k__BackingField )
    UnityEngine_MonoBehaviour__CancelInvoke((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool EquipGraphViewModeState__get_allbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._allbtn_k__BackingField;
}


bool EquipGraphViewModeState__get_atkbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._atkbtn_k__BackingField;
}


bool EquipGraphViewModeState__get_autobtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._autobtn_k__BackingField;
}


bool EquipGraphViewModeState__get_btmbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._btmbtn_k__BackingField;
}


bool EquipGraphViewModeState__get_hpbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._hpbtn_k__BackingField;
}


bool EquipGraphViewModeState__get_namebtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._namebtn_k__BackingField;
}


bool EquipGraphViewModeState__get_quickAutobtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._quickAutobtn_k__BackingField;
}


bool EquipGraphViewModeState__get_rarebtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._rarebtn_k__BackingField;
}


bool EquipGraphViewModeState__get_rotbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._rotbtn_k__BackingField;
}


bool EquipGraphViewModeState__get_topbtn(EquipGraphViewModeState_o *this, const MethodInfo *method)
{
  return this->fields._topbtn_k__BackingField;
}


void EquipGraphViewModeState__set_allbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._allbtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_atkbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._atkbtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_autobtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._autobtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_btmbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._btmbtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_hpbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._hpbtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_namebtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._namebtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_quickAutobtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._quickAutobtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_rarebtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._rarebtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_rotbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._rotbtn_k__BackingField = value;
}


void EquipGraphViewModeState__set_topbtn(EquipGraphViewModeState_o *this, bool value, const MethodInfo *method)
{
  this->fields._topbtn_k__BackingField = value;
}