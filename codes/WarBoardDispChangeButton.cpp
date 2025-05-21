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

  if ( (byte_4B4285C & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4285C = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0LL, 0LL) )
  {
    v5 = this->fields.fsOffset;
    if ( !v5 || (FSOffset__AddOffsetX(v5, 0LL), (v5 = this->fields.fsOffset) == 0LL) )
      sub_1BDBAD4(v5, v4);
    FSOffset__AddBottomY(v5, 0LL);
  }
}


void __fastcall WarBoardDispChangeButton__Awake(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v4);
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
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  WarBoardManager_o *v11; // x0

  if ( (byte_4B4285B & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    sub_1BDB878(&Method_WarBoardDispChangeButton_OnClickButton__, v3);
    byte_4B4285B = 1;
  }
  v4 = Method_WarBoardDispChangeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_WarBoardDispChangeButton_OnClickButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BDB890(Method_WarBoardDispChangeButton_OnClickButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  this->fields._DispChangeIsTouch_k__BackingField = 1;
  WarBoardDispChangeButton__SetDispUIRoot(this, 0, v6);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C2BF08(v8);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C2BF08(v8);
  v11 = **(WarBoardManager_o ***)(v10 + 184);
  if ( !v11 )
    sub_1BDBAD4(0LL, v7);
  WarBoardManager__ChangeMapUIStateDelayCall(v11, 1, 0LL);
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
    sub_1BDBAD4(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardDispChangeButton__SetDispUIRoot(
        WarBoardDispChangeButton_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x0
  void *transform; // x0
  WarBoardManager_o **v9; // x8
  WarBoardManager_o *v10; // x20
  const MethodInfo *v11; // x2
  WarBoardDispChangeComponent_o *v12; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  bool IsPlayerTurn; // w0

  if ( (byte_4B4285D & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___, isDisp);
    sub_1BDB878(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v6);
    byte_4B4285D = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C2BF08(v3);
  transform = *(void **)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*((_BYTE *)transform + 309) & 1) == 0 )
    transform = (void *)sub_1C2BF08(v3);
  v9 = (WarBoardManager_o **)*((_QWORD *)transform + 23);
  v10 = *v9;
  if ( !*v9
    || (WarBoardManager__WarBoardObjectSetBoxCollider(*v9, isDisp, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)transform,
                      (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___)) == 0LL )
  {
    sub_1BDBAD4(transform, isDisp);
  }
  v12 = (WarBoardDispChangeComponent_o *)transform;
  WarBoardDispChangeComponent__SetUiRootAlpha((WarBoardDispChangeComponent_o *)transform, isDisp, v11);
  if ( !isDisp )
  {
    if ( WarBoardManager__get_isSelectedPiece(v10, 0LL) )
      WarBoardManager__DeselectPiece(v10, 1, 0LL, 0LL);
    goto LABEL_17;
  }
  WarBoardDispChangeComponent__SetBackKeyObject(v12, v13);
  if ( WarBoardManager__EnableAction(v10, 0LL) )
  {
LABEL_17:
    IsPlayerTurn = 0;
    goto LABEL_18;
  }
  IsPlayerTurn = WarBoardManager__IsPlayerTurn(v10, 0LL);
LABEL_18:
  WarBoardDispChangeComponent__SetDispChangeBlink(v12, IsPlayerTurn, v14);
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
    sub_1BDBAD4(0LL, v4);
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
    sub_1BDBAD4(0LL, v4);
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