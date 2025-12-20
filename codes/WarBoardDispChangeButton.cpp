void WarBoardDispChangeButton___ctor(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardDispChangeButton__ApplyFsOffsetAdjustment(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v4; // x1
  FSOffset_o *v5; // x0

  if ( (byte_4D2A491 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A491 = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0, 0) )
  {
    v5 = this->fields.fsOffset;
    if ( !v5 || (FSOffset__AddOffsetX(v5, 0), (v5 = this->fields.fsOffset) == 0) )
      sub_1C942F0(v5, v4);
    FSOffset__AddBottomY(v5, 0);
  }
}


void WarBoardDispChangeButton__Awake(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields._DispChangeIsTouch_k__BackingField = 0;
}


void WarBoardDispChangeButton__OnClickButton(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  WarBoardManager_o *v10; // x0

  if ( (byte_4D2A490 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C94098(&Method_WarBoardDispChangeButton_OnClickButton__);
    byte_4D2A490 = 1;
  }
  v3 = Method_WarBoardDispChangeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_WarBoardDispChangeButton_OnClickButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_WarBoardDispChangeButton_OnClickButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields._DispChangeIsTouch_k__BackingField = 1;
  WarBoardDispChangeButton__SetDispUIRoot(this, 0, v5);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C6A12C(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C6A12C(v7);
  v10 = **(WarBoardManager_o ***)(v9 + 184);
  if ( !v10 )
    sub_1C942F0(0, v6);
  WarBoardManager__ChangeMapUIStateDelayCall(v10, 1, 0);
}


void WarBoardDispChangeButton__SetActive(WarBoardDispChangeButton_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardDispChangeButton__SetDispUIRoot(WarBoardDispChangeButton_o *this, bool isDisp, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  void *transform; // x0
  WarBoardManager_o **v8; // x8
  WarBoardManager_o *v9; // x20
  const MethodInfo *v10; // x2
  WarBoardDispChangeComponent_o *v11; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  bool IsPlayerTurn; // w0

  if ( (byte_4D2A492 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4D2A492 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C(v3);
  transform = *(void **)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*((_BYTE *)transform + 309) & 1) == 0 )
    transform = (void *)sub_1C6A12C(v3);
  v8 = (WarBoardManager_o **)*((_QWORD *)transform + 23);
  v9 = *v8;
  if ( !*v8
    || (WarBoardManager__WarBoardObjectSetBoxCollider(*v8, isDisp, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0)) == 0
    || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0)) == 0
    || (transform = UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)transform,
                      (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___)) == 0 )
  {
    sub_1C942F0(transform, isDisp);
  }
  v11 = (WarBoardDispChangeComponent_o *)transform;
  WarBoardDispChangeComponent__SetUiRootAlpha((WarBoardDispChangeComponent_o *)transform, isDisp, v10);
  if ( !isDisp )
  {
    if ( WarBoardManager__get_isSelectedPiece(v9, 0) )
      WarBoardManager__DeselectPiece(v9, 1, 0, 0);
    goto LABEL_17;
  }
  WarBoardDispChangeComponent__SetBackKeyObject(v11, v12);
  if ( WarBoardManager__EnableAction(v9, 0) )
  {
LABEL_17:
    IsPlayerTurn = 0;
    goto LABEL_18;
  }
  IsPlayerTurn = WarBoardManager__IsPlayerTurn(v9, 0);
LABEL_18:
  WarBoardDispChangeComponent__SetDispChangeBlink(v11, IsPlayerTurn, v13);
}


void WarBoardDispChangeButton__SetUpPositionForConfigurationMode(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C942F0(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForConfigurationMode, 0);
  WarBoardDispChangeButton__ApplyFsOffsetAdjustment(this, v5);
}


void WarBoardDispChangeButton__SetUpPositionForPlayMode(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C942F0(0, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForPlayMode, 0);
  WarBoardDispChangeButton__ApplyFsOffsetAdjustment(this, v5);
}


bool WarBoardDispChangeButton__get_DispChangeIsTouch(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  return this->fields._DispChangeIsTouch_k__BackingField;
}


void WarBoardDispChangeButton__set_DispChangeIsTouch(
        WarBoardDispChangeButton_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._DispChangeIsTouch_k__BackingField = value;
}