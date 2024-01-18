void __fastcall WarBoardDispChangeButton___ctor(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardDispChangeButton__ApplyFsOffsetAdjustment(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v4; // x1
  FSOffset_o *v5; // x0

  if ( (byte_4183FEE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4183FEE = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0LL, 0LL) )
  {
    v5 = this->fields.fsOffset;
    if ( !v5 || (FSOffset__AddOffsetX(v5, 0LL), (v5 = this->fields.fsOffset) == 0LL) )
      sub_B2C434(v5, v4);
    FSOffset__AddBottomY(v5, 0LL);
  }
}


void __fastcall WarBoardDispChangeButton__Awake(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields._DispChangeIsTouch_k__BackingField = 0;
}


void __fastcall WarBoardDispChangeButton__OnClickButton(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x19
  __int64 v10; // x19
  WarBoardManager_o *v11; // x0

  if ( (byte_4183FED & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    sub_B2C35C(&Method_WarBoardDispChangeButton_OnClickButton__, v3);
    byte_4183FED = 1;
  }
  v4 = Method_WarBoardDispChangeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_WarBoardDispChangeButton_OnClickButton__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B2C364();
  v5 = (System_Reflection_MethodBase_o *)sub_B2C340(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  this->fields._DispChangeIsTouch_k__BackingField = 1;
  WarBoardDispChangeButton__SetDispUIRoot(this, 0, v6);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AC505C(v10);
  v11 = **(WarBoardManager_o ***)(v10 + 184);
  if ( !v11 )
    sub_B2C434(0LL, v7);
  WarBoardManager__ChangeMapUIStateDelayCall(v11, 1, v8);
}


void __fastcall WarBoardDispChangeButton__SetActive(
        WarBoardDispChangeButton_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardDispChangeButton__SetDispUIRoot(
        WarBoardDispChangeButton_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x20
  WarBoardManager_o **v8; // x8
  WarBoardManager_o *v9; // x20
  const MethodInfo *v10; // x2
  WarBoardDispChangeButton_o *v11; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  bool v16; // w1
  WarBoardDispChangeComponent_o *v17; // x0

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4183FEF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___, isDisp);
    this = (WarBoardDispChangeButton_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v5);
    byte_4183FEF = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    this = (WarBoardDispChangeButton_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                    + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    this = (WarBoardDispChangeButton_o *)sub_AC505C(v7);
  v8 = *(WarBoardManager_o ***)(v7 + 184);
  v9 = *v8;
  if ( !*v8
    || (WarBoardManager__WarBoardObjectSetBoxCollider(*v8, isDisp, method),
        (this = (WarBoardDispChangeButton_o *)UnityEngine_Component__get_transform(v4, 0LL)) == 0LL)
    || (this = (WarBoardDispChangeButton_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL)) == 0LL
    || (this = (WarBoardDispChangeButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL
    || (this = (WarBoardDispChangeButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___)) == 0LL )
  {
    sub_B2C434(this, isDisp);
  }
  v11 = this;
  WarBoardDispChangeComponent__SetUiRootAlpha((WarBoardDispChangeComponent_o *)this, isDisp, v10);
  if ( isDisp )
  {
    WarBoardDispChangeComponent__SetBackKeyObject((WarBoardDispChangeComponent_o *)v11, v12);
    v16 = !WarBoardManager__EnableAction(v9, v15) && !v9->fields.turnForceId && v9->fields.turnGroupId == 0;
    v17 = (WarBoardDispChangeComponent_o *)v11;
  }
  else
  {
    if ( v9->fields.selectPiece )
      WarBoardManager__DeselectPiece(v9, 1, 0LL, v14);
    v17 = (WarBoardDispChangeComponent_o *)v11;
    v16 = 0;
  }
  WarBoardDispChangeComponent__SetDispChangeBlink(v17, v16, v13);
}


void __fastcall WarBoardDispChangeButton__SetUpPositionForConfigurationMode(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForConfigurationMode, 0LL);
  WarBoardDispChangeButton__ApplyFsOffsetAdjustment(this, v5);
}


void __fastcall WarBoardDispChangeButton__SetUpPositionForPlayMode(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForPlayMode, 0LL);
  WarBoardDispChangeButton__ApplyFsOffsetAdjustment(this, v5);
}


bool __fastcall WarBoardDispChangeButton__get_DispChangeIsTouch(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  return this->fields._DispChangeIsTouch_k__BackingField;
}


void __fastcall WarBoardDispChangeButton__set_DispChangeIsTouch(
        WarBoardDispChangeButton_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._DispChangeIsTouch_k__BackingField = value;
}