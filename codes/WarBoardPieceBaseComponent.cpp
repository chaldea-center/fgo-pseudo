void __fastcall WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42AEAD6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_B52984(&StringLiteral_6839/*"Frame{0}"*/);
    byte_42AEAD6 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.listEffectData,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416LL;
  this->fields.lengthMoveAttack = 25.0;
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_327AA70;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_327AA80;
  v10 = (System_Int32_array **)StringLiteral_6839/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6839/*"Frame{0}"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.baseFrameName, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.removeTweenTargetObjects,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__AddDeadMoveTask(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Vector3_o originalPos,
        int32_t squareIndex,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  const MethodInfo *v10; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Int32_array *PieceEventVals; // x22
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  float pixelPerSecond; // s13
  float v16; // s11
  float v17; // s12
  float v18; // s14
  WarBoardMovePerformance_o *v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x20
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_T__o *v22; // x0
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  WebViewManager_o *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_42AEACD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardMovePerformance_TypeInfo);
    byte_42AEACD = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_12;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, v10);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_12;
  pieceData = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                       (WarBoardManager_o *)pieceData,
                                       30,
                                       PieceEventVals,
                                       0LL);
  if ( !v9 )
    goto LABEL_12;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    (System_Collections_Generic_IEnumerable_T__o *)pieceData,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_12;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)pieceData,
                                                                36,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    EventTasks,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_12;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v16 = SquarePosition.fields.x;
  v17 = SquarePosition.fields.y;
  v18 = SquarePosition.fields.z;
  v19 = (WarBoardMovePerformance_o *)sub_B52A54(WarBoardMovePerformance_TypeInfo);
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v27.fields.x = v16;
  v27.fields.y = v17;
  v27.fields.z = v18;
  v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)v19;
  WarBoardMovePerformance___ctor(v19, gameObject, v26, v27, pixelPerSecond, 0, v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    v20,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v22 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                               (WarBoardManager_o *)pieceData,
                                                               38,
                                                               PieceEventVals,
                                                               0LL),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
          v22,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v23 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                               (WarBoardManager_o *)pieceData,
                                                               37,
                                                               0LL,
                                                               0LL),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
          v23,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                             (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_12:
    sub_B52A5C(pieceData, v10);
  }
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)pieceData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__ChangeCriticalStars(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__ChangeStatus(
        WarBoardPieceBaseComponent_o *this,
        bool isBreak,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__ClickIcon(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t controllType_k__BackingField; // w8
  WarBoardManager_o *v6; // x20
  struct WarBoardSeSetting_o *seSetting; // x8
  System_String_o *DeselectSe; // x21
  const MethodInfo *v9; // x2
  Il2CppMethodPointer methodPtr; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  struct WarBoardPieceData_o *v12; // x8
  struct WarBoardSeSetting_o *v13; // x8
  System_String_o *SelectSe; // x21
  struct WarBoardPieceData_o *v15; // x8
  struct WarBoardSeSetting_o *v16; // x8
  System_String_o *v17; // x21
  struct WarBoardSeSetting_o *v18; // x8
  System_String_o *OpenSimpleInfoSe; // x19

  if ( (byte_42AEABE & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AEABE = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  controllType_k__BackingField = Instance->fields._controllType_k__BackingField;
  v6 = Instance;
  if ( controllType_k__BackingField == 1 )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_46;
    if ( pieceData->fields._isEditing_k__BackingField )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v12 = this->fields.pieceData;
      if ( v12 )
      {
        WarBoardManager__SquareSelect(v6, v12->fields._nowSquareIndex_k__BackingField, 0LL);
        v9 = this->klass->vtable._14_EditPiece.method;
        methodPtr = this->klass->vtable._15_ChangeStatus.methodPtr;
LABEL_37:
        ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v9)(this, methodPtr);
        return;
      }
LABEL_46:
      sub_B52A5C(Instance, v4);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL)
      && WarBoardManager__IsSelectedPieceSame(v6, this->fields.pieceData, 0LL) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        seSetting = Instance->fields.seSetting;
        if ( seSetting )
        {
          DeselectSe = seSetting->fields.DeselectSe;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(DeselectSe, 0LL);
          WarBoardManager__DeselectPiece(v6, 1, 0LL, 0LL);
          v9 = this->klass->vtable._13_HideStatus.method;
          methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
          goto LABEL_37;
        }
      }
      goto LABEL_46;
    }
    if ( WarBoardManager__get_isSelectedPiece(v6, 0LL) && this->fields.isSelectable )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v13 = Instance->fields.seSetting;
        if ( v13 )
        {
          SelectSe = v13->fields.SelectSe;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          Instance = (WarBoardManager_o *)SoundManager__playSe(SelectSe, 0LL);
          v15 = this->fields.pieceData;
          if ( v15 )
          {
            WarBoardManager__SelectedPieceAction(v6, v15->fields._nowSquareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
      goto LABEL_46;
    }
    if ( WarBoardManager__IsNowTurn(v6, this->fields.pieceData, 0LL) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v16 = Instance->fields.seSetting;
        if ( v16 )
        {
          v17 = v16->fields.SelectSe;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v17, 0LL);
          WarBoardManager__SelectPiece(v6, this->fields.pieceData, 0LL);
          v9 = this->klass->vtable._12_ShowStatus.method;
          methodPtr = this->klass->vtable._13_HideStatus.methodPtr;
          goto LABEL_37;
        }
      }
      goto LABEL_46;
    }
  }
  if ( (((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._12_ShowStatus.method)(
          this,
          this->klass->vtable._13_HideStatus.methodPtr) & 1) != 0 )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    v18 = Instance->fields.seSetting;
    if ( !v18 )
      goto LABEL_46;
    OpenSimpleInfoSe = v18->fields.OpenSimpleInfoSe;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(OpenSimpleInfoSe, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__CreateEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v12; // x21
  UnityEngine_GameObject_o *v13; // x22
  WarBoardCommonEffectPerformance_o *v14; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x21
  System_Nullable_Vector3__o v16; // 0:x3.16
  System_Nullable_Vector3__o v17; // 0:x5.16

  if ( (byte_42AEAD3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_B52984(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    byte_42AEAD3 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2E60790 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
      v12 = (UnityEngine_Object_o *)transform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)CommonEffectAsset_object,
                                        (UnityEngine_Transform_o *)v12,
                                        (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    v14 = (WarBoardCommonEffectPerformance_o *)sub_B52A54(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v16.fields.value.fields.x = 0LL;
    *(_QWORD *)&v16.fields.value.fields.z = 0LL;
    *(_QWORD *)&v17.fields.value.fields.x = 0LL;
    *(_QWORD *)&v17.fields.value.fields.z = 0LL;
    v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)v14;
    WarBoardCommonEffectPerformance___ctor(v14, 0LL, v13, v16, v17, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
    if ( v7 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v15,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__AddTask_18580124(
          (WarBoardManager_o *)Instance,
          0,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v7,
          0LL);
        return;
      }
    }
LABEL_21:
    sub_B52A5C(Instance, v9);
  }
}


void __fastcall WarBoardPieceBaseComponent__CreateEffectText(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDamageBaseObject; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v12; // x1
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v14; // x21
  WarBoardCommonEffectPerformance_o *v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x20
  System_Nullable_Vector3__o v17; // 0:x3.16
  System_Nullable_Vector3__o v18; // 0:x5.16

  if ( (byte_42AEAD4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardCommonEffectPerformance_TypeInfo);
    byte_42AEAD4 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(0LL, effectDamageBaseObject, 0LL) )
  {
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    effectDamageBaseLabel = (UnityEngine_Object_o *)this->fields.effectDamageBaseLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(effectDamageBaseLabel, 0LL, 0LL) )
    {
      Instance = this->fields.effectDamageBaseLabel;
      if ( !Instance )
        goto LABEL_18;
      UILabel__set_text(Instance, popText, 0LL);
    }
    v14 = this->fields.effectDamageBaseObject;
    v15 = (WarBoardCommonEffectPerformance_o *)sub_B52A54(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v17.fields.value.fields.x = 0LL;
    *(_QWORD *)&v17.fields.value.fields.z = 0LL;
    *(_QWORD *)&v18.fields.value.fields.x = 0LL;
    *(_QWORD *)&v18.fields.value.fields.z = 0LL;
    v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15;
    WarBoardCommonEffectPerformance___ctor(v15, 0LL, v14, v17, v18, (System_Nullable_Vector3__o)0, 0, 0, 0, 0LL);
    if ( v10 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        v16,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v10,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      Instance = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__AddTask_18580124(
          (WarBoardManager_o *)Instance,
          0,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
          0LL);
        return;
      }
    }
LABEL_18:
    sub_B52A5C(Instance, v12);
  }
}


void __fastcall WarBoardPieceBaseComponent__EditPiece(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Transform_o *__fastcall WarBoardPieceBaseComponent__GetEffectDisplayTransform(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardPieceBaseComponent__GetIconLocalPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v2 = UnityEngine_Vector3__get_zero(0LL);
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardPieceBaseComponent__GetIconPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&v2 = UnityEngine_Vector3__get_zero(0LL);
  result.fields.z = v4;
  result.fields.y = v3;
  result.fields.x = v2;
  return result;
}


System_Int32_array *__fastcall WarBoardPieceBaseComponent__GetParticipantVals(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x20
  System_Collections_Generic_IEnumerable_TSource__o *PieceEventVals; // x20
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  _QWORD **v9; // x20
  __int64 v10; // x19
  __int16 v11; // w8
  __int64 v12; // x19
  __int64 v13; // x19
  __int64 v14; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  WarBoardPieceBaseComponent___c_c *v17; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__62_0; // x20
  Il2CppObject *v20; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  v4 = this;
  if ( (byte_42AEAC7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Concat_int___);
    sub_B52984(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__);
    this = (WarBoardPieceBaseComponent_o *)sub_B52984(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_42AEAC7 = 1;
  }
  if ( !targetPiece )
    goto LABEL_33;
  if ( targetPiece->fields._type_k__BackingField == 1 )
  {
    this = (WarBoardPieceBaseComponent_o *)v4->fields.pieceData;
    if ( this )
    {
      PieceEventVals = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                              (WarBoardPieceData_o *)this,
                                                                              (const MethodInfo *)targetPiece);
      v7 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(targetPiece, v6);
      v8 = System_Linq_Enumerable__Concat_int_(
             PieceEventVals,
             v7,
             (const MethodInfo_1B5BA40 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v8,
               (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_33:
    sub_B52A5C(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_33;
  this = (WarBoardPieceBaseComponent_o *)this[1].fields.pieceStatusLabelComponent;
  if ( !this )
    goto LABEL_33;
  this = (WarBoardPieceBaseComponent_o *)WarBoardData__LoadBattleParticipantInfo((WarBoardData_o *)this, 0LL);
  if ( !this )
    goto LABEL_33;
  if ( !LOBYTE(this->fields.listEffectData) )
  {
    v16 = *(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.m_CachedPtr;
    v17 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v17 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__62_0,
        v20,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        (const MethodInfo_2BCA808 *)Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
      v21 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v21->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v21->__9__62_0,
        (System_Int32_array **)_9__62_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                v16,
                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                (const MethodInfo_1B6B6E8 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v8,
             (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v9 = (_QWORD **)Method_System_Array_Empty_int___;
  v10 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AEB684(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AEB684(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AEB684(*v9[6]);
  return **(System_Int32_array ***)(v14 + 184);
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_42AEACF & 1) == 0 )
  {
    sub_B52984(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_42AEACF = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_B52A54(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0LL);
  return v6;
}


void __fastcall WarBoardPieceBaseComponent__HideActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_42AEAC0 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEAC0 = 1;
  }
  currentActionPointRoot = this->fields.currentActionPointRoot;
  if ( !currentActionPointRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0LL);
  currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0LL, 0LL) )
  {
    currentActionPointRoot = this->fields.currentPieceActionPointRoot;
    if ( currentActionPointRoot )
    {
      UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B52A5C(currentActionPointRoot, method);
  }
LABEL_10:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__HideActionTarget(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_B52A5C(0LL, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x19
  WarBoardManager_o *v4; // x0

  if ( (byte_42AEAC3 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_42AEAC3 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v2 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v3 = **(_QWORD **)(v2 + 192);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AEB684(v3);
  v4 = **(WarBoardManager_o ***)(v3 + 184);
  if ( !v4 )
    sub_B52A5C(0LL, method);
  WarBoardManager__HideSimplePopup(v4, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__Initialize(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v6; // x1
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Transform_o *transform; // x21
  int v21; // s0
  int32_t breakPointMax_k__BackingField; // w21
  struct WarBoardBreakPointComponent_array *v25; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t v33; // w25
  float v34; // s8
  float v35; // s9
  struct UnityEngine_GameObject_o *breakPointPrefab; // x23
  UnityEngine_Transform_o *v37; // x24
  UnityEngine_GameObject_o *v38; // x24
  WarBoardBreakPointComponent_o *v39; // x23
  struct UIWidget_o *breakPointParent; // x8
  struct WarBoardBreakPointComponent_array *v41; // x26
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int32_t v48; // w24
  Il2CppClass **v49; // x0
  struct WarBoardBreakPointComponent_array *v50; // x8
  float maxSpacing; // s0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Transform_array *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x22
  const MethodInfo *v66; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v71; // x21
  UnityEngine_Object_o *v72; // x22
  struct UnityEngine_GameObject_o *v73; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UnityEngine_Object_o *v81; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x0
  __int64 v90; // x0
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AEABA & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&UnityEngine_Transform___TypeInfo);
    sub_B52984(&WarBoardBreakPointComponent___TypeInfo);
    sub_B52984(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_B52984(&StringLiteral_22037/*"root_text/type01/dm_base"*/);
    sub_B52984(&StringLiteral_18315/*"ef_dm_base"*/);
    byte_42AEABA = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.pieceData = pieceData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.pieceData,
    (System_Int32_array **)pieceData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_27;
  if ( !gameObject )
    goto LABEL_27;
  *(UnityEngine_Vector3_o *)&v21 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)gameObject,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  breakPointMax_k__BackingField = pieceData->fields._breakPointMax_k__BackingField;
  v25 = (struct WarBoardBreakPointComponent_array *)sub_B5299C(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v25;
  p_breakPoints = &this->fields.breakPoints;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.breakPoints,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_27;
  if ( breakPointMax_k__BackingField >= 1 )
  {
    v33 = 0;
    v34 = 0.0;
    v35 = (float)*(int *)(gameObject + 160) / (float)breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = this->fields.breakPointPrefab;
      v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (__int64)UnityEngine_Object__Instantiate_UILabel_(
                              (UILabel_o *)breakPointPrefab,
                              v37,
                              (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
      if ( !gameObject )
        goto LABEL_27;
      v38 = (UnityEngine_GameObject_o *)gameObject;
      v39 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v38, 0LL);
      if ( !gameObject )
        goto LABEL_27;
      v91.fields.y = 0.0;
      v91.fields.z = 0.0;
      v91.fields.x = v34;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v91, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_27;
      if ( !v39 )
        goto LABEL_27;
      WarBoardBreakPointComponent__Initialize(
        v39,
        breakPointParent->fields.mDepth + 2 * (~v33 + breakPointMax_k__BackingField),
        v33 + 1,
        pieceData->fields._type_k__BackingField == 1,
        pieceData->fields._type_k__BackingField == 0 && pieceData->fields._forceId_k__BackingField != 0,
        0,
        0LL);
      v41 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_27;
      gameObject = sub_B52A44(v39, v41->obj.klass->_1.element_class);
      if ( !gameObject )
        goto LABEL_62;
      v48 = v33;
      if ( v33 >= v41->max_length )
        goto LABEL_61;
      v49 = &v41->obj.klass + v33;
      v49[4] = (Il2CppClass *)v39;
      sub_B52920((BattleServantConfConponent_o *)(v49 + 4), (System_Int32_array **)v39, v42, v43, v44, v45, v46, v47);
      v50 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_27;
      if ( v33 >= v50->max_length )
        goto LABEL_61;
      gameObject = (__int64)v50->m_Items[v33];
      if ( !gameObject )
        goto LABEL_27;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        pieceData->fields._breakPoint_k__BackingField > v33++,
        0,
        0LL);
      if ( breakPointMax_k__BackingField <= v48 + 1 )
        break;
      maxSpacing = v39->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      if ( maxSpacing >= v35 )
        maxSpacing = v35;
      v34 = v34 + maxSpacing;
      if ( !gameObject )
        goto LABEL_27;
    }
  }
  gameObject = (__int64)this->fields.selectObject;
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._10_UpdateDisplayActionCount.method)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._9_HideActionCount.method)(
    this,
    this->klass->vtable._10_UpdateDisplayActionCount.methodPtr);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._17_ChangeCriticalStars.method)(
    this,
    this->klass->vtable._18_Selectable.methodPtr);
  pieceData->fields.pieceComponent = this;
  sub_B52920(
    (BattleServantConfConponent_o *)&pieceData->fields.pieceComponent,
    (System_Int32_array **)this,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_27;
LABEL_31:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  v58 = (UnityEngine_Transform_array *)sub_B5299C(UnityEngine_Transform___TypeInfo, 1LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v58 )
    goto LABEL_27;
  v65 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B52A44(gameObject, v58->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_62:
      v90 = sub_B52A7C();
      sub_B52A28(v90, 0LL);
    }
  }
  if ( !v58->max_length )
  {
LABEL_61:
    v89 = sub_B52A88(gameObject);
    sub_B52A28(v89, 0LL);
  }
  v58->m_Items[0] = (UnityEngine_Transform_o *)v65;
  sub_B52920((BattleServantConfConponent_o *)v58->m_Items, v65, v59, v60, v61, v62, v63, v64);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v58, v66);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  gameObject = *(_QWORD *)(gameObject + 432);
  if ( !gameObject )
    goto LABEL_27;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v68);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v69);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_18315/*"ef_dm_base"*/,
                               (const MethodInfo_2E60790 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    v71 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v72 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v72, 0LL, 0LL) )
      v71 = (UnityEngine_Transform_o *)v72;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v73 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               (UILabel_o *)CommonEffectAsset_object,
                                               v71,
                                               (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    this->fields.effectDamageBaseObject = v73;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.effectDamageBaseObject,
      (System_Int32_array **)v73,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0LL, 0LL) )
    {
      v81 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_22037/*"root_text/type01/dm_base"*/,
                                      0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = UnityEngine_Object__op_Inequality(v81, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v81 )
          goto LABEL_27;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)v81,
                                    (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)Component_WebViewObject;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.effectDamageBaseLabel,
          (System_Int32_array **)Component_WebViewObject,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_27:
        sub_B52A5C(gameObject, v6);
      goto LABEL_31;
    }
  }
}


bool __fastcall WarBoardPieceBaseComponent__IsModifyStatus(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall WarBoardPieceBaseComponent__LongTapIcon(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAfterAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x22
  WarBoardData_o *gameObject; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  System_Int32_array **Instance; // x0
  WarBoardData_o **v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x8
  System_Int32_array **Piece_22803728; // x0
  WarBoardData_o **v25; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x24
  WarBoardTaskBase_TaskCallback_o *v33; // x25
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  float y; // v0.s[1]
  float x; // s8
  float32x2_t v43; // d0
  unsigned __int32 v44; // s1
  float v45; // s2
  __int64 v46; // x8
  bool v47; // zf
  __int64 v48; // x8
  float v49; // s3
  float v50; // s1
  __int64 v51; // x24
  WarBoardTaskBase_TaskCallback_o *v52; // x25
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct WarBoardPieceData_o *v59; // x8
  UnityEngine_GameObject_o *v60; // x26
  float v61; // s8
  float v62; // s9
  float v63; // s10
  float pixelPerSecond; // s13
  float v65; // s11
  float v66; // s12
  float z; // s14
  WarBoardMovePerformance_o *v68; // x0
  WarBoardTaskBase_o *v69; // x25
  const MethodInfo *v70; // x3
  bool v71; // w8
  System_Func_bool__o *v72; // x23
  __int64 v73; // x21
  System_Delegate_o *v74; // x23
  WarBoardPieceBaseComponent___c_c *v75; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v78; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  WarBoardPieceData_o *v93; // x0
  const MethodInfo *v94; // x1
  MethodInfo v95; // [xsp+0h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42AEACA & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__);
    sub_B52984(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
    sub_B52984(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_B52984(&WarBoardCallbackTask_TypeInfo);
    sub_B52984(&WarBoardConditionalJumpTask_TypeInfo);
    sub_B52984(&WarBoardMovePerformance_TypeInfo);
    byte_42AEACA = 1;
  }
  LODWORD(v95.invoker_method) = 0;
  v95.methodPointer = 0LL;
  v5 = sub_B52A54(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_38;
  *(_QWORD *)(v5 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 52) = squareIndex;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v16 = (WarBoardData_o **)(v5 + 24);
  *(_QWORD *)(v5 + 24) = Instance;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), Instance, v17, v18, v19, v20, v21, v22);
  v23 = *(_QWORD *)(v5 + 24);
  if ( !v23 )
    goto LABEL_38;
  gameObject = *(WarBoardData_o **)(v23 + 432);
  if ( !gameObject )
    goto LABEL_38;
  Piece_22803728 = (System_Int32_array **)WarBoardData__GetPiece_22803728(gameObject, *(_DWORD *)(v5 + 52), 0LL);
  v25 = (WarBoardData_o **)(v5 + 16);
  *(_QWORD *)(v5 + 16) = Piece_22803728;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), Piece_22803728, v26, v27, v28, v29, v30, v31);
  v32 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v32, 0LL, 0LL);
  v33 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v32 )
    goto LABEL_38;
  *(_QWORD *)(v32 + 32) = v33;
  sub_B52920((BattleServantConfConponent_o *)(v32 + 32), (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  if ( !v14 )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v14,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_38;
  gameObject = *v16;
  if ( !*v16 )
    goto LABEL_38;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_38;
  v97 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v5 + 52), 0LL);
  y = v97.fields.y;
  *(float32x2_t *)&v97.fields.x = vsub_f32(*(float32x2_t *)&v97.fields.x, *(float32x2_t *)(v5 + 40));
  v97.fields.y = v97.fields.z - *(float *)(v5 + 48);
  v95.methodPointer = *(Il2CppMethodPointer *)&v97.fields.x;
  *(float *)&v95.invoker_method = v97.fields.y;
  v98.fields.x = UnityEngine_Vector3__get_magnitude(v97, &v95);
  x = v98.fields.x;
  *(UnityEngine_Vector3_o *)v43.n64_u64 = UnityEngine_Vector3__get_normalized(v98, &v95);
  v46 = *(_QWORD *)(v5 + 16);
  if ( !v46 )
    goto LABEL_38;
  v47 = *(_DWORD *)(v46 + 16) == 0;
  v48 = 136LL;
  if ( !v47 )
    v48 = 132LL;
  v49 = x - *(float *)((char *)&this->klass + v48);
  if ( v49 > 0.0 )
  {
    v43.n64_u32[1] = v44;
    v50 = (float)(v45 * v49) + *(float *)(v5 + 48);
    *(float32x2_t *)(v5 + 40) = vadd_f32(vmul_n_f32(v43, v49), *(float32x2_t *)(v5 + 40));
    *(float *)(v5 + 48) = v50;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_38;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, v7);
  v51 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v51, 0LL, 0LL);
  v52 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v52,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0LL);
  if ( !v51 )
    goto LABEL_38;
  *(_QWORD *)(v51 + 32) = v52;
  sub_B52920((BattleServantConfConponent_o *)(v51 + 32), (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v59 = this->fields.pieceData;
  if ( !v59 )
    goto LABEL_38;
  v60 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 24);
  if ( !gameObject )
    goto LABEL_38;
  v61 = *(float *)(v5 + 40);
  v62 = *(float *)(v5 + 44);
  v63 = *(float *)(v5 + 48);
  v99 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v59->fields._nowSquareIndex_k__BackingField,
          0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v65 = v99.fields.x;
  v66 = v99.fields.y;
  z = v99.fields.z;
  v68 = (WarBoardMovePerformance_o *)sub_B52A54(WarBoardMovePerformance_TypeInfo);
  v100.fields.x = v61;
  v100.fields.y = v62;
  v100.fields.z = v63;
  v101.fields.x = v65;
  v101.fields.y = v66;
  v101.fields.z = z;
  v69 = (WarBoardTaskBase_o *)v68;
  WarBoardMovePerformance___ctor(v68, v60, v100, v101, pixelPerSecond, 0, v70);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_38;
  if ( WarBoardPieceData__GetMoveAfterAttack((WarBoardPieceData_o *)gameObject, v7) )
  {
    v71 = 0;
  }
  else
  {
    gameObject = *v25;
    if ( !*v25 )
      goto LABEL_38;
    v71 = WarBoardPieceData__GetMovedAferDefend((WarBoardPieceData_o *)gameObject, v7) == 0;
  }
  *(_BYTE *)(v5 + 56) = v71;
  v72 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v72,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
  v73 = sub_B52A54(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v73, v72, (WarBoardTaskBase_o *)v51, v69, 0LL);
  if ( !v73 )
LABEL_38:
    sub_B52A5C(gameObject, v7);
  v74 = *(System_Delegate_o **)(v73 + 40);
  v75 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v75 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  static_fields = v75->static_fields;
  _9__65_3 = static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v75);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v78 = (Il2CppObject *)static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v78,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0LL);
    v79 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v79->__9__65_3 = _9__65_3;
    sub_B52920(
      (BattleServantConfConponent_o *)&v79->__9__65_3,
      (System_Int32_array **)_9__65_3,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
  }
  v86 = (System_Int32_array **)System_Delegate__Combine(v74, (System_Delegate_o *)_9__65_3, 0LL);
  if ( !v86 || *v86 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v73 + 40) = v86;
    sub_B52920((BattleServantConfConponent_o *)(v73 + 40), v86, v87, v88, v89, v90, v91, v92);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    gameObject = *v16;
    if ( *v16 )
    {
      WarBoardManager__AddTask_18580124(
        (WarBoardManager_o *)gameObject,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
        0LL);
      return;
    }
    goto LABEL_38;
  }
  v93 = (WarBoardPieceData_o *)sub_B52D50(v86);
  WarBoardPieceData__IsEnabledMoveAfterAttack(v93, v94);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAfterWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x20
  WarBoardData_o *gameObject; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  WarBoardData_o **v14; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  System_Int32_array **Instance; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x8
  System_Int32_array **Wall; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x23
  WarBoardTaskBase_TaskCallback_o *v32; // x24
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  float y; // v0.s[1]
  float x; // s8
  float32x2_t v42; // d0
  unsigned __int32 v43; // s1
  float v44; // s2
  float v45; // s3
  float v46; // s1
  __int64 v47; // x22
  WarBoardTaskBase_TaskCallback_o *v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct WarBoardPieceData_o *v55; // x8
  UnityEngine_GameObject_o *v56; // x24
  float v57; // s8
  float v58; // s9
  float v59; // s10
  float pixelPerSecond; // s13
  float v61; // s11
  float v62; // s12
  float z; // s14
  WarBoardMovePerformance_o *v64; // x0
  WarBoardTaskBase_o *v65; // x23
  const MethodInfo *v66; // x3
  System_Func_bool__o *v67; // x19
  WarBoardConditionalJumpTask_o *v68; // x24
  MethodInfo v69; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42AEACC & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__);
    sub_B52984(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
    sub_B52984(&WarBoardCallbackTask_TypeInfo);
    sub_B52984(&WarBoardConditionalJumpTask_TypeInfo);
    sub_B52984(&WarBoardMovePerformance_TypeInfo);
    byte_42AEACC = 1;
  }
  LODWORD(v69.invoker_method) = 0;
  v69.methodPointer = 0LL;
  v5 = sub_B52A54(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 24) = this;
  v14 = (WarBoardData_o **)(v5 + 16);
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 44) = squareIndex;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 16) = Instance;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), Instance, v17, v18, v19, v20, v21, v22);
  v23 = *(_QWORD *)(v5 + 16);
  if ( !v23 )
    goto LABEL_19;
  gameObject = *(WarBoardData_o **)(v23 + 432);
  if ( !gameObject )
    goto LABEL_19;
  Wall = (System_Int32_array **)WarBoardData__GetWall(gameObject, *(_DWORD *)(v5 + 44), 1, 0LL);
  *(_QWORD *)(v5 + 48) = Wall;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 48), Wall, v25, v26, v27, v28, v29, v30);
  v31 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v31, 0LL, 0LL);
  v32 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v31 )
    goto LABEL_19;
  *(_QWORD *)(v31 + 32) = v32;
  sub_B52920((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
  if ( !v15 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v15,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_19;
  gameObject = *v14;
  if ( !*v14 )
    goto LABEL_19;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v5 + 16);
  *(UnityEngine_Vector3_o *)(v5 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_19;
  v71 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v5 + 44), 0LL);
  y = v71.fields.y;
  *(float32x2_t *)&v71.fields.x = vsub_f32(*(float32x2_t *)&v71.fields.x, *(float32x2_t *)(v5 + 32));
  v71.fields.y = v71.fields.z - *(float *)(v5 + 40);
  v69.methodPointer = *(Il2CppMethodPointer *)&v71.fields.x;
  *(float *)&v69.invoker_method = v71.fields.y;
  v72.fields.x = UnityEngine_Vector3__get_magnitude(v71, &v69);
  x = v72.fields.x;
  *(UnityEngine_Vector3_o *)v42.n64_u64 = UnityEngine_Vector3__get_normalized(v72, &v69);
  v45 = x - this->fields.lengthOnAttack;
  if ( v45 > 0.0 )
  {
    v42.n64_u32[1] = v43;
    v46 = (float)(v44 * v45) + *(float *)(v5 + 40);
    *(float32x2_t *)(v5 + 32) = vadd_f32(vmul_n_f32(v42, v45), *(float32x2_t *)(v5 + 32));
    *(float *)(v5 + 40) = v46;
  }
  v47 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v47, 0LL, 0LL);
  v48 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v48,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0LL);
  if ( !v47 )
    goto LABEL_19;
  *(_QWORD *)(v47 + 32) = v48;
  sub_B52920((BattleServantConfConponent_o *)(v47 + 32), (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v55 = this->fields.pieceData;
  if ( !v55 )
    goto LABEL_19;
  v56 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 16);
  if ( !gameObject )
    goto LABEL_19;
  v57 = *(float *)(v5 + 32);
  v58 = *(float *)(v5 + 36);
  v59 = *(float *)(v5 + 40);
  v73 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v55->fields._nowSquareIndex_k__BackingField,
          0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v61 = v73.fields.x;
  v62 = v73.fields.y;
  z = v73.fields.z;
  v64 = (WarBoardMovePerformance_o *)sub_B52A54(WarBoardMovePerformance_TypeInfo);
  v74.fields.x = v57;
  v74.fields.y = v58;
  v74.fields.z = v59;
  v75.fields.x = v61;
  v75.fields.y = v62;
  v75.fields.z = z;
  v65 = (WarBoardTaskBase_o *)v64;
  WarBoardMovePerformance___ctor(v64, v56, v74, v75, pixelPerSecond, 0, v66);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject
    || (*(_BYTE *)(v5 + 56) = WarBoardPieceData__GetMoveAfterAttack((WarBoardPieceData_o *)gameObject, v7) == 0,
        v67 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo),
        System_Func_bool____ctor(
          v67,
          (Il2CppObject *)v5,
          Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
          (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__),
        v68 = (WarBoardConditionalJumpTask_o *)sub_B52A54(WarBoardConditionalJumpTask_TypeInfo),
        WarBoardConditionalJumpTask___ctor(v68, v67, (WarBoardTaskBase_o *)v47, v65, 0LL),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__),
        (gameObject = *(WarBoardData_o **)(v5 + 16)) == 0LL) )
  {
LABEL_19:
    sub_B52A5C(gameObject, v7);
  }
  WarBoardManager__AddTask_18580124(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x23
  System_Int32_array **Instance; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array ***v14; // x25
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v16; // x19
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s13
  float v21; // s8
  float v22; // s14
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float v26; // s9
  float v27; // s10
  float v28; // s11
  System_Int32_array **Square; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  const MethodInfo *v37; // x2
  System_Int32_array *ParticipantVals; // x24
  WarBoardPieceData_o *v39; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WarBoardManager_o **v41; // x19
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  __int64 v43; // x25
  System_Delegate_o *v44; // x27
  WarBoardTaskBase_TaskCallback_o *v45; // x28
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x8
  float x; // s12
  float v55; // s0
  float v56; // s1
  float v57; // s2
  WarBoardPieceData_o *v58; // x22
  __int64 v59; // x8
  float v60; // s15
  System_Int32_array ***v61; // x28
  float v62; // s4
  float v63; // s12
  float v64; // s9
  float v65; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v67; // s11
  UnityEngine_GameObject_o *v68; // x25
  WarBoardMovePerformance_o *v69; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v70; // x26
  const MethodInfo *v71; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x25
  System_Collections_Generic_IEnumerable_T__o *v73; // x0
  System_Collections_Generic_IEnumerable_T__o *v74; // x0
  float v75; // s0
  float v76; // s9
  float v77; // s10
  float v78; // s11
  UnityEngine_GameObject_o *v79; // x0
  float v80; // s12
  UnityEngine_GameObject_o *v81; // x21
  WarBoardMovePerformance_o *v82; // x0
  System_Int32_array **v83; // x24
  const MethodInfo *v84; // x3
  const MethodInfo *v85; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *v86; // x21
  System_Int32_array **v87; // x23
  int32_t id; // w26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v89; // x0
  const MethodInfo *v90; // x5
  _BOOL4 v91; // w8
  int32_t v92; // w2
  bool v93; // w4
  WarBoardMessageMaster_o *v94; // x0
  int32_t v95; // w1
  __int64 v96; // x24
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  Il2CppObject **v103; // x22
  float v104; // s0
  float v105; // s1
  float v106; // s2
  float v107; // s0
  float v108; // s5
  float v109; // s11
  float v110; // s12
  float v111; // s13
  float v112; // s8
  float y; // s9
  float z; // s10
  float magnitude; // s0
  float v116; // s1
  float v117; // s8
  float v118; // s1
  __int64 v119; // x8
  __int64 v120; // x8
  float ZoomSize; // s0
  __int64 v122; // x8
  __int64 v123; // x8
  __int64 v124; // x8
  const MethodInfo_2175340 *v125; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v127; // x8
  WarBoardManager_o *v128; // x23
  float v129; // s0
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **v137; // x21
  WarBoardPieceBaseComponent___c_c *v138; // x8
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v141; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v142; // x0
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Delegate_o *v149; // x25
  WarBoardTaskBase_TaskCallback_o *v150; // x26
  System_Int32_array **v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  int *v158; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v159; // x21
  BattleServantConfConponent_o *p_addCount; // x21
  System_Delegate_o *v161; // t1
  Il2CppObject *v162; // x22
  WarBoardTaskBase_TaskCallback_o *v163; // x24
  System_Int32_array **v164; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  System_Collections_Generic_IEnumerable_T__o *v171; // x23
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Int32_array **v178; // x23
  WarBoardManager_o *v179; // x24
  int v180; // s0
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_Int32_array **v189; // x24
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  System_Int32_array **v196; // x24
  const MethodInfo *v197; // x2
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  System_Int32_array **v204; // x22
  WarBoardOrthostichySchedule_o *v205; // x22
  const MethodInfo *v206; // x2
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  __int64 v213; // x21
  System_String_array **v214; // x2
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v220; // x21
  BattleServantConfConponent_o *v221; // x21
  System_Delegate_o *v222; // x22
  System_Delegate_o *v223; // t1
  WarBoardPieceBaseComponent___c_c *v224; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *v225; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v227; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v228; // x0
  System_String_array **v229; // x2
  System_String_array **v230; // x3
  System_Boolean_array **v231; // x4
  System_Int32_array **v232; // x5
  System_Int32_array *v233; // x6
  System_Int32_array *v234; // x7
  System_Int32_array **v235; // x0
  System_String_array **v236; // x2
  System_String_array **v237; // x3
  System_Boolean_array **v238; // x4
  System_Int32_array **v239; // x5
  System_Int32_array *v240; // x6
  System_Int32_array *v241; // x7
  __int64 v242; // x0
  __int64 v243; // x0
  WarBoardPieceData_o *v244; // x0
  const MethodInfo *v245; // x1
  float v246; // [xsp+4h] [xbp-ECh]
  float v247; // [xsp+8h] [xbp-E8h]
  float v248; // [xsp+Ch] [xbp-E4h]
  float v249; // [xsp+10h] [xbp-E0h]
  float v250; // [xsp+14h] [xbp-DCh]
  UnityEngine_Component_o *v251; // [xsp+18h] [xbp-D8h]
  System_Nullable_float__o size; // [xsp+20h] [xbp-D0h] BYREF
  System_Nullable_Vector3__o v253; // [xsp+28h] [xbp-C8h] BYREF
  MethodInfo methoda; // [xsp+38h] [xbp-B8h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v256; // 0:x3.8
  System_Nullable_Vector3__o v257; // 0:x0.16
  UnityEngine_Vector3_o v258; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v259; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v260; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v261; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v262; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v264; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v265; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v266; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v267; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42AEAC8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&Method_System_Nullable_float___ctor__);
    sub_B52984(&Method_System_Nullable_Vector3___ctor__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__);
    sub_B52984(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__);
    sub_B52984(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    sub_B52984(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_B52984(&WarBoardCallbackTask_TypeInfo);
    sub_B52984(&WarBoardMovePerformance_TypeInfo);
    sub_B52984(&WarBoardOrthostichySchedule_TypeInfo);
    sub_B52984(&WarBoardParallelSchedule_TypeInfo);
    sub_B52984(&WarBoardTaskBase___TypeInfo);
    sub_B52984(&StringLiteral_9019/*"MasterDamage"*/);
    byte_42AEAC8 = 1;
  }
  LODWORD(methoda.klass) = 0;
  methoda.name = 0LL;
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v5 = sub_B52A54(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v5, 0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v5 )
    goto LABEL_109;
  *(_QWORD *)(v5 + 24) = Instance;
  v14 = (System_Int32_array ***)(v5 + 24);
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), Instance, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_109;
  Instance = *(System_Int32_array ***)(*(_QWORD *)(v5 + 24) + 432LL);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardData__GetPiece_22803728((WarBoardData_o *)Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_109;
  v16 = (WarBoardPieceData_o *)Instance;
  Instance = *v14;
  if ( !*v14 )
    goto LABEL_109;
  *(UnityEngine_Vector3_o *)&v17 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v14;
  if ( !*v14 )
    goto LABEL_109;
  v20 = v17;
  v21 = v18;
  v22 = v19;
  *(UnityEngine_Vector3_o *)&v23 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0LL);
  if ( !*v14 )
    goto LABEL_109;
  Instance = (System_Int32_array **)(*v14)[54];
  if ( !Instance )
    goto LABEL_109;
  v26 = v23;
  v27 = v24;
  v28 = v25;
  Square = (System_Int32_array **)WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v5 + 16) = Square;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), Square, v30, v31, v32, v33, v34, v35);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v16, v37);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      42,
                                      ParticipantVals,
                                      0LL);
  if ( !v36 )
    goto LABEL_109;
  v251 = (UnityEngine_Component_o *)this;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v39 = v16;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                43,
                                                                ParticipantVals,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
    EventTasks,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v41 = (WarBoardManager_o **)(v5 + 24);
  v42 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)Instance,
                                                         41,
                                                         ParticipantVals,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
    v42,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v43 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v43, 0LL, 0LL);
  if ( !v43 )
    goto LABEL_109;
  v44 = *(System_Delegate_o **)(v43 + 32);
  v45 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v45,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0LL);
  v46 = (System_Int32_array **)System_Delegate__Combine(v44, (System_Delegate_o *)v45, 0LL);
  v53 = v46;
  if ( v46 && *v46 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    goto LABEL_112;
  *(_QWORD *)(v43 + 32) = v46;
  sub_B52920((BattleServantConfConponent_o *)(v43 + 32), v46, v47, v48, v49, v50, v51, v52);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v36,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v258.fields.x = v26 - v20;
  v258.fields.y = v27 - v21;
  v258.fields.z = v28 - v22;
  *(float *)&methoda.name = v26 - v20;
  *((float *)&methoda.name + 1) = v27 - v21;
  *(float *)&methoda.klass = v28 - v22;
  v259.fields.x = UnityEngine_Vector3__get_magnitude(v258, (const MethodInfo *)&methoda.name);
  x = v259.fields.x;
  *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Vector3__get_normalized(v259, (const MethodInfo *)&methoda.name);
  if ( !v39 )
    goto LABEL_109;
  v58 = v39;
  v59 = 136LL;
  if ( v39->fields._type_k__BackingField )
    v59 = 132LL;
  v60 = v57;
  v61 = (System_Int32_array ***)(v5 + 24);
  v249 = v55;
  v250 = v56;
  v62 = x - *(float *)((char *)&v251->klass + v59);
  if ( v62 > 0.0 )
  {
    v63 = v20 + (float)(v55 * v62);
    v246 = v26;
    v247 = v28;
    v64 = v21 + (float)(v56 * v62);
    v248 = v27;
    v65 = v22 + (float)(v57 * v62);
    gameObject = UnityEngine_Component__get_gameObject(v251, 0LL);
    v67 = *(float *)&v251[5].monitor;
    v68 = gameObject;
    v69 = (WarBoardMovePerformance_o *)sub_B52A54(WarBoardMovePerformance_TypeInfo);
    v260.fields.x = v20;
    v260.fields.y = v21;
    v260.fields.z = v22;
    v266.fields.x = v63;
    v266.fields.y = v64;
    v266.fields.z = v65;
    v70 = (EventMissionProgressRequest_Argument_ProgressData_o *)v69;
    WarBoardMovePerformance___ctor(v69, v68, v260, v266, v67, 5, v71);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v36,
      v70,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v21 = v64;
    v26 = v246;
    v28 = v247;
    v22 = v65;
    v27 = v248;
    v20 = v63;
  }
  v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v72,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      1,
                                      ParticipantVals,
                                      0LL);
  if ( !v72 )
    goto LABEL_109;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v72,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v73 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)Instance,
                                                         19,
                                                         ParticipantVals,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v72,
    v73,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v74 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)Instance,
                                                         39,
                                                         ParticipantVals,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v72,
    v74,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v39->fields._type_k__BackingField != 1 )
  {
    v96 = sub_B52A54(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v96,
      0LL);
    if ( !v96 )
      goto LABEL_109;
    *(_QWORD *)(v96 + 32) = v5;
    v103 = (Il2CppObject **)(v96 + 32);
    sub_B52920((BattleServantConfConponent_o *)(v96 + 32), (System_Int32_array **)v5, v97, v98, v99, v100, v101, v102);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
      (System_Collections_Generic_IEnumerable_T__o *)v72,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v104 = *(float *)&v251[5].fields.m_CachedPtr;
    v105 = v249 * v104;
    v106 = v250 * v104;
    v107 = v60 * v104;
    v108 = v28 - v107;
    v109 = v20 + v105;
    v110 = v21 + v106;
    v111 = v22 + v107;
    v262.fields.x = (float)(v26 - v105) - v109;
    v262.fields.y = (float)(v27 - v106) - (float)(v21 + v106);
    v262.fields.z = v108 - v111;
    methoda.methodPointer = *(Il2CppMethodPointer *)&v262.fields.x;
    *(float *)&methoda.invoker_method = v108 - v111;
    normalized = UnityEngine_Vector3__get_normalized(v262, &methoda);
    v112 = normalized.fields.x;
    y = normalized.fields.y;
    z = normalized.fields.z;
    magnitude = UnityEngine_Vector3__get_magnitude(normalized, &methoda);
    v116 = v109 + (float)((float)(v112 * magnitude) * 0.5);
    v117 = v110 + (float)((float)(y * magnitude) * 0.5);
    *(float *)&methoda.methodPointer = v116;
    *((float *)&methoda.methodPointer + 1) = v117;
    *(float *)&methoda.invoker_method = v111 + (float)((float)(z * magnitude) * 0.5);
    Instance = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))v251->klass[2]._1.events)(
                                        v251,
                                        v251->klass[2]._1.properties);
    *((float *)&methoda.methodPointer + 1) = v117 + v118;
    if ( !*(_QWORD *)(v96 + 32) )
      goto LABEL_109;
    v119 = *(_QWORD *)(*(_QWORD *)(v96 + 32) + 24LL);
    if ( !v119 )
      goto LABEL_109;
    v120 = *(_QWORD *)(v119 + 40);
    if ( !v120 )
      goto LABEL_109;
    Instance = *(System_Int32_array ***)(v120 + 72);
    if ( !Instance )
      goto LABEL_109;
    ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
    v122 = *(_QWORD *)(v96 + 32);
    *(float *)(v96 + 16) = ZoomSize;
    if ( !v122 )
      goto LABEL_109;
    v123 = *(_QWORD *)(v122 + 24);
    if ( !v123 )
      goto LABEL_109;
    v124 = *(_QWORD *)(v123 + 40);
    if ( !v124 )
      goto LABEL_109;
    Instance = *(System_Int32_array ***)(v124 + 64);
    if ( !Instance )
      goto LABEL_109;
    ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0LL);
    v127 = *(_QWORD *)(v96 + 32);
    *(UnityEngine_Vector2_o *)(v96 + 20) = ScrlPos;
    if ( !v127 )
      goto LABEL_109;
    v128 = *(WarBoardManager_o **)(v127 + 24);
    *(_QWORD *)&v264.fields.x = methoda.methodPointer;
    v264.fields.z = *(float *)&methoda.invoker_method;
    *(_QWORD *)&v257.fields.value.fields.x = &v253;
    *(_QWORD *)&v253.fields.value.fields.x = 0LL;
    *(_QWORD *)&v253.fields.value.fields.z = 0LL;
    *(_QWORD *)&v257.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v257, v264, v125);
    v129 = *((float *)&v251[5].fields + 1);
    p_size = (System_Nullable_float__o)&size;
    size = 0LL;
    System_Nullable_float____ctor(p_size, v129, (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
    if ( !v128 )
      goto LABEL_109;
    v256 = size;
    CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                     v128,
                                                                                     v253,
                                                                                     v256,
                                                                                     1,
                                                                                     0,
                                                                                     1,
                                                                                     0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v36,
      CameraPerformanceTask,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    if ( !*v103 )
      goto LABEL_109;
    Instance = (System_Int32_array **)(*v103)[1].monitor;
    if ( !Instance )
      goto LABEL_109;
    v265.fields.y = *((float *)&methoda.methodPointer + 1);
    v265.fields.z = *(float *)&methoda.invoker_method;
    v265.fields.x = *(float *)&methoda.methodPointer;
    Instance = (System_Int32_array **)WarBoardManager__CreateEncountkEffectTask(
                                        (WarBoardManager_o *)Instance,
                                        v265,
                                        1,
                                        0LL);
    v137 = Instance;
    v138 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v138 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v138->static_fields;
    _9__63_1 = static_fields->__9__63_1;
    if ( !_9__63_1 )
    {
      if ( (BYTE3(v138->vtable._0_Equals.methodPtr) & 4) != 0 && !v138->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v138);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v141 = (Il2CppObject *)static_fields->__9;
      _9__63_1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(_9__63_1, v141, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, 0LL);
      v142 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v142->__9__63_1 = _9__63_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v142->__9__63_1,
        (System_Int32_array **)_9__63_1,
        v143,
        v144,
        v145,
        v146,
        v147,
        v148);
    }
    if ( !v137 )
      goto LABEL_109;
    v137[10] = (System_Int32_array *)_9__63_1;
    sub_B52920(
      (BattleServantConfConponent_o *)(v137 + 10),
      (System_Int32_array **)_9__63_1,
      v131,
      v132,
      v133,
      v134,
      v135,
      v136);
    v149 = (System_Delegate_o *)v137[5];
    v150 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v150,
      (Il2CppObject *)v96,
      Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
      0LL);
    v151 = (System_Int32_array **)System_Delegate__Combine(v149, (System_Delegate_o *)v150, 0LL);
    v53 = v151;
    if ( !v151 || *v151 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v137[5] = (System_Int32_array *)v151;
      sub_B52920((BattleServantConfConponent_o *)(v137 + 5), v151, v152, v153, v154, v155, v156, v157);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v36,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v137,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      v158 = &v36->fields._size;
      if ( !v36->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v159 = v36->fields._items->m_Items[0];
      if ( !v159 )
        goto LABEL_109;
      v161 = *(System_Delegate_o **)&v159->fields.addCount;
      p_addCount = (BattleServantConfConponent_o *)&v159->fields.addCount;
      v162 = *v103;
      v163 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v163,
        v162,
        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
        0LL);
      v164 = (System_Int32_array **)System_Delegate__Combine(v161, (System_Delegate_o *)v163, 0LL);
      v53 = v164;
      if ( !v164 || *v164 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        p_addCount->klass = (BattleServantConfConponent_c *)v164;
        sub_B52920(p_addCount, v164, v165, v166, v167, v168, v169, v170);
        goto LABEL_93;
      }
    }
LABEL_112:
    v244 = (WarBoardPieceData_o *)sub_B52D50(v53);
    WarBoardPieceData__get_isServant(v244, v245);
    return;
  }
  v75 = *(float *)&v251[6].klass;
  v76 = v20 + (float)(v249 * v75);
  v77 = v21 + (float)(v250 * v75);
  v78 = v22 + (float)(v60 * v75);
  v79 = UnityEngine_Component__get_gameObject(v251, 0LL);
  v80 = *(float *)&v251[5].monitor;
  v81 = v79;
  v82 = (WarBoardMovePerformance_o *)sub_B52A54(WarBoardMovePerformance_TypeInfo);
  v261.fields.x = v76;
  v261.fields.y = v77;
  v261.fields.z = v78;
  v267.fields.x = v20;
  v267.fields.y = v21;
  v267.fields.z = v22;
  v83 = (System_Int32_array **)v82;
  WarBoardMovePerformance___ctor(v82, v81, v261, v267, v80, 4, v84);
  v86 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                 v58,
                                                                 v85);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  if ( !*v41 )
    goto LABEL_109;
  v87 = Instance;
  Instance = (System_Int32_array **)(*v41)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_109;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0LL);
  v89 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v89,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( v58->fields._forceId_k__BackingField || v58->fields._groupId_k__BackingField )
  {
    v91 = 0;
    if ( !v87 )
      goto LABEL_109;
  }
  else
  {
    v91 = v58->fields._type_k__BackingField == 1;
    if ( !v87 )
      goto LABEL_109;
  }
  if ( v91 )
  {
    v92 = 11;
    v93 = 1;
    v94 = (WarBoardMessageMaster_o *)v87;
    v95 = id;
  }
  else
  {
    v92 = 9;
    v94 = (WarBoardMessageMaster_o *)v87;
    v95 = id;
    v93 = 0;
  }
  Instance = (System_Int32_array **)WarBoardMessageMaster__GetMessageTasks(
                                      v94,
                                      v95,
                                      v92,
                                      v58->fields._breakPoint_k__BackingField,
                                      v93,
                                      v90);
  if ( !Instance )
    goto LABEL_109;
  v171 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v72,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v171,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
      v171,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (System_Int32_array **)sub_B5299C(WarBoardTaskBase___TypeInfo, 5LL);
  if ( !Instance )
LABEL_109:
    sub_B52A5C(Instance, v7);
  v178 = Instance;
  if ( v83 )
  {
    Instance = (System_Int32_array **)sub_B52A44(v83, *(_QWORD *)&(*Instance)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( !*((_DWORD *)v178 + 6) )
    goto LABEL_110;
  v178[4] = (System_Int32_array *)v83;
  sub_B52920((BattleServantConfConponent_o *)(v178 + 4), v83, v172, v173, v174, v175, v176, v177);
  Instance = (System_Int32_array **)v58->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_109;
  v179 = *v41;
  Instance = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*Instance)->m_Items[207])(
                                      Instance,
                                      *(_QWORD *)&(*Instance)->m_Items[209]);
  if ( !v179 )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__CreateAttackEffectTask(
                                      v179,
                                      *(UnityEngine_Vector3_o *)&v180,
                                      0,
                                      0LL);
  v189 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B52A44(Instance, *(_QWORD *)&(*v178)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v178 + 6) <= 1u )
    goto LABEL_110;
  v178[5] = (System_Int32_array *)v189;
  sub_B52920((BattleServantConfConponent_o *)(v178 + 5), v189, v183, v184, v185, v186, v187, v188);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v196 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B52A44(Instance, *(_QWORD *)&(*v178)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v178 + 6) <= 2u )
    goto LABEL_110;
  v178[6] = (System_Int32_array *)v196;
  sub_B52920((BattleServantConfConponent_o *)(v178 + 6), v196, v190, v191, v192, v193, v194, v195);
  Instance = (System_Int32_array **)v58->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                      (WarBoardPieceBaseComponent_o *)Instance,
                                      (System_String_o *)StringLiteral_9019/*"MasterDamage"*/,
                                      v197);
  v204 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B52A44(Instance, *(_QWORD *)&(*v178)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v178 + 6) <= 3u )
    goto LABEL_110;
  v178[7] = (System_Int32_array *)v204;
  sub_B52920((BattleServantConfConponent_o *)(v178 + 7), v204, v198, v199, v200, v201, v202, v203);
  v205 = (WarBoardOrthostichySchedule_o *)sub_B52A54(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_22689856(v205, v86, v206);
  if ( v205 )
  {
    Instance = (System_Int32_array **)sub_B52A44(v205, *(_QWORD *)&(*v178)->m_Items[9]);
    if ( !Instance )
    {
LABEL_111:
      v243 = sub_B52A7C();
      sub_B52A28(v243, 0LL);
    }
  }
  if ( *((_DWORD *)v178 + 6) <= 4u )
  {
LABEL_110:
    v242 = sub_B52A88(Instance);
    sub_B52A28(v242, 0LL);
  }
  v178[8] = (System_Int32_array *)v205;
  sub_B52920(
    (BattleServantConfConponent_o *)(v178 + 8),
    (System_Int32_array **)v205,
    v207,
    v208,
    v209,
    v210,
    v211,
    v212);
  v213 = sub_B52A54(WarBoardParallelSchedule_TypeInfo);
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v213, 0LL);
  *(_QWORD *)(v213 + 56) = v178;
  sub_B52920((BattleServantConfConponent_o *)(v213 + 56), v178, v214, v215, v216, v217, v218, v219);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v36,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v213,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v158 = &v36->fields._size;
LABEL_93:
  if ( *v158 < 1 )
    return;
  v220 = v36->fields._items->m_Items[0];
  if ( !v220 )
    goto LABEL_109;
  v223 = *(System_Delegate_o **)&v220->fields.addCount;
  v221 = (BattleServantConfConponent_o *)&v220->fields.addCount;
  v222 = v223;
  v224 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v224 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  v225 = v224->static_fields;
  _9__63_4 = v225->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( (BYTE3(v224->vtable._0_Equals.methodPtr) & 4) != 0 && !v224->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v224);
      v225 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v227 = (Il2CppObject *)v225->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v227, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0LL);
    v228 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v228->__9__63_4 = _9__63_4;
    sub_B52920(
      (BattleServantConfConponent_o *)&v228->__9__63_4,
      (System_Int32_array **)_9__63_4,
      v229,
      v230,
      v231,
      v232,
      v233,
      v234);
  }
  v235 = (System_Int32_array **)System_Delegate__Combine(v222, (System_Delegate_o *)_9__63_4, 0LL);
  v53 = v235;
  if ( v235 && *v235 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    goto LABEL_112;
  v221->klass = (BattleServantConfConponent_c *)v235;
  sub_B52920(v221, v235, v236, v237, v238, v239, v240, v241);
  Instance = *v61;
  if ( !*v61 )
    goto LABEL_109;
  WarBoardManager__AddTask_18580124(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v36,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttackResume(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  WarBoardManager_o *v7; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardData_o *v9; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v13; // s11
  float v14; // s0
  float v15; // s1
  float v16; // s2
  __int64 v17; // x8
  float v18; // s15
  float v19; // s12
  float v20; // s13
  float v21; // s14
  MethodInfo v22; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AEAC9 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardControlUiDataComponent_TypeInfo);
    byte_42AEAC9 = 1;
  }
  LODWORD(v22.invoker_method) = 0;
  v22.methodPointer = 0LL;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_15;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22803728(Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_15;
  v9 = Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v7, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v24 = WarBoardManager__GetSquarePosition(v7, squareIndex, 0LL);
  v24.fields.x = v24.fields.x - x;
  v24.fields.y = v24.fields.y - y;
  v24.fields.z = v24.fields.z - z;
  v22.methodPointer = *(Il2CppMethodPointer *)&v24.fields.x;
  *(float *)&v22.invoker_method = v24.fields.z;
  v25.fields.x = UnityEngine_Vector3__get_magnitude(v24, &v22);
  v13 = v25.fields.x;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_normalized(v25, &v22);
  if ( !v9 )
    goto LABEL_15;
  v17 = 136LL;
  if ( LODWORD(v9->fields.stageEntity) )
    v17 = 132LL;
  v18 = *(float *)((char *)&this->klass + v17);
  v19 = v14;
  v20 = v15;
  v21 = v16;
  Instance = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Instance = (WarBoardData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B52A5C(Instance, v6);
  }
  v26.fields.x = x + (float)(v19 * (float)(v13 - v18));
  v26.fields.y = y + (float)(v20 * (float)(v13 - v18));
  v26.fields.z = z + (float)(v21 * (float)(v13 - v18));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v26, 0LL);
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnBreak(
        WarBoardPieceBaseComponent_o *this,
        int32_t oldBreakPoint,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        int32_t dummyPoint,
        WarBoardTaskBase_TaskCallback_o *startCallback,
        bool cameraMove,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v14; // x22
  void *monitor; // x8
  WarBoardUserServantData_o *v16; // x0
  WebViewManager_o *Instance; // x25
  const MethodInfo_2175340 *v18; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardTaskBase_array *v20; // x26
  WebViewManager_o *v21; // x27
  const MethodInfo_2175340 *v22; // x2
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x24
  _DWORD *v30; // x8
  __int64 v31; // x24
  UnityEngine_Component_c *klass; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  System_Nullable_Vector3__o v35; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v36; // 0:x3.8
  System_Nullable_float__o v37; // 0:x3.8
  System_Nullable_Vector3__o v38; // 0:x0.16
  System_Nullable_Vector3__o v39; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  v14 = (UnityEngine_Component_o *)this;
  if ( (byte_42AEAD0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Nullable_Vector3___ctor__);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardPieceBaseComponent_o *)sub_B52984(&WarBoardTaskBase___TypeInfo);
    byte_42AEAD0 = 1;
  }
  if ( cameraMove )
  {
    monitor = v14[8].monitor;
    if ( !monitor )
      goto LABEL_30;
    v16 = (WarBoardUserServantData_o *)*((_QWORD *)monitor + 21);
    if ( !v16
      || (this = (WarBoardPieceBaseComponent_o *)WarBoardUserServantData__IsBoss(v16, 0LL),
          ((unsigned __int8)this & 1) == 0) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform(v14, 0LL);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v38.fields.value.fields.x = &v35;
          *(_QWORD *)&v35.fields.value.fields.x = 0LL;
          *(_QWORD *)&v35.fields.value.fields.z = 0LL;
          *(_QWORD *)&v38.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v38, localPosition, v18);
          if ( Instance )
          {
            v36 = cameraSize;
            CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                             (WarBoardManager_o *)Instance,
                                                                                             v35,
                                                                                             v36,
                                                                                             1,
                                                                                             0,
                                                                                             1,
                                                                                             0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
              CameraPerformanceTask,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
            goto LABEL_19;
          }
        }
LABEL_30:
        sub_B52A5C(this, *(_QWORD *)&oldBreakPoint);
      }
      v20 = (WarBoardTaskBase_array *)sub_B5299C(WarBoardTaskBase___TypeInfo, 1LL);
      v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform(v14, 0LL);
      if ( !this )
        goto LABEL_30;
      v41 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      *(_QWORD *)&v39.fields.value.fields.x = &v35;
      v35 = (System_Nullable_Vector3__o)0LL;
      *(_QWORD *)&v39.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v39, v41, v22);
      if ( !v21 )
        goto LABEL_30;
      v37 = cameraSize;
      this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                               (WarBoardManager_o *)v21,
                                               v35,
                                               v37,
                                               1,
                                               0,
                                               1,
                                               0LL);
      if ( !v20 )
        goto LABEL_30;
      v29 = (System_Int32_array **)this;
      if ( this )
      {
        this = (WarBoardPieceBaseComponent_o *)sub_B52A44(this, v20->obj.klass->_1.element_class);
        if ( !this )
        {
          v34 = sub_B52A7C();
          sub_B52A28(v34, 0LL);
        }
      }
      if ( !v20->max_length )
      {
LABEL_32:
        v33 = sub_B52A88(this);
        sub_B52A28(v33, 0LL);
      }
      v20->m_Items[0] = (WarBoardTaskBase_o *)v29;
      sub_B52920((BattleServantConfConponent_o *)v20->m_Items, v29, v23, v24, v25, v26, v27, v28);
      if ( !Instance )
        goto LABEL_30;
      WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v20, 0LL);
    }
  }
LABEL_19:
  v30 = v14[8].monitor;
  if ( !v30 )
    goto LABEL_30;
  v31 = 0LL;
  if ( dummyPoint < 0 )
    dummyPoint = v30[13];
  while ( (int)v31 < v30[14] )
  {
    klass = v14[8].klass;
    if ( !klass )
      goto LABEL_30;
    if ( (unsigned int)v31 >= LODWORD(klass->_1.namespaze) )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v31);
    if ( this )
    {
      if ( (int)v31 >= oldBreakPoint || dummyPoint > (int)v31 )
      {
        WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)this, dummyPoint > (int)v31, 0, 0LL);
      }
      else
      {
        WarBoardBreakPointComponent__OnBreak(
          (WarBoardBreakPointComponent_o *)this,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)taskList,
          startCallback,
          0LL);
        startCallback = 0LL;
      }
      v30 = v14[8].monitor;
      ++v31;
      if ( v30 )
        continue;
    }
    goto LABEL_30;
  }
}


void __fastcall WarBoardPieceBaseComponent__OnDamage(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnDead(
        WarBoardPieceBaseComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w1
  const MethodInfo *v7; // x2

  if ( (byte_42AEAC5 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AEAC5 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B52A5C(Instance, v5);
  v6 = 20 * (dispPriotiry - WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL));
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, v6, v7);
}


void __fastcall WarBoardPieceBaseComponent__OnGuts(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnInvincible(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnMapDamage(
        WarBoardPieceBaseComponent_o *this,
        int32_t damage,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnMapGainHP(
        WarBoardPieceBaseComponent_o *this,
        int32_t oldHp,
        int32_t gainHp,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnMove(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x19
  WarBoardPieceData_o *Instance; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  WarBoardPieceData_o **v14; // x20
  System_Int32_array **Piece_22803728; // x0
  WarBoardPieceData_o **v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x8
  System_Int32_array **Square; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x25
  System_Delegate_o *v32; // x26
  WarBoardTaskBase_TaskCallback_o *v33; // x27
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v50; // x28
  struct WarBoardPieceData_o *v51; // x8
  UnityEngine_GameObject_o *v52; // x26
  float v53; // s0
  float v54; // s1
  float v55; // s2
  float v56; // s8
  float v57; // s9
  float v58; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float z; // s14
  WarBoardMovePerformance_o *v63; // x0
  WarBoardMovePerformance_o *v64; // x27
  const MethodInfo *v65; // x3
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x26
  UnityEngine_GameObject_o *v73; // x27
  float v74; // s0
  float v75; // s1
  float v76; // s2
  struct WarBoardPieceData_o *v77; // x8
  float v78; // s8
  float v79; // s9
  float v80; // s10
  float v81; // s13
  float v82; // s11
  float v83; // s12
  float v84; // s14
  WarBoardMovePerformance_o *v85; // x0
  System_Int32_array **v86; // x28
  const MethodInfo *v87; // x3
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  int32_t v100; // w28
  __int64 v101; // x25
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Delegate_o *v108; // x24
  WarBoardTaskBase_TaskCallback_o *v109; // x27
  System_Int32_array **v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Collections_Generic_List_WarBoardTaskBase__o *v117; // x26
  struct WarBoardPieceData_o *v118; // x8
  System_Delegate_o *EndCallback; // x28
  WarBoardTaskBase_TaskCallback_o *v120; // x24
  System_Int32_array **v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  struct WarBoardPieceData_o *v128; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v129; // x22
  System_Int32_array **PieceEventVals; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  const MethodInfo *v137; // x1
  System_Int32_array *v138; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v140; // x0
  WarBoardManager_o *v141; // x20
  WarBoardTaskBase_array *v142; // x21
  __int64 v143; // x22
  WarBoardTaskBase_TaskCallback_o *v144; // x23
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  __int64 v157; // x0
  __int64 v158; // x0
  WarBoardPieceData_o *v159; // x0
  const MethodInfo *v160; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v161; // [xsp+18h] [xbp-88h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v165; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v167; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42AEAC6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__);
    sub_B52984(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
    sub_B52984(&WarBoardCallbackTask_TypeInfo);
    sub_B52984(&WarBoardMovePerformance_TypeInfo);
    sub_B52984(&WarBoardParallelSchedule_TypeInfo);
    sub_B52984(&WarBoardTaskBase___TypeInfo);
    byte_42AEAC6 = 1;
  }
  v5 = sub_B52A54(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v5, 0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 48) = Instance;
  v14 = (WarBoardPieceData_o **)(v5 + 48);
  sub_B52920((BattleServantConfConponent_o *)(v5 + 48), (System_Int32_array **)Instance, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 48) )
    goto LABEL_64;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v5 + 48) + 432LL);
  if ( !Instance )
    goto LABEL_64;
  Piece_22803728 = (System_Int32_array **)WarBoardData__GetPiece_22803728((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v5 + 40) = Piece_22803728;
  v16 = (WarBoardPieceData_o **)(v5 + 40);
  sub_B52920((BattleServantConfConponent_o *)(v5 + 40), Piece_22803728, v17, v18, v19, v20, v21, v22);
  v23 = *(_QWORD *)(v5 + 48);
  if ( !v23 )
    goto LABEL_64;
  Instance = *(WarBoardPieceData_o **)(v23 + 432);
  if ( !Instance )
    goto LABEL_64;
  Square = (System_Int32_array **)WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v5 + 16) = Square;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), Square, v25, v26, v27, v28, v29, v30);
  v31 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v31, 0LL, 0LL);
  if ( !v31 )
    goto LABEL_64;
  v32 = *(System_Delegate_o **)(v31 + 32);
  v33 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0LL);
  v34 = (System_Int32_array **)System_Delegate__Combine(v32, (System_Delegate_o *)v33, 0LL);
  v41 = v34;
  if ( !v34 || *v34 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v31 + 32) = v34;
    sub_B52920((BattleServantConfConponent_o *)(v31 + 32), v34, v35, v36, v37, v38, v39, v40);
    Instance = (WarBoardPieceData_o *)sub_B5299C(int___TypeInfo, 2LL);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_64;
    v7 = (const MethodInfo *)Instance;
    if ( !Instance )
      goto LABEL_64;
    groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
    if ( !groupId_k__BackingField )
      goto LABEL_65;
    Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField;
    if ( groupId_k__BackingField == 1 )
      goto LABEL_65;
    Instance->fields._currentActionCount_k__BackingField = squareIndex;
    *(_QWORD *)(v5 + 24) = Instance;
    sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)Instance, v42, v43, v44, v45, v46, v47);
    v161 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v161,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    v50 = *(_QWORD *)(v5 + 40);
    Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v51 = this->fields.pieceData;
    if ( !v51 )
      goto LABEL_64;
    v52 = (UnityEngine_GameObject_o *)Instance;
    Instance = *(WarBoardPieceData_o **)(v5 + 48);
    if ( !Instance )
      goto LABEL_64;
    *(UnityEngine_Vector3_o *)&v53 = WarBoardManager__GetSquarePosition(
                                       (WarBoardManager_o *)Instance,
                                       v51->fields._nowSquareIndex_k__BackingField,
                                       0LL);
    Instance = *v14;
    if ( !*v14 )
      goto LABEL_64;
    v56 = v53;
    v57 = v54;
    v58 = v55;
    SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    x = SquarePosition.fields.x;
    y = SquarePosition.fields.y;
    z = SquarePosition.fields.z;
    v63 = (WarBoardMovePerformance_o *)sub_B52A54(WarBoardMovePerformance_TypeInfo);
    v163.fields.x = v56;
    v163.fields.y = v57;
    v163.fields.z = v58;
    v166.fields.x = x;
    v166.fields.y = y;
    v166.fields.z = z;
    v64 = v63;
    WarBoardMovePerformance___ctor(v63, v52, v163, v166, pixelPerSecond, 0, v65);
    if ( v50 )
    {
      Instance = (WarBoardPieceData_o *)sub_B5299C(WarBoardTaskBase___TypeInfo, 3LL);
      if ( !Instance )
        goto LABEL_64;
      v72 = (System_Int32_array **)Instance;
      if ( v64 )
      {
        Instance = (WarBoardPieceData_o *)sub_B52A44(v64, Instance->klass->_1.element_class);
        if ( !Instance )
          goto LABEL_66;
      }
      if ( !*((_DWORD *)v72 + 6) )
        goto LABEL_65;
      v72[4] = (System_Int32_array *)v64;
      sub_B52920((BattleServantConfConponent_o *)(v72 + 4), (System_Int32_array **)v64, v66, v67, v68, v69, v70, v71);
      if ( !*v16 )
        goto LABEL_64;
      Instance = (WarBoardPieceData_o *)(*v16)->fields.pieceComponent;
      if ( !Instance )
        goto LABEL_64;
      Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v14 )
        goto LABEL_64;
      v73 = (UnityEngine_GameObject_o *)Instance;
      *(UnityEngine_Vector3_o *)&v74 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v14, squareIndex, 0LL);
      v77 = this->fields.pieceData;
      if ( !v77 )
        goto LABEL_64;
      Instance = *v14;
      if ( !*v14 )
        goto LABEL_64;
      v78 = v74;
      v79 = v75;
      v80 = v76;
      v164 = WarBoardManager__GetSquarePosition(
               (WarBoardManager_o *)Instance,
               v77->fields._nowSquareIndex_k__BackingField,
               0LL);
      v81 = this->fields.pixelPerSecond;
      v82 = v164.fields.x;
      v83 = v164.fields.y;
      v84 = v164.fields.z;
      v85 = (WarBoardMovePerformance_o *)sub_B52A54(WarBoardMovePerformance_TypeInfo);
      v165.fields.x = v78;
      v165.fields.y = v79;
      v165.fields.z = v80;
      v167.fields.x = v82;
      v167.fields.y = v83;
      v167.fields.z = v84;
      v86 = (System_Int32_array **)v85;
      WarBoardMovePerformance___ctor(v85, v73, v165, v167, v81, 0, v87);
      if ( v86 )
      {
        Instance = (WarBoardPieceData_o *)sub_B52A44(v86, *(_QWORD *)&(*v72)->m_Items[9]);
        if ( !Instance )
          goto LABEL_66;
      }
      if ( *((_DWORD *)v72 + 6) <= 1u )
        goto LABEL_65;
      v72[5] = (System_Int32_array *)v86;
      sub_B52920((BattleServantConfConponent_o *)(v72 + 5), v86, v88, v89, v90, v91, v92, v93);
      Instance = (WarBoardPieceData_o *)sub_B52A44(v31, *(_QWORD *)&(*v72)->m_Items[9]);
      if ( !Instance )
        goto LABEL_66;
      if ( *((_DWORD *)v72 + 6) <= 2u )
        goto LABEL_65;
      v72[6] = (System_Int32_array *)v31;
      v100 = squareIndex;
      sub_B52920((BattleServantConfConponent_o *)(v72 + 6), (System_Int32_array **)v31, v94, v95, v96, v97, v98, v99);
      v101 = sub_B52A54(WarBoardParallelSchedule_TypeInfo);
      WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v101, 0LL);
      *(_QWORD *)(v101 + 56) = v72;
      sub_B52920((BattleServantConfConponent_o *)(v101 + 56), v72, v102, v103, v104, v105, v106, v107);
      if ( !v101 )
        goto LABEL_64;
      v108 = *(System_Delegate_o **)(v101 + 40);
      v109 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v109,
        (Il2CppObject *)v5,
        Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
        0LL);
      v110 = (System_Int32_array **)System_Delegate__Combine(v108, (System_Delegate_o *)v109, 0LL);
      v41 = v110;
      if ( !v110 || *v110 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        *(_QWORD *)(v101 + 40) = v110;
        sub_B52920((BattleServantConfConponent_o *)(v101 + 40), v110, v111, v112, v113, v114, v115, v116);
        v117 = (System_Collections_Generic_List_WarBoardTaskBase__o *)v161;
        if ( !v161 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v161,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v101,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        v118 = this->fields.pieceData;
        if ( !v118 || !*v16 )
          goto LABEL_64;
        (*v16)->fields._nowSquareIndex_k__BackingField = v118->fields._nowSquareIndex_k__BackingField;
LABEL_45:
        v128 = this->fields.pieceData;
        if ( !v128 )
          goto LABEL_64;
        v128->fields._nowSquareIndex_k__BackingField = v100;
        v129 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v129,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
        Instance = this->fields.pieceData;
        if ( !Instance )
          goto LABEL_64;
        PieceEventVals = (System_Int32_array **)WarBoardPieceData__CreatePieceEventVals(Instance, v7);
        *(_QWORD *)(v5 + 32) = PieceEventVals;
        sub_B52920((BattleServantConfConponent_o *)(v5 + 32), PieceEventVals, v131, v132, v133, v134, v135, v136);
        Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Instance )
          goto LABEL_64;
        Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                            (WarBoardManager_o *)Instance,
                                            30,
                                            *(System_Int32_array **)(v5 + 32),
                                            0LL);
        if ( !v129 )
          goto LABEL_64;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v129,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        if ( *v16 )
        {
          v138 = WarBoardPieceData__CreatePieceEventVals(*v16, v137);
          Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !Instance )
            goto LABEL_64;
          EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                        (WarBoardManager_o *)Instance,
                                                                        30,
                                                                        v138,
                                                                        0LL);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v129,
            EventTasks,
            (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        }
        Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Instance )
          goto LABEL_64;
        v140 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                36,
                                                                0LL,
                                                                0LL);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v129,
          v140,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v129,
               (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
        {
          Instance = *v14;
          if ( !*v14 )
            goto LABEL_64;
          WarBoardManager__AddTask_18580124(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v129,
            0LL);
        }
        Instance = *v14;
        if ( !*v14 )
          goto LABEL_64;
        WarBoardManager__AddTask_18580124((WarBoardManager_o *)Instance, 0, v117, 0LL);
        v141 = *(WarBoardManager_o **)(v5 + 48);
        v142 = (WarBoardTaskBase_array *)sub_B5299C(WarBoardTaskBase___TypeInfo, 1LL);
        v143 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
        WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v143, 0LL, 0LL);
        v144 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
        WarBoardTaskBase_TaskCallback___ctor(
          v144,
          (Il2CppObject *)v5,
          Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
          0LL);
        if ( !v143
          || (*(_QWORD *)(v143 + 32) = v144,
              sub_B52920(
                (BattleServantConfConponent_o *)(v143 + 32),
                (System_Int32_array **)v144,
                v145,
                v146,
                v147,
                v148,
                v149,
                v150),
              !v142) )
        {
LABEL_64:
          sub_B52A5C(Instance, v7);
        }
        Instance = (WarBoardPieceData_o *)sub_B52A44(v143, v142->obj.klass->_1.element_class);
        if ( Instance )
        {
          if ( v142->max_length )
          {
            v142->m_Items[0] = (WarBoardTaskBase_o *)v143;
            sub_B52920(
              (BattleServantConfConponent_o *)v142->m_Items,
              (System_Int32_array **)v143,
              v151,
              v152,
              v153,
              v154,
              v155,
              v156);
            if ( v141 )
            {
              WarBoardManager__AddTask(v141, 0, v142, 0LL);
              Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( Instance )
              {
                WarBoardManager__JudgmentGameSet((WarBoardManager_o *)Instance, 0LL);
                return;
              }
            }
            goto LABEL_64;
          }
LABEL_65:
          v157 = sub_B52A88(Instance);
          sub_B52A28(v157, 0LL);
        }
LABEL_66:
        v158 = sub_B52A7C();
        sub_B52A28(v158, 0LL);
      }
    }
    else
    {
      if ( !v64 )
        goto LABEL_64;
      EndCallback = (System_Delegate_o *)v64->fields.EndCallback;
      v120 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v120,
        (Il2CppObject *)v5,
        Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
        0LL);
      v121 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v120, 0LL);
      v41 = v121;
      if ( !v121 || *v121 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        v64->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v121;
        sub_B52920((BattleServantConfConponent_o *)&v64->fields.EndCallback, v121, v122, v123, v124, v125, v126, v127);
        v117 = (System_Collections_Generic_List_WarBoardTaskBase__o *)v161;
        if ( !v161 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v161,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v161,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        v100 = squareIndex;
        goto LABEL_45;
      }
    }
  }
  v159 = (WarBoardPieceData_o *)sub_B52D50(v41);
  WarBoardPieceData__get_gameObject(v159, v160);
}


void __fastcall WarBoardPieceBaseComponent__OnRevive(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  if ( (byte_42AEAC4 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AEAC4 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B52A5C(Instance, v4);
  v5 = 20 * (WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL) - this->fields.dispPriotiry);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, v5, v6);
}


void __fastcall WarBoardPieceBaseComponent__OnShowDamagePopup(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_String_o *v8; // x1
  int32_t v9; // w3
  const MethodInfo *v10; // x5

  if ( (byte_42AEAD2 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18315/*"ef_dm_base"*/);
    byte_42AEAD2 = 1;
  }
  if ( !System_String__IsNullOrEmpty(popText, 0LL) )
    WarBoardPieceBaseComponent__CreateEffectText(this, v8, popText, v9, taskList, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x23
  WarBoardData_o *Instance; // x0
  __int64 v7; // x1
  WarBoardManager_o *v8; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardWallData_o *v10; // x21
  float x; // s14
  float y; // s15
  float z; // s8
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s11
  float v18; // s12
  float v19; // s13
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  __int64 v27; // x24
  System_Delegate_o *v28; // x26
  WarBoardTaskBase_TaskCallback_o *v29; // x27
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  float v37; // s13
  float v38; // s1
  float v39; // s2
  float v40; // s0
  float v41; // s11
  float v42; // s12
  float v43; // s0
  float v44; // s13
  float v45; // s9
  float v46; // s10
  UnityEngine_GameObject_o *gameObject; // x23
  WarBoardMovePerformance_o *v48; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x24
  const MethodInfo *v50; // x3
  float lengthMoveAttack; // s0
  float v52; // s10
  float v53; // s11
  float v54; // s12
  UnityEngine_GameObject_o *v55; // x0
  float v56; // s13
  UnityEngine_GameObject_o *v57; // x22
  WarBoardMovePerformance_o *v58; // x0
  System_Int32_array **v59; // x24
  const MethodInfo *v60; // x3
  System_Collections_Generic_List_WarBoardTaskBase__o *v61; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x23
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x21
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x21
  WarBoardOrthostichySchedule_o *v84; // x21
  const MethodInfo *v85; // x2
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  __int64 v99; // x0
  __int64 v100; // x0
  WarBoardPieceBaseComponent_o *v101; // x0
  int32_t v102; // w1
  const MethodInfo *v103; // x2
  float pixelPerSecond; // [xsp+8h] [xbp-A8h]
  float v105; // [xsp+Ch] [xbp-A4h]
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v114; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42AEACB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__);
    sub_B52984(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
    sub_B52984(&WarBoardCallbackTask_TypeInfo);
    sub_B52984(&WarBoardMovePerformance_TypeInfo);
    sub_B52984(&WarBoardOrthostichySchedule_TypeInfo);
    sub_B52984(&WarBoardParallelSchedule_TypeInfo);
    sub_B52984(&WarBoardTaskBase___TypeInfo);
    byte_42AEACB = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v5 = sub_B52A54(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v5, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v8 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)WarBoardData__GetWall(Instance, squareIndex, 0, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_35;
  v10 = (WarBoardWallData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v8, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  *(UnityEngine_Vector3_o *)&v14 = WarBoardManager__GetSquarePosition(v8, squareIndex, 0LL);
  Instance = v8->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_35;
  v17 = v14;
  v18 = v15;
  v19 = v16;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0LL);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = Instance;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)Instance, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v27 = sub_B52A54(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v27, 0LL, 0LL);
  if ( !v27 )
    goto LABEL_35;
  v28 = *(System_Delegate_o **)(v27 + 32);
  v29 = (WarBoardTaskBase_TaskCallback_o *)sub_B52A54(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0LL);
  v30 = (System_Int32_array **)System_Delegate__Combine(v28, (System_Delegate_o *)v29, 0LL);
  if ( v30 && *v30 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v101 = (WarBoardPieceBaseComponent_o *)sub_B52D50(v30);
    WarBoardPieceBaseComponent__OnAfterWallAttack(v101, v102, v103);
    return;
  }
  *(_QWORD *)(v27 + 32) = v30;
  sub_B52920((BattleServantConfConponent_o *)(v27 + 32), v30, v31, v32, v33, v34, v35, v36);
  if ( !v26 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v26,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v108.fields.x = v17 - x;
  v108.fields.y = v18 - y;
  v108.fields.z = v19 - z;
  *(float *)&methoda.methodPointer = v17 - x;
  *((float *)&methoda.methodPointer + 1) = v18 - y;
  *(float *)&methoda.invoker_method = v19 - z;
  v109.fields.x = UnityEngine_Vector3__get_magnitude(v108, &methoda);
  v37 = v109.fields.x;
  *(UnityEngine_Vector3_o *)(&v38 - 1) = UnityEngine_Vector3__get_normalized(v109, &methoda);
  v41 = v40;
  v42 = v38;
  v43 = v37 - this->fields.lengthOnAttack;
  v44 = v39;
  if ( v43 > 0.0 )
  {
    v45 = x + (float)(v41 * v43);
    v105 = y + (float)(v38 * v43);
    v46 = z + (float)(v39 * v43);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v48 = (WarBoardMovePerformance_o *)sub_B52A54(WarBoardMovePerformance_TypeInfo);
    v110.fields.y = y;
    y = v105;
    v110.fields.x = x;
    v110.fields.z = z;
    v113.fields.x = v45;
    v113.fields.y = v105;
    v113.fields.z = v46;
    v49 = (EventMissionProgressRequest_Argument_ProgressData_o *)v48;
    WarBoardMovePerformance___ctor(v48, gameObject, v110, v113, pixelPerSecond, 5, v50);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v26,
      v49,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    x = v45;
    z = v46;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v52 = x + (float)(v41 * lengthMoveAttack);
  v53 = y + (float)(v42 * lengthMoveAttack);
  v54 = z + (float)(v44 * lengthMoveAttack);
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v56 = this->fields.pixelPerSecond;
  v57 = v55;
  v58 = (WarBoardMovePerformance_o *)sub_B52A54(WarBoardMovePerformance_TypeInfo);
  v111.fields.x = v52;
  v111.fields.y = v53;
  v111.fields.z = v54;
  v114.fields.x = x;
  v114.fields.y = y;
  v114.fields.z = z;
  v59 = (System_Int32_array **)v58;
  WarBoardMovePerformance___ctor(v58, v57, v111, v114, v56, 4, v60);
  if ( !v10 )
    goto LABEL_35;
  v61 = WarBoardWallData__DecrementBreakPointPerformance(v10, 1, 0LL);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0LL, 0LL);
  if ( !v62 )
    goto LABEL_35;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v62,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
    (System_Collections_Generic_IEnumerable_T__o *)v62,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)sub_B5299C(WarBoardTaskBase___TypeInfo, 4LL);
  if ( !Instance )
    goto LABEL_35;
  v69 = (System_Int32_array **)Instance;
  if ( v59 )
  {
    Instance = (WarBoardData_o *)sub_B52A44(v59, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( !*((_DWORD *)v69 + 6) )
    goto LABEL_36;
  v69[4] = (System_Int32_array *)v59;
  sub_B52920((BattleServantConfConponent_o *)(v69 + 4), v59, v63, v64, v65, v66, v67, v68);
  Instance = (WarBoardData_o *)v10->fields.component;
  if ( !Instance )
    goto LABEL_35;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0LL);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v8, IconPosition, 0, 0LL);
  v76 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_B52A44(Instance, *(_QWORD *)&(*v69)->m_Items[9]);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( *((_DWORD *)v69 + 6) <= 1u )
    goto LABEL_36;
  v69[5] = (System_Int32_array *)v76;
  sub_B52920((BattleServantConfConponent_o *)(v69 + 5), v76, v70, v71, v72, v73, v74, v75);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_35:
    sub_B52A5C(Instance, v7);
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v83 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_B52A44(Instance, *(_QWORD *)&(*v69)->m_Items[9]);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( *((_DWORD *)v69 + 6) <= 2u )
    goto LABEL_36;
  v69[6] = (System_Int32_array *)v83;
  sub_B52920((BattleServantConfConponent_o *)(v69 + 6), v83, v77, v78, v79, v80, v81, v82);
  v84 = (WarBoardOrthostichySchedule_o *)sub_B52A54(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_22689856(v84, v61, v85);
  if ( v84 )
  {
    Instance = (WarBoardData_o *)sub_B52A44(v84, *(_QWORD *)&(*v69)->m_Items[9]);
    if ( !Instance )
    {
LABEL_37:
      v100 = sub_B52A7C();
      sub_B52A28(v100, 0LL);
    }
  }
  if ( *((_DWORD *)v69 + 6) <= 3u )
  {
LABEL_36:
    v99 = sub_B52A88(Instance);
    sub_B52A28(v99, 0LL);
  }
  v69[7] = (System_Int32_array *)v84;
  sub_B52920((BattleServantConfConponent_o *)(v69 + 7), (System_Int32_array **)v84, v86, v87, v88, v89, v90, v91);
  v92 = sub_B52A54(WarBoardParallelSchedule_TypeInfo);
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v92, 0LL);
  *(_QWORD *)(v92 + 56) = v69;
  sub_B52920((BattleServantConfConponent_o *)(v92 + 56), v69, v93, v94, v95, v96, v97, v98);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v26,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( v26->fields._size >= 1 )
    WarBoardManager__AddTask_18580124(v8, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v26, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent__PlayEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardPieceBaseComponent__SetEffect(this, effectKey, 1, v3);
}


void __fastcall WarBoardPieceBaseComponent__PlaySimpleAnimation(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v6; // x2

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_5;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0LL) )
    return;
  WarBoardPieceBaseComponent__StopSimpleAnimation(this, animationName, v6);
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
LABEL_5:
    sub_B52A5C(simpleAnimation, animationName);
  SimpleAnimation__Play_16625408(simpleAnimation, animationName, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__RepareBreakPointByPiece(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8
  int breakPoint_k__BackingField; // w20
  WarBoardPieceBaseComponent_o *v4; // x19
  __int64 v5; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  __int64 v7; // x0

  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_8:
    sub_B52A5C(this, method);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v4 = this;
  v5 = 0LL;
  while ( (int)v5 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v4->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v5 >= breakPoints->max_length )
      {
        v7 = sub_B52A88(this);
        sub_B52A28(v7, 0LL);
      }
      this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v5];
      if ( this )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          breakPoint_k__BackingField > (int)v5,
          0,
          0LL);
        pieceData = v4->fields.pieceData;
        ++v5;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void __fastcall WarBoardPieceBaseComponent__Selectable(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 1;
}


void __fastcall WarBoardPieceBaseComponent__SetButtonTweenTarget(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x19
  UnityEngine_Object_o *v12; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0

  if ( (byte_42AEABB & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEABB = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v10 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_22;
      }
      v11 = 0LL;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v12,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v12,
                                                                                                 0LL);
          if ( !v4 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v4,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v21 = sub_B52A88(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B52A28(v21, 0LL);
    }
  }
LABEL_22:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                                                                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B52A5C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B52920(
    (BattleServantConfConponent_o *)&button->fields.tweenTargets,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_42AEABD & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEABD = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_B52A5C(0LL, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0LL);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0LL);
  }
}


bool __fastcall WarBoardPieceBaseComponent__SetEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x22
  peRenderTexture_ChangeLayerObject_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *listEffectData; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x21
  struct UnityEngine_Renderer_o *renderer; // x21
  UnityEngine_Renderer_c *klass; // x8
  unsigned __int64 v20; // x22
  bool v21; // w19
  UnityEngine_Object_o *v22; // x20
  __int64 v23; // x0

  if ( (byte_42AEAD1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
    sub_B52984(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__);
    sub_B52984(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
    byte_42AEAD1 = 1;
  }
  v7 = sub_B52A54(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_20;
  *(_QWORD *)(v7 + 16) = effectKey;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)effectKey, v10, v11, v12, v13, v14, v15);
  listEffectData = this->fields.listEffectData;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  if ( !listEffectData )
    goto LABEL_20;
  v8 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listEffectData,
         (System_Predicate_T__o *)v17,
         (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  if ( !v8 )
    return (char)v8;
  renderer = v8->fields.renderer;
  if ( !renderer )
LABEL_20:
    sub_B52A5C(v8, v9);
  klass = renderer[1].klass;
  if ( (int)klass >= 1 )
  {
    v20 = 0LL;
    v21 = isDisp;
    do
    {
      if ( v20 >= (unsigned int)klass )
      {
        v23 = sub_B52A88(v8);
        sub_B52A28(v23, 0LL);
      }
      v22 = (UnityEngine_Object_o *)*((_QWORD *)&renderer[1].monitor + v20);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(v22, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( !v22 )
          goto LABEL_20;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v22, v21, 0LL);
      }
      LODWORD(klass) = renderer[1].klass;
      ++v20;
    }
    while ( (__int64)v20 < (int)klass );
  }
  LOBYTE(v8) = 1;
  return (char)v8;
}


void __fastcall WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_42AEABC & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEABC = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_B52A5C(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__ShowActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v2; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20
  UnityEngine_GameObject_o *v5; // x20
  bool activeSelf; // w0
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x10
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_42AEABF & 1) == 0 )
  {
    this = (WarBoardPieceBaseComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEABF = 1;
  }
  pieceData = v2->fields.pieceData;
  if ( !pieceData )
    goto LABEL_25;
  if ( pieceData->fields._limitActionCount_k__BackingField >= 1 )
  {
    this = (WarBoardPieceBaseComponent_o *)v2->fields.currentActionPointRoot;
    if ( !this )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    pieceData = v2->fields.pieceData;
    if ( !pieceData )
      goto LABEL_25;
  }
  this = (WarBoardPieceBaseComponent_o *)pieceData->fields._Cost_k__BackingField;
  if ( !this )
    goto LABEL_25;
  if ( WarBoardCost__get_HasCost((WarBoardCost_o *)this, 0LL) )
  {
    currentPieceActionPointRoot = (UnityEngine_Object_o *)v2->fields.currentPieceActionPointRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0LL, 0LL) )
    {
      this = (WarBoardPieceBaseComponent_o *)v2->fields.currentPieceActionPointRoot;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (WarBoardPieceBaseComponent_o *)v2->fields.currentActionPointRoot;
        if ( this )
        {
          v5 = v2->fields.currentPieceActionPointRoot;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          v7 = 96LL;
          if ( activeSelf )
            v7 = 108LL;
          if ( activeSelf )
            v8 = 112LL;
          else
            v8 = 100LL;
          if ( activeSelf )
            v9 = 116LL;
          else
            v9 = 104LL;
          v10.fields.y = *(float *)((char *)&v2->klass + v8);
          v10.fields.x = *(float *)((char *)&v2->klass + v7);
          v10.fields.z = *(float *)((char *)&v2->klass + v9);
          GameObjectExtensions__SetLocalPosition(v5, v10, 0LL);
          goto LABEL_24;
        }
      }
LABEL_25:
      sub_B52A5C(this, method);
    }
  }
LABEL_24:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v2->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    v2,
    v2->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__ShowActionTarget(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_B52A5C(0LL, method);
  UnityEngine_GameObject__SetActive(selectObject, 1, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent__ShowStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall WarBoardPieceBaseComponent__StopEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardPieceBaseComponent__SetEffect(this, effectKey, 0, v3);
}


void __fastcall WarBoardPieceBaseComponent__StopSimpleAnimation(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_7;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0LL) )
  {
    simpleAnimation = this->fields.simpleAnimation;
    if ( simpleAnimation )
    {
      SimpleAnimation__Stop_16622908(simpleAnimation, animationName, 0LL);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0LL);
        return;
      }
    }
LABEL_7:
    sub_B52A5C(simpleAnimation, animationName);
  }
}


void __fastcall WarBoardPieceBaseComponent__Unselectable(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardPieceBaseComponent__UpdateDisplayActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceBaseComponent_o *v3; // x19
  UILabel_o *currentActionPointLabel; // x20
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardPieceData_o *v6; // x8
  struct WarBoardCost_o *v7; // x8
  UILabel_o *currentPieceActionPointLabel; // x20
  int32_t currentActionCount_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  currentActionCount_k__BackingField = 0;
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_12;
  v3 = this;
  if ( pieceData->fields._limitActionCount_k__BackingField >= 1 )
  {
    currentActionPointLabel = this->fields.currentActionPointLabel;
    currentActionCount_k__BackingField = pieceData->fields._currentActionCount_k__BackingField;
    this = (WarBoardPieceBaseComponent_o *)System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0LL);
    if ( !currentActionPointLabel )
      goto LABEL_12;
    UILabel__set_text(currentActionPointLabel, (System_String_o *)this, 0LL);
    pieceData = v3->fields.pieceData;
    if ( !pieceData )
      goto LABEL_12;
  }
  Cost_k__BackingField = pieceData->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField )
  {
    this = (WarBoardPieceBaseComponent_o *)WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v6 = v3->fields.pieceData;
      if ( v6 )
      {
        v7 = v6->fields._Cost_k__BackingField;
        if ( v7 )
        {
          currentPieceActionPointLabel = v3->fields.currentPieceActionPointLabel;
          currentActionCount_k__BackingField = v7->fields._CurrentActionPoint_k__BackingField;
          this = (WarBoardPieceBaseComponent_o *)System_Int32__ToString(
                                                   (int32_t)&currentActionCount_k__BackingField,
                                                   0LL);
          if ( currentPieceActionPointLabel )
          {
            UILabel__set_text(currentPieceActionPointLabel, (System_String_o *)this, 0LL);
            goto LABEL_11;
          }
        }
      }
LABEL_12:
      sub_B52A5C(this, method);
    }
  }
LABEL_11:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v3->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    v3,
    v3->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiBrightnessByPieceStatus(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v4; // x23
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o **v13; // x21
  __int64 v14; // x22
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v15; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v23; // w23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v24; // x25
  System_Collections_Generic_IEnumerable_T__o *v25; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v26; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v28; // x25
  System_Collections_Generic_IEnumerable_T__o *v29; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v30; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v33; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *removeTweenTargetObjects; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v39; // x1
  UnityEngine_GameObject_o *v40; // x0
  WarBoardManager_TaskList_o *v41; // x1
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  struct UICommonButton_o *v44; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_HashSet_Enumerator_T__o v52; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v53; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AEAC2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_UIWidget___ctor__);
    sub_B52984(&System_Action_UIWidget__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_UIWidget___);
    sub_B52984(&Method_System_Linq_Enumerable_Distinct_GameObject___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__);
    sub_B52984(&System_Collections_Generic_HashSet_UIWidget__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor___68511592);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__);
    sub_B52984(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__);
    sub_B52984(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
    byte_42AEAC2 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v3 = sub_B52A54(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v3, 0LL);
  v4 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v4,
    (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v3 )
    goto LABEL_36;
  *(_QWORD *)(v3 + 24) = v4;
  v13 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o **)(v3 + 24);
  v14 = v3 + 16;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)v4, v7, v8, v9, v10, v11, v12);
  v15 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v15,
    (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v3 + 16) = v15;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_36;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasAvailablePermanentSleepBuff(pieceData, v6);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v23 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v24 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_UIWidget__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v24,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      (const MethodInfo_2627780 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      cannotActTurnDurk,
      (System_Action_T__o *)v24,
      (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_36;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, v6);
    if ( v23 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v25 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_UIWidget__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v26,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        (const MethodInfo_2627780 *)Method_System_Action_UIWidget___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v25,
        (System_Action_T__o *)v26,
        (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v28 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_UIWidget__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v28,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      (const MethodInfo_2627780 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v28,
      (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v23 & 1) != 0 )
    {
      v29 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_UIWidget__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v30,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        (const MethodInfo_2627780 *)Method_System_Action_UIWidget___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v29,
        (System_Action_T__o *)v30,
        (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_36;
  if ( *(int *)(*(_QWORD *)v14 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_36;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v33 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v33,
    tweenTargets,
    (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_GameObject___ctor___68511592);
  pieceData = *(WarBoardPieceData_o **)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_36;
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v52,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)pieceData,
    (const MethodInfo_24E0B0C *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v53 = v52;
  while ( 1 )
  {
    v34 = System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v53,
            (const MethodInfo_20112EC *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v34 )
      break;
    current = v53.fields._current;
    if ( !v53.fields._current )
      sub_B52A5C(v34, v35);
    removeTweenTargetObjects = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.removeTweenTargetObjects;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v53.fields._current, 0LL);
    if ( !removeTweenTargetObjects )
      sub_B52A5C(gameObject, gameObject);
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           removeTweenTargetObjects,
           (WarBoardManager_TaskList_o *)gameObject,
           (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v41 = (WarBoardManager_TaskList_o *)v40;
      if ( !v33 )
        sub_B52A5C(v40, v40);
      goto LABEL_22;
    }
    if ( !*v13 )
      sub_B52A5C(0LL, v39);
    if ( System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           *v13,
           (BattleBuffData_BuffData_o *)current,
           (const MethodInfo_24E06A8 *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      gray = UnityEngine_Color__get_gray(0LL);
      UIWidget__set_color((UIWidget_o *)current, gray, 0LL);
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v41 = (WarBoardManager_TaskList_o *)v42;
      if ( !v33 )
        sub_B52A5C(v42, v42);
LABEL_22:
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v33,
        v41,
        (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color((UIWidget_o *)current, white, 0LL);
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !v33 )
        sub_B52A5C(v43, v43);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v53,
    (const MethodInfo_20112E8 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v44 = this->fields.button;
  v45 = System_Linq_Enumerable__Distinct_string_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (const MethodInfo_1B5FF7C *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                       v45,
                                       (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v44 )
LABEL_36:
    sub_B52A5C(pieceData, v6);
  v44->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_B52920(
    (BattleServantConfConponent_o *)&v44->fields.tweenTargets,
    (System_Int32_array **)pieceData,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiByBuffChanged(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v4; // x1
  WarBoardPieceStatusLabel_o *v5; // x0

  if ( (byte_42AEAC1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEAC1 = 1;
  }
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0LL, 0LL) )
  {
    v5 = this->fields.pieceStatusLabelComponent;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    WarBoardPieceStatusLabel__SetupLabel(v5, this->fields.pieceData, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__UpdateWidgetDepth(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t PieceDispPriority; // w0
  const MethodInfo *v7; // x2

  if ( (byte_42AEAD5 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AEAD5 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B52A5C(Instance, v5);
  PieceDispPriority = WarBoardData__GetPieceDispPriority(Instance, this->fields.pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v7);
}


void __fastcall WarBoardPieceBaseComponent__WidgetDepthIncrement(
        WarBoardPieceBaseComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x21
  struct UIWidget_array *uiWidgets; // x8
  struct UIWidget_array **p_uiWidgets; // x20
  System_Int32_array **ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int max_length; // w21
  int v22; // w22
  __int64 v23; // x23
  __int64 v24; // x9
  __int64 v25; // x9
  __int64 v26; // x22
  __int64 v27; // x23
  UnityEngine_Object_o *v28; // x21
  struct UIWidget_array *v29; // x8
  __int64 v30; // x0

  v4 = this;
  if ( (byte_42AEACE & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    this = (WarBoardPieceBaseComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEACE = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                       (UnityEngine_Component_o *)v4,
                                                                                       1,
                                                                                       (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B52920(
      (BattleServantConfConponent_o *)&v4->fields.uiWidgets,
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    uiWidgets = v4->fields.uiWidgets;
    if ( !uiWidgets )
      goto LABEL_27;
    max_length = uiWidgets->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0;
      v23 = 32LL;
      do
      {
        if ( !uiWidgets )
          goto LABEL_27;
        if ( v22 >= uiWidgets->max_length )
          goto LABEL_29;
        v24 = *(__int64 *)((char *)&uiWidgets->obj.klass + v23);
        if ( !v24 )
          goto LABEL_27;
        if ( *(int *)(v24 + 168) >= 1001 )
        {
          *(Il2CppClass **)((char *)&uiWidgets->obj.klass + v23) = 0LL;
          sub_B52920((BattleServantConfConponent_o *)((char *)uiWidgets + v23), 0LL, v15, v16, v17, v18, v19, v20);
        }
        uiWidgets = *p_uiWidgets;
        ++v22;
        v23 += 8LL;
      }
      while ( v22 < max_length );
      if ( !uiWidgets )
LABEL_27:
        sub_B52A5C(this, v14);
    }
  }
  v25 = *(_QWORD *)&uiWidgets->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = (int)v25;
    v27 = 4LL;
    while ( v27 - 4 < (unsigned __int64)uiWidgets->max_length )
    {
      v28 = (UnityEngine_Object_o *)*((_QWORD *)&uiWidgets->obj.klass + v27);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v29 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_27;
        if ( v27 - 4 >= (unsigned __int64)v29->max_length )
          break;
        this = (WarBoardPieceBaseComponent_o *)*((_QWORD *)&v29->obj.klass + v27);
        if ( !this )
          goto LABEL_27;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0LL);
      }
      if ( v27 - 3 >= v26 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v27;
      if ( !*p_uiWidgets )
        goto LABEL_27;
    }
LABEL_29:
    v30 = sub_B52A88(this);
    sub_B52A28(v30, 0LL);
  }
}


WarBoardServantPieceBuffTurnComponent_o *__fastcall WarBoardPieceBaseComponent__get_BuffTrunNotice(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


WarBoardPieceData_o *__fastcall WarBoardPieceBaseComponent__get_PieceData(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.pieceData;
}


WarBoardControlUiDataComponent_o *__fastcall WarBoardPieceBaseComponent__get_UiDataComp(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.uiDataComp;
}


void __fastcall WarBoardPieceBaseComponent_ScriptEffectData___ctor(
        WarBoardPieceBaseComponent_ScriptEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD736 & 1) == 0 )
  {
    sub_B52984(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_42AD736 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall WarBoardPieceBaseComponent___c___ctor(WarBoardPieceBaseComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall WarBoardPieceBaseComponent___c___GetParticipantVals_b__62_0(
        WarBoardPieceBaseComponent___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AD739 & 1) == 0 )
  {
    sub_B52984(&WarBoardControlUiDataComponent_TypeInfo);
    byte_42AD739 = 1;
  }
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__ResumeUiDataAll(0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_1(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AD737 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD737 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  CommonUI__maskFadeout(Instance, 2, 0.0, 0LL, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AD738 & 1) == 0 )
  {
    sub_B52984(&WarBoardControlUiDataComponent_TypeInfo);
    byte_42AD738 = 1;
  }
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll(0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_42AD73A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_42AD73A = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_B52A5C(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)targetUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_42AD73B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_42AD73B = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_B52A5C(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)darkenUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_42AD73C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_42AD73C = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_B52A5C(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)targetUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_42AD73D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_42AD73D = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_B52A5C(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)darkenUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_B52A5C(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_42AD73E & 1) == 0 )
  {
    sub_B52984(&WarBoardControlUiDataComponent_TypeInfo);
    byte_42AD73E = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_42AD73F & 1) == 0 )
  {
    sub_B52984(&WarBoardControlUiDataComponent_TypeInfo);
    byte_42AD73F = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_g__AddAfterTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  WarBoardPieceData_o *targetSquarePiece; // x0
  System_Int32_array *PieceEventVals; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v9; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_42AD740 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AD740 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0LL);
  if ( !v3 )
    goto LABEL_13;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0LL);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                  Instance,
                                                                  38,
                                                                  PieceEventVals,
                                                                  0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
      EventTasks,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_B52A5C(Instance, v5);
  v9 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(Instance, 37, 0LL, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    v9,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_B52A5C(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_B52A5C(0LL, method);
  WarBoardManager__TransitionBattle(warBoardManager, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass63_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_1___OnAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass63_1_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *CS___8__locals1; // x8
  WarBoardPieceBaseComponent___c__DisplayClass63_1_o *v3; // x19
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v4; // x8
  struct WarBoardManager_o *warBoardManager; // x8
  struct MapCamera_o *mapCamera; // x8
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v7; // x8
  struct WarBoardManager_o *v8; // x8
  struct MapCamera_o *v9; // x8
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v10; // x8
  struct WarBoardManager_o *v11; // x8
  struct MapCamera_o *v12; // x8
  struct UnityEngine_Vector2_o *mScrl; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_16;
  v3 = this;
  this = (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)CS___8__locals1->fields.warBoardManager;
  if ( !this )
    goto LABEL_16;
  WarBoardManager__ClearPartyBuff((WarBoardManager_o *)this, 0LL);
  v4 = v3->fields.CS___8__locals1;
  if ( !v4 )
    goto LABEL_16;
  warBoardManager = v4->fields.warBoardManager;
  if ( !warBoardManager )
    goto LABEL_16;
  mapCamera = warBoardManager->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_16;
  this = (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)mapCamera->fields.mZoom;
  if ( !this )
    goto LABEL_16;
  MapZoom__SetZoomSize((MapZoom_o *)this, v3->fields.prevCameraSize, 1, 0, 0LL);
  v7 = v3->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_16;
  v8 = v7->fields.warBoardManager;
  if ( !v8
    || (v9 = v8->fields.mapCamera) == 0LL
    || (this = (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v9->fields.mScrl) == 0LL
    || (MapScroll__SetScrlPos((MapScroll_o *)this, v3->fields.prevCameraPos, 0LL),
        (v10 = v3->fields.CS___8__locals1) == 0LL)
    || (v11 = v10->fields.warBoardManager) == 0LL
    || (v12 = v11->fields.mapCamera) == 0LL
    || (mScrl = (struct UnityEngine_Vector2_o *)v12->fields.mScrl) == 0LL )
  {
LABEL_16:
    sub_B52A5C(this, method);
  }
  mScrl[3] = v3->fields.prevCameraPos;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_42AD742 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AD742 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(_4__this, method);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_B52A5C(this, method);
  return targetPiece->fields._isDead_k__BackingField && this->fields.moveAfterActionCheck;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  WarBoardPieceData_o *targetPiece; // x0
  struct WarBoardManager_o *warBoardManager; // x8
  int32_t id; // w21
  struct WarBoardPieceData_o *v8; // x8
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v10; // x22
  int32_t v11; // w2
  bool v12; // w4
  WarBoardMessageMaster_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w3
  System_Int32_array *v16; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  WarBoardManager_o *v19; // x19

  if ( (byte_42AD741 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    byte_42AD741 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_26;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isMaster(targetPiece, 0LL);
  if ( ((unsigned __int8)targetPiece & 1) != 0 )
  {
    warBoardManager = this->fields.warBoardManager;
    if ( !warBoardManager )
      goto LABEL_26;
    targetPiece = (WarBoardPieceData_o *)warBoardManager->fields._warBoardData_k__BackingField;
    if ( !targetPiece )
      goto LABEL_26;
    id = WarBoardData__get_id((WarBoardData_o *)targetPiece, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v8 = this->fields.targetPiece;
    if ( !v8 )
      goto LABEL_26;
    breakPoint_k__BackingField = v8->fields._breakPoint_k__BackingField;
    v10 = (WarBoardMessageMaster_o *)targetPiece;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0LL);
    if ( !v10 )
      goto LABEL_26;
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      v11 = 12;
      v12 = 1;
      v13 = v10;
      v14 = id;
      v15 = breakPoint_k__BackingField;
    }
    else
    {
      v11 = 10;
      v13 = v10;
      v14 = id;
      v15 = breakPoint_k__BackingField;
      v12 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v13, v14, v11, v15, v12, 0LL);
    if ( !v3 )
      goto LABEL_26;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  targetPiece = (WarBoardPieceData_o *)this->fields.__4__this;
  if ( !targetPiece )
    goto LABEL_26;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceBaseComponent__GetParticipantVals(
                                         (WarBoardPieceBaseComponent_o *)targetPiece,
                                         this->fields.targetPiece,
                                         0LL);
  if ( !this->fields.warBoardManager )
    goto LABEL_26;
  v16 = (System_Int32_array *)targetPiece;
  targetPiece = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                         this->fields.warBoardManager,
                                         2,
                                         (System_Int32_array *)targetPiece,
                                         0LL);
  if ( !v3 )
    goto LABEL_26;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)targetPiece,
                                                                20,
                                                                v16,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    EventTasks,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)targetPiece,
                                                         40,
                                                         v16,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    v18,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v19 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v19 )
    {
      WarBoardManager__InsertRunningTask(v19, (WarBoardTaskBase_array *)targetPiece, 0LL);
      return;
    }
LABEL_26:
    sub_B52A5C(targetPiece, v4);
  }
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass66_0___OnWallAttack_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_B52A5C(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_42AD744 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AD744 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(_4__this, method);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *targetWall; // x8

  targetWall = this->fields.targetWall;
  if ( targetWall )
    LOBYTE(targetWall) = targetWall->fields._isDestroy_k__BackingField;
  return (unsigned __int8)targetWall & this->fields.moveAfterActionCheck;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_42AD743 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AD743 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0LL, 0LL);
  if ( !v3 )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
      return;
    }
LABEL_9:
    sub_B52A5C(Instance, v5);
  }
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent___c__DisplayClass83_0___SetEffect_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass83_0_o *this,
        WarBoardPieceBaseComponent_ScriptEffectData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B52A5C(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0LL);
}