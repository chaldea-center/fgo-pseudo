void __fastcall WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_41865A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_6793/*"Frame{0}"*/, v6);
    byte_41865A8 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listEffectData,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416LL;
  this->fields.lengthMoveAttack = 25.0;
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_31A08F0;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_31A0900;
  v14 = (System_Int32_array **)StringLiteral_6793/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6793/*"Frame{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseFrameName, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.removeTweenTargetObjects,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  const MethodInfo *v16; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Int32_array *PieceEventVals; // x22
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  float pixelPerSecond; // s13
  float v22; // s11
  float v23; // s12
  float v24; // s14
  WarBoardMovePerformance_o *v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x20
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  WebViewManager_o *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_418659F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_B2C35C(&WarBoardMovePerformance_TypeInfo, v14);
    byte_418659F = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_12;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, v16);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_12;
  pieceData = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                       (WarBoardManager_o *)pieceData,
                                       30,
                                       PieceEventVals,
                                       0LL);
  if ( !v15 )
    goto LABEL_12;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
    (System_Collections_Generic_IEnumerable_T__o *)pieceData,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_12;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)pieceData,
                                                                36,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
    EventTasks,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_12;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v22 = SquarePosition.fields.x;
  v23 = SquarePosition.fields.y;
  v24 = SquarePosition.fields.z;
  v25 = (WarBoardMovePerformance_o *)sub_B2C42C(WarBoardMovePerformance_TypeInfo);
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  v33.fields.x = v22;
  v33.fields.y = v23;
  v33.fields.z = v24;
  v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)v25;
  WarBoardMovePerformance___ctor(v25, gameObject, v32, v33, pixelPerSecond, 0, v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v15,
    v26,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v28 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                               (WarBoardManager_o *)pieceData,
                                                               38,
                                                               PieceEventVals,
                                                               0LL),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
          v28,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v29 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                               (WarBoardManager_o *)pieceData,
                                                               37,
                                                               0LL,
                                                               0LL),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
          v29,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_12:
    sub_B2C434(pieceData, v16);
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
  __int64 v3; // x1
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t controllType_k__BackingField; // w8
  WarBoardManager_o *v7; // x20
  struct WarBoardSeSetting_o *seSetting; // x8
  System_String_o *DeselectSe; // x21
  const MethodInfo *v10; // x2
  Il2CppMethodPointer methodPtr; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  struct WarBoardPieceData_o *v13; // x8
  struct WarBoardSeSetting_o *v14; // x8
  System_String_o *SelectSe; // x21
  struct WarBoardPieceData_o *v16; // x8
  struct WarBoardSeSetting_o *v17; // x8
  System_String_o *v18; // x21
  struct WarBoardSeSetting_o *v19; // x8
  System_String_o *OpenSimpleInfoSe; // x19

  if ( (byte_4186590 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4186590 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  controllType_k__BackingField = Instance->fields._controllType_k__BackingField;
  v7 = Instance;
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
      v13 = this->fields.pieceData;
      if ( v13 )
      {
        WarBoardManager__SquareSelect(v7, v13->fields._nowSquareIndex_k__BackingField, 0LL);
        v10 = this->klass->vtable._14_EditPiece.method;
        methodPtr = this->klass->vtable._15_ChangeStatus.methodPtr;
LABEL_37:
        ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v10)(this, methodPtr);
        return;
      }
LABEL_46:
      sub_B2C434(Instance, v5);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL)
      && WarBoardManager__IsSelectedPieceSame(v7, this->fields.pieceData, 0LL) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
          WarBoardManager__DeselectPiece(v7, 1, 0LL, 0LL);
          v10 = this->klass->vtable._13_HideStatus.method;
          methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
          goto LABEL_37;
        }
      }
      goto LABEL_46;
    }
    if ( WarBoardManager__get_isSelectedPiece(v7, 0LL) && this->fields.isSelectable )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v14 = Instance->fields.seSetting;
        if ( v14 )
        {
          SelectSe = v14->fields.SelectSe;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          Instance = (WarBoardManager_o *)SoundManager__playSe(SelectSe, 0LL);
          v16 = this->fields.pieceData;
          if ( v16 )
          {
            WarBoardManager__SelectedPieceAction(v7, v16->fields._nowSquareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
      goto LABEL_46;
    }
    if ( WarBoardManager__IsNowTurn(v7, this->fields.pieceData, 0LL) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v17 = Instance->fields.seSetting;
        if ( v17 )
        {
          v18 = v17->fields.SelectSe;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v18, 0LL);
          WarBoardManager__SelectPiece(v7, this->fields.pieceData, 0LL);
          v10 = this->klass->vtable._12_ShowStatus.method;
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
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    v19 = Instance->fields.seSetting;
    if ( !v19 )
      goto LABEL_46;
    OpenSimpleInfoSe = v19->fields.OpenSimpleInfoSe;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v20; // x21
  UnityEngine_GameObject_o *v21; // x22
  WarBoardCommonEffectPerformance_o *v22; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x21
  System_Nullable_Vector3__o v24; // 0:x3.16
  System_Nullable_Vector3__o v25; // 0:x5.16

  if ( (byte_41865A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_B2C35C(&WarBoardCommonEffectPerformance_TypeInfo, v13);
    sub_B2C35C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v14);
    byte_41865A5 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_20B3104 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v20 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
      v20 = (UnityEngine_Object_o *)transform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)CommonEffectAsset_object,
                                        (UnityEngine_Transform_o *)v20,
                                        (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
    v22 = (WarBoardCommonEffectPerformance_o *)sub_B2C42C(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v24.fields.value.fields.x = 0LL;
    *(_QWORD *)&v24.fields.value.fields.z = 0LL;
    *(_QWORD *)&v25.fields.value.fields.x = 0LL;
    *(_QWORD *)&v25.fields.value.fields.z = 0LL;
    v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)v22;
    WarBoardCommonEffectPerformance___ctor(v22, 0LL, v21, v24, v25, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
    if ( v15 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        v23,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v15,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__AddTask_18201492(
          (WarBoardManager_o *)Instance,
          0,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
          0LL);
        return;
      }
    }
LABEL_21:
    sub_B2C434(Instance, v17);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *effectDamageBaseObject; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x22
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v18; // x1
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v20; // x21
  WarBoardCommonEffectPerformance_o *v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x20
  System_Nullable_Vector3__o v23; // 0:x3.16
  System_Nullable_Vector3__o v24; // 0:x5.16

  if ( (byte_41865A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_B2C35C(&WarBoardCommonEffectPerformance_TypeInfo, v14);
    byte_41865A6 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(0LL, effectDamageBaseObject, 0LL) )
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    v20 = this->fields.effectDamageBaseObject;
    v21 = (WarBoardCommonEffectPerformance_o *)sub_B2C42C(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v23.fields.value.fields.x = 0LL;
    *(_QWORD *)&v23.fields.value.fields.z = 0LL;
    *(_QWORD *)&v24.fields.value.fields.x = 0LL;
    *(_QWORD *)&v24.fields.value.fields.z = 0LL;
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v21;
    WarBoardCommonEffectPerformance___ctor(v21, 0LL, v20, v23, v24, (System_Nullable_Vector3__o)0, 0, 0, 0, 0LL);
    if ( v16 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        v22,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v16,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      Instance = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__AddTask_18201492(
          (WarBoardManager_o *)Instance,
          0,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v16,
          0LL);
        return;
      }
    }
LABEL_18:
    sub_B2C434(Instance, v18);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *PieceEventVals; // x20
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  _QWORD **v17; // x20
  __int64 v18; // x19
  __int16 v19; // w8
  __int64 v20; // x19
  __int64 v21; // x19
  __int64 v22; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  WarBoardPieceBaseComponent___c_c *v25; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__62_0; // x20
  Il2CppObject *v28; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  v4 = this;
  if ( (byte_4186599 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, targetPiece);
    sub_B2C35C(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__, v8);
    sub_B2C35C(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__, v11);
    this = (WarBoardPieceBaseComponent_o *)sub_B2C35C(&WarBoardPieceBaseComponent___c_TypeInfo, v12);
    byte_4186599 = 1;
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
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                   targetPiece,
                                                                   v14);
      v16 = System_Linq_Enumerable__Concat_int_(
              PieceEventVals,
              v15,
              (const MethodInfo_17423A4 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v16,
               (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_33:
    sub_B2C434(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v24 = *(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.m_CachedPtr;
    v25 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v25 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__62_0,
        v28,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        (const MethodInfo_2713350 *)Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
      v29 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v29->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v29->__9__62_0,
        (System_Int32_array **)_9__62_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                 v24,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                 (const MethodInfo_1A9812C *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v16,
             (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v17 = (_QWORD **)Method_System_Array_Empty_int___;
  v18 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v19 = *(_WORD *)(v18 + 306);
  if ( (v19 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v19 = *(_WORD *)(v18 + 306);
  }
  if ( (v19 & 0x400) != 0 )
  {
    v20 = *v17[6];
    if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
      sub_AC505C(*v17[6]);
    if ( !*(_DWORD *)(v20 + 224) )
    {
      v21 = *v17[6];
      if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
        sub_AC505C(*v17[6]);
      j_il2cpp_runtime_class_init_0(v21);
    }
  }
  v22 = *v17[6];
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AC505C(*v17[6]);
  return **(System_Int32_array ***)(v22 + 184);
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_41865A1 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName);
    byte_41865A1 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_B2C42C(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0LL);
  return v6;
}


void __fastcall WarBoardPieceBaseComponent__HideActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_4186592 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186592 = 1;
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
    sub_B2C434(currentActionPointRoot, method);
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
    sub_B2C434(0LL, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x19
  WarBoardManager_o *v4; // x0

  if ( (byte_4186595 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_4186595 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v2 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v3 = **(_QWORD **)(v2 + 192);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AC505C(v3);
  v4 = **(WarBoardManager_o ***)(v3 + 184);
  if ( !v4 )
    sub_B2C434(0LL, method);
  WarBoardManager__HideSimplePopup(v4, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__Initialize(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 gameObject; // x0
  __int64 v16; // x1
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Transform_o *transform; // x21
  int v31; // s0
  int32_t breakPointMax_k__BackingField; // w21
  struct WarBoardBreakPointComponent_array *v35; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int32_t v43; // w25
  float v44; // s8
  float v45; // s9
  struct UnityEngine_GameObject_o *breakPointPrefab; // x23
  UnityEngine_Transform_o *v47; // x24
  UnityEngine_GameObject_o *v48; // x24
  WarBoardBreakPointComponent_o *v49; // x23
  struct UIWidget_o *breakPointParent; // x8
  struct WarBoardBreakPointComponent_array *v51; // x26
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int32_t v58; // w24
  Il2CppClass **v59; // x0
  struct WarBoardBreakPointComponent_array *v60; // x8
  float maxSpacing; // s0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UnityEngine_Transform_array *v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x22
  const MethodInfo *v76; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v81; // x21
  UnityEngine_Object_o *v82; // x22
  struct UnityEngine_GameObject_o *v83; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  UnityEngine_Object_o *v91; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  __int64 v99; // x0
  __int64 v100; // x0
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418658C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UILabel___, pieceData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B2C35C(&UnityEngine_Transform___TypeInfo, v10);
    sub_B2C35C(&WarBoardBreakPointComponent___TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v12);
    sub_B2C35C(&StringLiteral_21853/*"root_text/type01/dm_base"*/, v13);
    sub_B2C35C(&StringLiteral_18181/*"ef_dm_base"*/, v14);
    byte_418658C = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.pieceData = pieceData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.pieceData,
    (System_Int32_array **)pieceData,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_27;
  if ( !gameObject )
    goto LABEL_27;
  *(UnityEngine_Vector3_o *)&v31 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)gameObject,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
  breakPointMax_k__BackingField = pieceData->fields._breakPointMax_k__BackingField;
  v35 = (struct WarBoardBreakPointComponent_array *)sub_B2C374(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v35;
  p_breakPoints = &this->fields.breakPoints;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.breakPoints,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_27;
  if ( breakPointMax_k__BackingField >= 1 )
  {
    v43 = 0;
    v44 = 0.0;
    v45 = (float)*(int *)(gameObject + 160) / (float)breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = this->fields.breakPointPrefab;
      v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (__int64)UnityEngine_Object__Instantiate_UILabel_(
                              (UILabel_o *)breakPointPrefab,
                              v47,
                              (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
      if ( !gameObject )
        goto LABEL_27;
      v48 = (UnityEngine_GameObject_o *)gameObject;
      v49 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v48, 0LL);
      if ( !gameObject )
        goto LABEL_27;
      v101.fields.y = 0.0;
      v101.fields.z = 0.0;
      v101.fields.x = v44;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v101, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_27;
      if ( !v49 )
        goto LABEL_27;
      WarBoardBreakPointComponent__Initialize(
        v49,
        breakPointParent->fields.mDepth + 2 * (~v43 + breakPointMax_k__BackingField),
        v43 + 1,
        pieceData->fields._type_k__BackingField == 1,
        pieceData->fields._type_k__BackingField == 0 && pieceData->fields._forceId_k__BackingField != 0,
        0,
        0LL);
      v51 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_27;
      gameObject = sub_B2C41C(v49, v51->obj.klass->_1.element_class);
      if ( !gameObject )
        goto LABEL_62;
      v58 = v43;
      if ( v43 >= v51->max_length )
        goto LABEL_61;
      v59 = &v51->obj.klass + v43;
      v59[4] = (Il2CppClass *)v49;
      sub_B2C2F8((BattleServantConfConponent_o *)(v59 + 4), (System_Int32_array **)v49, v52, v53, v54, v55, v56, v57);
      v60 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_27;
      if ( v43 >= v60->max_length )
        goto LABEL_61;
      gameObject = (__int64)v60->m_Items[v43];
      if ( !gameObject )
        goto LABEL_27;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        pieceData->fields._breakPoint_k__BackingField > v43++,
        0,
        0LL);
      if ( breakPointMax_k__BackingField <= v58 + 1 )
        break;
      maxSpacing = v49->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      if ( maxSpacing >= v45 )
        maxSpacing = v45;
      v44 = v44 + maxSpacing;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&pieceData->fields.pieceComponent,
    (System_Int32_array **)this,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_27;
LABEL_31:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  v68 = (UnityEngine_Transform_array *)sub_B2C374(UnityEngine_Transform___TypeInfo, 1LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v68 )
    goto LABEL_27;
  v75 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B2C41C(gameObject, v68->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_62:
      v100 = sub_B2C454();
      sub_B2C400(v100, 0LL);
    }
  }
  if ( !v68->max_length )
  {
LABEL_61:
    v99 = sub_B2C460(gameObject);
    sub_B2C400(v99, 0LL);
  }
  v68->m_Items[0] = (UnityEngine_Transform_o *)v75;
  sub_B2C2F8((BattleServantConfConponent_o *)v68->m_Items, v75, v69, v70, v71, v72, v73, v74);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v68, v76);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  gameObject = *(_QWORD *)(gameObject + 432);
  if ( !gameObject )
    goto LABEL_27;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v78);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v79);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_18181/*"ef_dm_base"*/,
                               (const MethodInfo_20B3104 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    v81 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v82 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
      v81 = (UnityEngine_Transform_o *)v82;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v83 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               (UILabel_o *)CommonEffectAsset_object,
                                               v81,
                                               (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
    this->fields.effectDamageBaseObject = v83;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.effectDamageBaseObject,
      (System_Int32_array **)v83,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0LL, 0LL) )
    {
      v91 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_21853/*"root_text/type01/dm_base"*/,
                                      0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = UnityEngine_Object__op_Inequality(v91, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v91 )
          goto LABEL_27;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)v91,
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)Component_WebViewObject;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.effectDamageBaseLabel,
          (System_Int32_array **)Component_WebViewObject,
          v93,
          v94,
          v95,
          v96,
          v97,
          v98);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_27:
        sub_B2C434(gameObject, v16);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x22
  WarBoardData_o *gameObject; // x0
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  System_Int32_array **Instance; // x0
  WarBoardData_o **v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x8
  System_Int32_array **Piece_22512764; // x0
  WarBoardData_o **v40; // x23
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x24
  WarBoardTaskBase_TaskCallback_o *v48; // x25
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  float y; // v0.s[1]
  float x; // s8
  float32x2_t v58; // d0
  unsigned __int32 v59; // s1
  float v60; // s2
  __int64 v61; // x8
  bool v62; // zf
  __int64 v63; // x8
  float v64; // s3
  float v65; // s1
  __int64 v66; // x24
  WarBoardTaskBase_TaskCallback_o *v67; // x25
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct WarBoardPieceData_o *v74; // x8
  UnityEngine_GameObject_o *v75; // x26
  float v76; // s8
  float v77; // s9
  float v78; // s10
  float pixelPerSecond; // s13
  float v80; // s11
  float v81; // s12
  float z; // s14
  WarBoardMovePerformance_o *v83; // x0
  WarBoardTaskBase_o *v84; // x25
  const MethodInfo *v85; // x3
  bool v86; // w8
  System_Func_bool__o *v87; // x23
  __int64 v88; // x21
  System_Delegate_o *v89; // x23
  WarBoardPieceBaseComponent___c_c *v90; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v93; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  WarBoardPieceData_o *v108; // x0
  const MethodInfo *v109; // x1
  MethodInfo v110; // [xsp+0h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_418659C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, *(_QWORD *)&squareIndex);
    sub_B2C35C(&System_Func_bool__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__, v11);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__, v12);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__, v13);
    sub_B2C35C(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
      v14);
    sub_B2C35C(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, v15);
    sub_B2C35C(&WarBoardPieceBaseComponent___c_TypeInfo, v16);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v17);
    sub_B2C35C(&WarBoardConditionalJumpTask_TypeInfo, v18);
    sub_B2C35C(&WarBoardMovePerformance_TypeInfo, v19);
    byte_418659C = 1;
  }
  LODWORD(v110.invoker_method) = 0;
  v110.methodPointer = 0LL;
  v20 = sub_B2C42C(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_38;
  *(_QWORD *)(v20 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_DWORD *)(v20 + 52) = squareIndex;
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v31 = (WarBoardData_o **)(v20 + 24);
  *(_QWORD *)(v20 + 24) = Instance;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 24), Instance, v32, v33, v34, v35, v36, v37);
  v38 = *(_QWORD *)(v20 + 24);
  if ( !v38 )
    goto LABEL_38;
  gameObject = *(WarBoardData_o **)(v38 + 432);
  if ( !gameObject )
    goto LABEL_38;
  Piece_22512764 = (System_Int32_array **)WarBoardData__GetPiece_22512764(gameObject, *(_DWORD *)(v20 + 52), 0LL);
  v40 = (WarBoardData_o **)(v20 + 16);
  *(_QWORD *)(v20 + 16) = Piece_22512764;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), Piece_22512764, v41, v42, v43, v44, v45, v46);
  v47 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v47, 0LL, 0LL);
  v48 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v48,
    (Il2CppObject *)v20,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v47 )
    goto LABEL_38;
  *(_QWORD *)(v47 + 32) = v48;
  sub_B2C2F8((BattleServantConfConponent_o *)(v47 + 32), (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54);
  if ( !v29 )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v29,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_38;
  gameObject = *v31;
  if ( !*v31 )
    goto LABEL_38;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v20 + 24);
  *(UnityEngine_Vector3_o *)(v20 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_38;
  v112 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v20 + 52), 0LL);
  y = v112.fields.y;
  *(float32x2_t *)&v112.fields.x = vsub_f32(*(float32x2_t *)&v112.fields.x, *(float32x2_t *)(v20 + 40));
  v112.fields.y = v112.fields.z - *(float *)(v20 + 48);
  v110.methodPointer = *(Il2CppMethodPointer *)&v112.fields.x;
  *(float *)&v110.invoker_method = v112.fields.y;
  v113.fields.x = UnityEngine_Vector3__get_magnitude(v112, &v110);
  x = v113.fields.x;
  *(UnityEngine_Vector3_o *)v58.n64_u64 = UnityEngine_Vector3__get_normalized(v113, &v110);
  v61 = *(_QWORD *)(v20 + 16);
  if ( !v61 )
    goto LABEL_38;
  v62 = *(_DWORD *)(v61 + 16) == 0;
  v63 = 136LL;
  if ( !v62 )
    v63 = 132LL;
  v64 = x - *(float *)((char *)&this->klass + v63);
  if ( v64 > 0.0 )
  {
    v58.n64_u32[1] = v59;
    v65 = (float)(v60 * v64) + *(float *)(v20 + 48);
    *(float32x2_t *)(v20 + 40) = vadd_f32(vmul_n_f32(v58, v64), *(float32x2_t *)(v20 + 40));
    *(float *)(v20 + 48) = v65;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_38;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, v22);
  v66 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v66, 0LL, 0LL);
  v67 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v67,
    (Il2CppObject *)v20,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0LL);
  if ( !v66 )
    goto LABEL_38;
  *(_QWORD *)(v66 + 32) = v67;
  sub_B2C2F8((BattleServantConfConponent_o *)(v66 + 32), (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v74 = this->fields.pieceData;
  if ( !v74 )
    goto LABEL_38;
  v75 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v20 + 24);
  if ( !gameObject )
    goto LABEL_38;
  v76 = *(float *)(v20 + 40);
  v77 = *(float *)(v20 + 44);
  v78 = *(float *)(v20 + 48);
  v114 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v74->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v80 = v114.fields.x;
  v81 = v114.fields.y;
  z = v114.fields.z;
  v83 = (WarBoardMovePerformance_o *)sub_B2C42C(WarBoardMovePerformance_TypeInfo);
  v115.fields.x = v76;
  v115.fields.y = v77;
  v115.fields.z = v78;
  v116.fields.x = v80;
  v116.fields.y = v81;
  v116.fields.z = z;
  v84 = (WarBoardTaskBase_o *)v83;
  WarBoardMovePerformance___ctor(v83, v75, v115, v116, pixelPerSecond, 0, v85);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_38;
  if ( WarBoardPieceData__GetMoveAfterAttack((WarBoardPieceData_o *)gameObject, v22) )
  {
    v86 = 0;
  }
  else
  {
    gameObject = *v40;
    if ( !*v40 )
      goto LABEL_38;
    v86 = WarBoardPieceData__GetMovedAferDefend((WarBoardPieceData_o *)gameObject, v22) == 0;
  }
  *(_BYTE *)(v20 + 56) = v86;
  v87 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v87,
    (Il2CppObject *)v20,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v88 = sub_B2C42C(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v88, v87, (WarBoardTaskBase_o *)v66, v84, 0LL);
  if ( !v88 )
LABEL_38:
    sub_B2C434(gameObject, v22);
  v89 = *(System_Delegate_o **)(v88 + 40);
  v90 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v90 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  static_fields = v90->static_fields;
  _9__65_3 = static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( (BYTE3(v90->vtable._0_Equals.methodPtr) & 4) != 0 && !v90->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v90);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v93 = (Il2CppObject *)static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v93,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0LL);
    v94 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v94->__9__65_3 = _9__65_3;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v94->__9__65_3,
      (System_Int32_array **)_9__65_3,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
  }
  v101 = (System_Int32_array **)System_Delegate__Combine(v89, (System_Delegate_o *)_9__65_3, 0LL);
  if ( !v101 || *v101 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v88 + 40) = v101;
    sub_B2C2F8((BattleServantConfConponent_o *)(v88 + 40), v101, v102, v103, v104, v105, v106, v107);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v29,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v88,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    gameObject = *v31;
    if ( *v31 )
    {
      WarBoardManager__AddTask_18201492(
        (WarBoardManager_o *)gameObject,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v29,
        0LL);
      return;
    }
    goto LABEL_38;
  }
  v108 = (WarBoardPieceData_o *)sub_B2C728(v101);
  WarBoardPieceData__IsEnabledMoveAfterAttack(v108, v109);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAfterWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  WarBoardData_o *gameObject; // x0
  const MethodInfo *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WarBoardData_o **v27; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x21
  System_Int32_array **Instance; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x8
  System_Int32_array **Wall; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x23
  WarBoardTaskBase_TaskCallback_o *v45; // x24
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  float y; // v0.s[1]
  float x; // s8
  float32x2_t v55; // d0
  unsigned __int32 v56; // s1
  float v57; // s2
  float v58; // s3
  float v59; // s1
  __int64 v60; // x22
  WarBoardTaskBase_TaskCallback_o *v61; // x23
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct WarBoardPieceData_o *v68; // x8
  UnityEngine_GameObject_o *v69; // x24
  float v70; // s8
  float v71; // s9
  float v72; // s10
  float pixelPerSecond; // s13
  float v74; // s11
  float v75; // s12
  float z; // s14
  WarBoardMovePerformance_o *v77; // x0
  WarBoardTaskBase_o *v78; // x23
  const MethodInfo *v79; // x3
  System_Func_bool__o *v80; // x19
  WarBoardConditionalJumpTask_o *v81; // x24
  MethodInfo v82; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_418659E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, *(_QWORD *)&squareIndex);
    sub_B2C35C(&System_Func_bool__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__, v11);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__, v12);
    sub_B2C35C(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
      v13);
    sub_B2C35C(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, v14);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v15);
    sub_B2C35C(&WarBoardConditionalJumpTask_TypeInfo, v16);
    sub_B2C35C(&WarBoardMovePerformance_TypeInfo, v17);
    byte_418659E = 1;
  }
  LODWORD(v82.invoker_method) = 0;
  v82.methodPointer = 0LL;
  v18 = sub_B2C42C(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_19;
  *(_QWORD *)(v18 + 24) = this;
  v27 = (WarBoardData_o **)(v18 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v18 + 44) = squareIndex;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v18 + 16) = Instance;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), Instance, v30, v31, v32, v33, v34, v35);
  v36 = *(_QWORD *)(v18 + 16);
  if ( !v36 )
    goto LABEL_19;
  gameObject = *(WarBoardData_o **)(v36 + 432);
  if ( !gameObject )
    goto LABEL_19;
  Wall = (System_Int32_array **)WarBoardData__GetWall(gameObject, *(_DWORD *)(v18 + 44), 1, 0LL);
  *(_QWORD *)(v18 + 48) = Wall;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 48), Wall, v38, v39, v40, v41, v42, v43);
  v44 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v44, 0LL, 0LL);
  v45 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v45,
    (Il2CppObject *)v18,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v44 )
    goto LABEL_19;
  *(_QWORD *)(v44 + 32) = v45;
  sub_B2C2F8((BattleServantConfConponent_o *)(v44 + 32), (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
  if ( !v28 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v28,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_19;
  gameObject = *v27;
  if ( !*v27 )
    goto LABEL_19;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v18 + 16);
  *(UnityEngine_Vector3_o *)(v18 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_19;
  v84 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v18 + 44), 0LL);
  y = v84.fields.y;
  *(float32x2_t *)&v84.fields.x = vsub_f32(*(float32x2_t *)&v84.fields.x, *(float32x2_t *)(v18 + 32));
  v84.fields.y = v84.fields.z - *(float *)(v18 + 40);
  v82.methodPointer = *(Il2CppMethodPointer *)&v84.fields.x;
  *(float *)&v82.invoker_method = v84.fields.y;
  v85.fields.x = UnityEngine_Vector3__get_magnitude(v84, &v82);
  x = v85.fields.x;
  *(UnityEngine_Vector3_o *)v55.n64_u64 = UnityEngine_Vector3__get_normalized(v85, &v82);
  v58 = x - this->fields.lengthOnAttack;
  if ( v58 > 0.0 )
  {
    v55.n64_u32[1] = v56;
    v59 = (float)(v57 * v58) + *(float *)(v18 + 40);
    *(float32x2_t *)(v18 + 32) = vadd_f32(vmul_n_f32(v55, v58), *(float32x2_t *)(v18 + 32));
    *(float *)(v18 + 40) = v59;
  }
  v60 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v60, 0LL, 0LL);
  v61 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v61,
    (Il2CppObject *)v18,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0LL);
  if ( !v60 )
    goto LABEL_19;
  *(_QWORD *)(v60 + 32) = v61;
  sub_B2C2F8((BattleServantConfConponent_o *)(v60 + 32), (System_Int32_array **)v61, v62, v63, v64, v65, v66, v67);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v68 = this->fields.pieceData;
  if ( !v68 )
    goto LABEL_19;
  v69 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v18 + 16);
  if ( !gameObject )
    goto LABEL_19;
  v70 = *(float *)(v18 + 32);
  v71 = *(float *)(v18 + 36);
  v72 = *(float *)(v18 + 40);
  v86 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v68->fields._nowSquareIndex_k__BackingField,
          0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v74 = v86.fields.x;
  v75 = v86.fields.y;
  z = v86.fields.z;
  v77 = (WarBoardMovePerformance_o *)sub_B2C42C(WarBoardMovePerformance_TypeInfo);
  v87.fields.x = v70;
  v87.fields.y = v71;
  v87.fields.z = v72;
  v88.fields.x = v74;
  v88.fields.y = v75;
  v88.fields.z = z;
  v78 = (WarBoardTaskBase_o *)v77;
  WarBoardMovePerformance___ctor(v77, v69, v87, v88, pixelPerSecond, 0, v79);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject
    || (*(_BYTE *)(v18 + 56) = WarBoardPieceData__GetMoveAfterAttack((WarBoardPieceData_o *)gameObject, v20) == 0,
        v80 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo),
        System_Func_bool____ctor(
          v80,
          (Il2CppObject *)v18,
          Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
          (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__),
        v81 = (WarBoardConditionalJumpTask_o *)sub_B2C42C(WarBoardConditionalJumpTask_TypeInfo),
        WarBoardConditionalJumpTask___ctor(v81, v80, (WarBoardTaskBase_o *)v60, v78, 0LL),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__),
        (gameObject = *(WarBoardData_o **)(v18 + 16)) == 0LL) )
  {
LABEL_19:
    sub_B2C434(gameObject, v20);
  }
  WarBoardManager__AddTask_18201492(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v28,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x23
  System_Int32_array **Instance; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array ***v41; // x25
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v43; // x19
  float v44; // s0
  float v45; // s1
  float v46; // s2
  float v47; // s13
  float v48; // s8
  float v49; // s14
  float v50; // s0
  float v51; // s1
  float v52; // s2
  float v53; // s9
  float v54; // s10
  float v55; // s11
  System_Int32_array **Square; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x20
  const MethodInfo *v64; // x2
  System_Int32_array *ParticipantVals; // x24
  WarBoardPieceData_o *v66; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WarBoardManager_o **v68; // x19
  System_Collections_Generic_IEnumerable_T__o *v69; // x0
  __int64 v70; // x25
  System_Delegate_o *v71; // x27
  WarBoardTaskBase_TaskCallback_o *v72; // x28
  System_Int32_array **v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x8
  float x; // s12
  float v82; // s0
  float v83; // s1
  float v84; // s2
  WarBoardPieceData_o *v85; // x22
  __int64 v86; // x8
  float v87; // s15
  System_Int32_array ***v88; // x28
  float v89; // s4
  float v90; // s12
  float v91; // s9
  float v92; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v94; // s11
  UnityEngine_GameObject_o *v95; // x25
  WarBoardMovePerformance_o *v96; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v97; // x26
  const MethodInfo *v98; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v99; // x25
  System_Collections_Generic_IEnumerable_T__o *v100; // x0
  System_Collections_Generic_IEnumerable_T__o *v101; // x0
  float v102; // s0
  float v103; // s9
  float v104; // s10
  float v105; // s11
  UnityEngine_GameObject_o *v106; // x0
  float v107; // s12
  UnityEngine_GameObject_o *v108; // x21
  WarBoardMovePerformance_o *v109; // x0
  System_Int32_array **v110; // x24
  const MethodInfo *v111; // x3
  const MethodInfo *v112; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *v113; // x21
  System_Int32_array **v114; // x23
  int32_t id; // w26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v116; // x0
  const MethodInfo *v117; // x5
  _BOOL4 v118; // w8
  int32_t v119; // w2
  bool v120; // w4
  WarBoardMessageMaster_o *v121; // x0
  int32_t v122; // w1
  __int64 v123; // x24
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  Il2CppObject **v130; // x22
  float v131; // s0
  float v132; // s1
  float v133; // s2
  float v134; // s0
  float v135; // s5
  float v136; // s11
  float v137; // s12
  float v138; // s13
  float v139; // s8
  float y; // s9
  float z; // s10
  float magnitude; // s0
  float v143; // s1
  float v144; // s8
  float v145; // s1
  __int64 v146; // x8
  __int64 v147; // x8
  float ZoomSize; // s0
  __int64 v149; // x8
  __int64 v150; // x8
  __int64 v151; // x8
  const MethodInfo_2155668 *v152; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v154; // x8
  WarBoardManager_o *v155; // x23
  float v156; // s0
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **v164; // x21
  WarBoardPieceBaseComponent___c_c *v165; // x8
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v168; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v169; // x0
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Delegate_o *v176; // x25
  WarBoardTaskBase_TaskCallback_o *v177; // x26
  System_Int32_array **v178; // x0
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  int *v185; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v186; // x21
  BattleServantConfConponent_o *p_addCount; // x21
  System_Delegate_o *v188; // t1
  Il2CppObject *v189; // x22
  WarBoardTaskBase_TaskCallback_o *v190; // x24
  System_Int32_array **v191; // x0
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  System_Collections_Generic_IEnumerable_T__o *v198; // x23
  System_String_array **v199; // x2
  System_String_array **v200; // x3
  System_Boolean_array **v201; // x4
  System_Int32_array **v202; // x5
  System_Int32_array *v203; // x6
  System_Int32_array *v204; // x7
  System_Int32_array **v205; // x23
  WarBoardManager_o *v206; // x24
  int v207; // s0
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  System_Int32_array **v216; // x24
  System_String_array **v217; // x2
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  System_Int32_array **v223; // x24
  const MethodInfo *v224; // x2
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  System_Int32_array **v231; // x22
  WarBoardOrthostichySchedule_o *v232; // x22
  const MethodInfo *v233; // x2
  System_String_array **v234; // x2
  System_String_array **v235; // x3
  System_Boolean_array **v236; // x4
  System_Int32_array **v237; // x5
  System_Int32_array *v238; // x6
  System_Int32_array *v239; // x7
  __int64 v240; // x21
  System_String_array **v241; // x2
  System_String_array **v242; // x3
  System_Boolean_array **v243; // x4
  System_Int32_array **v244; // x5
  System_Int32_array *v245; // x6
  System_Int32_array *v246; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v247; // x21
  BattleServantConfConponent_o *v248; // x21
  System_Delegate_o *v249; // x22
  System_Delegate_o *v250; // t1
  WarBoardPieceBaseComponent___c_c *v251; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *v252; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v254; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v255; // x0
  System_String_array **v256; // x2
  System_String_array **v257; // x3
  System_Boolean_array **v258; // x4
  System_Int32_array **v259; // x5
  System_Int32_array *v260; // x6
  System_Int32_array *v261; // x7
  System_Int32_array **v262; // x0
  System_String_array **v263; // x2
  System_String_array **v264; // x3
  System_Boolean_array **v265; // x4
  System_Int32_array **v266; // x5
  System_Int32_array *v267; // x6
  System_Int32_array *v268; // x7
  __int64 v269; // x0
  __int64 v270; // x0
  WarBoardPieceData_o *v271; // x0
  const MethodInfo *v272; // x1
  float v273; // [xsp+4h] [xbp-ECh]
  float v274; // [xsp+8h] [xbp-E8h]
  float v275; // [xsp+Ch] [xbp-E4h]
  float v276; // [xsp+10h] [xbp-E0h]
  float v277; // [xsp+14h] [xbp-DCh]
  UnityEngine_Component_o *v278; // [xsp+18h] [xbp-D8h]
  System_Nullable_float__o size; // [xsp+20h] [xbp-D0h] BYREF
  System_Nullable_Vector3__o v280; // [xsp+28h] [xbp-C8h] BYREF
  MethodInfo methoda; // [xsp+38h] [xbp-B8h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v283; // 0:x3.8
  System_Nullable_Vector3__o v284; // 0:x0.16
  UnityEngine_Vector3_o v285; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v286; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v287; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v288; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v289; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v291; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v292; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v293; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v294; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_418659A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v14);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v17);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, v18);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, v19);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__, v20);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__, v21);
    sub_B2C35C(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, v22);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__, v23);
    sub_B2C35C(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v24);
    sub_B2C35C(&WarBoardPieceBaseComponent___c_TypeInfo, v25);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v26);
    sub_B2C35C(&WarBoardMovePerformance_TypeInfo, v27);
    sub_B2C35C(&WarBoardOrthostichySchedule_TypeInfo, v28);
    sub_B2C35C(&WarBoardParallelSchedule_TypeInfo, v29);
    sub_B2C35C(&WarBoardTaskBase___TypeInfo, v30);
    sub_B2C35C(&StringLiteral_8964/*"MasterDamage"*/, v31);
    byte_418659A = 1;
  }
  LODWORD(methoda.klass) = 0;
  methoda.name = 0LL;
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v32 = sub_B2C42C(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v32,
    0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v32 )
    goto LABEL_109;
  *(_QWORD *)(v32 + 24) = Instance;
  v41 = (System_Int32_array ***)(v32 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 24), Instance, v35, v36, v37, v38, v39, v40);
  if ( !*(_QWORD *)(v32 + 24) )
    goto LABEL_109;
  Instance = *(System_Int32_array ***)(*(_QWORD *)(v32 + 24) + 432LL);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardData__GetPiece_22512764((WarBoardData_o *)Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_109;
  v43 = (WarBoardPieceData_o *)Instance;
  Instance = *v41;
  if ( !*v41 )
    goto LABEL_109;
  *(UnityEngine_Vector3_o *)&v44 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v41;
  if ( !*v41 )
    goto LABEL_109;
  v47 = v44;
  v48 = v45;
  v49 = v46;
  *(UnityEngine_Vector3_o *)&v50 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0LL);
  if ( !*v41 )
    goto LABEL_109;
  Instance = (System_Int32_array **)(*v41)[54];
  if ( !Instance )
    goto LABEL_109;
  v53 = v50;
  v54 = v51;
  v55 = v52;
  Square = (System_Int32_array **)WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v32 + 16) = Square;
  sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 16), Square, v57, v58, v59, v60, v61, v62);
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v43, v64);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      42,
                                      ParticipantVals,
                                      0LL);
  if ( !v63 )
    goto LABEL_109;
  v278 = (UnityEngine_Component_o *)this;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v63,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v66 = v43;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                43,
                                                                ParticipantVals,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v63,
    EventTasks,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v68 = (WarBoardManager_o **)(v32 + 24);
  v69 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)Instance,
                                                         41,
                                                         ParticipantVals,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v63,
    v69,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v70 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v70, 0LL, 0LL);
  if ( !v70 )
    goto LABEL_109;
  v71 = *(System_Delegate_o **)(v70 + 32);
  v72 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v72,
    (Il2CppObject *)v32,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0LL);
  v73 = (System_Int32_array **)System_Delegate__Combine(v71, (System_Delegate_o *)v72, 0LL);
  v80 = v73;
  if ( v73 && *v73 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    goto LABEL_112;
  *(_QWORD *)(v70 + 32) = v73;
  sub_B2C2F8((BattleServantConfConponent_o *)(v70 + 32), v73, v74, v75, v76, v77, v78, v79);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v63,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v285.fields.x = v53 - v47;
  v285.fields.y = v54 - v48;
  v285.fields.z = v55 - v49;
  *(float *)&methoda.name = v53 - v47;
  *((float *)&methoda.name + 1) = v54 - v48;
  *(float *)&methoda.klass = v55 - v49;
  v286.fields.x = UnityEngine_Vector3__get_magnitude(v285, (const MethodInfo *)&methoda.name);
  x = v286.fields.x;
  *(UnityEngine_Vector3_o *)&v82 = UnityEngine_Vector3__get_normalized(v286, (const MethodInfo *)&methoda.name);
  if ( !v66 )
    goto LABEL_109;
  v85 = v66;
  v86 = 136LL;
  if ( v66->fields._type_k__BackingField )
    v86 = 132LL;
  v87 = v84;
  v88 = (System_Int32_array ***)(v32 + 24);
  v276 = v82;
  v277 = v83;
  v89 = x - *(float *)((char *)&v278->klass + v86);
  if ( v89 > 0.0 )
  {
    v90 = v47 + (float)(v82 * v89);
    v273 = v53;
    v274 = v55;
    v91 = v48 + (float)(v83 * v89);
    v275 = v54;
    v92 = v49 + (float)(v84 * v89);
    gameObject = UnityEngine_Component__get_gameObject(v278, 0LL);
    v94 = *(float *)&v278[5].monitor;
    v95 = gameObject;
    v96 = (WarBoardMovePerformance_o *)sub_B2C42C(WarBoardMovePerformance_TypeInfo);
    v287.fields.x = v47;
    v287.fields.y = v48;
    v287.fields.z = v49;
    v293.fields.x = v90;
    v293.fields.y = v91;
    v293.fields.z = v92;
    v97 = (EventMissionProgressRequest_Argument_ProgressData_o *)v96;
    WarBoardMovePerformance___ctor(v96, v95, v287, v293, v94, 5, v98);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v63,
      v97,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v48 = v91;
    v53 = v273;
    v55 = v274;
    v49 = v92;
    v54 = v275;
    v47 = v90;
  }
  v99 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v99,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      1,
                                      ParticipantVals,
                                      0LL);
  if ( !v99 )
    goto LABEL_109;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v99,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v100 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                          (WarBoardManager_o *)Instance,
                                                          19,
                                                          ParticipantVals,
                                                          0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v99,
    v100,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v101 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                          (WarBoardManager_o *)Instance,
                                                          39,
                                                          ParticipantVals,
                                                          0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v99,
    v101,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v66->fields._type_k__BackingField != 1 )
  {
    v123 = sub_B2C42C(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v123,
      0LL);
    if ( !v123 )
      goto LABEL_109;
    *(_QWORD *)(v123 + 32) = v32;
    v130 = (Il2CppObject **)(v123 + 32);
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v123 + 32),
      (System_Int32_array **)v32,
      v124,
      v125,
      v126,
      v127,
      v128,
      v129);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v63,
      (System_Collections_Generic_IEnumerable_T__o *)v99,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v131 = *(float *)&v278[5].fields.m_CachedPtr;
    v132 = v276 * v131;
    v133 = v277 * v131;
    v134 = v87 * v131;
    v135 = v55 - v134;
    v136 = v47 + v132;
    v137 = v48 + v133;
    v138 = v49 + v134;
    v289.fields.x = (float)(v53 - v132) - v136;
    v289.fields.y = (float)(v54 - v133) - (float)(v48 + v133);
    v289.fields.z = v135 - v138;
    methoda.methodPointer = *(Il2CppMethodPointer *)&v289.fields.x;
    *(float *)&methoda.invoker_method = v135 - v138;
    normalized = UnityEngine_Vector3__get_normalized(v289, &methoda);
    v139 = normalized.fields.x;
    y = normalized.fields.y;
    z = normalized.fields.z;
    magnitude = UnityEngine_Vector3__get_magnitude(normalized, &methoda);
    v143 = v136 + (float)((float)(v139 * magnitude) * 0.5);
    v144 = v137 + (float)((float)(y * magnitude) * 0.5);
    *(float *)&methoda.methodPointer = v143;
    *((float *)&methoda.methodPointer + 1) = v144;
    *(float *)&methoda.invoker_method = v138 + (float)((float)(z * magnitude) * 0.5);
    Instance = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))v278->klass[2]._1.events)(
                                        v278,
                                        v278->klass[2]._1.properties);
    *((float *)&methoda.methodPointer + 1) = v144 + v145;
    if ( !*(_QWORD *)(v123 + 32) )
      goto LABEL_109;
    v146 = *(_QWORD *)(*(_QWORD *)(v123 + 32) + 24LL);
    if ( !v146 )
      goto LABEL_109;
    v147 = *(_QWORD *)(v146 + 40);
    if ( !v147 )
      goto LABEL_109;
    Instance = *(System_Int32_array ***)(v147 + 72);
    if ( !Instance )
      goto LABEL_109;
    ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
    v149 = *(_QWORD *)(v123 + 32);
    *(float *)(v123 + 16) = ZoomSize;
    if ( !v149 )
      goto LABEL_109;
    v150 = *(_QWORD *)(v149 + 24);
    if ( !v150 )
      goto LABEL_109;
    v151 = *(_QWORD *)(v150 + 40);
    if ( !v151 )
      goto LABEL_109;
    Instance = *(System_Int32_array ***)(v151 + 64);
    if ( !Instance )
      goto LABEL_109;
    ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0LL);
    v154 = *(_QWORD *)(v123 + 32);
    *(UnityEngine_Vector2_o *)(v123 + 20) = ScrlPos;
    if ( !v154 )
      goto LABEL_109;
    v155 = *(WarBoardManager_o **)(v154 + 24);
    *(_QWORD *)&v291.fields.x = methoda.methodPointer;
    v291.fields.z = *(float *)&methoda.invoker_method;
    *(_QWORD *)&v284.fields.value.fields.x = &v280;
    *(_QWORD *)&v280.fields.value.fields.x = 0LL;
    *(_QWORD *)&v280.fields.value.fields.z = 0LL;
    *(_QWORD *)&v284.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v284, v291, v152);
    v156 = *((float *)&v278[5].fields + 1);
    p_size = (System_Nullable_float__o)&size;
    size = 0LL;
    System_Nullable_float____ctor(p_size, v156, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
    if ( !v155 )
      goto LABEL_109;
    v283 = size;
    CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                     v155,
                                                                                     v280,
                                                                                     v283,
                                                                                     1,
                                                                                     0,
                                                                                     1,
                                                                                     0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v63,
      CameraPerformanceTask,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    if ( !*v130 )
      goto LABEL_109;
    Instance = (System_Int32_array **)(*v130)[1].monitor;
    if ( !Instance )
      goto LABEL_109;
    v292.fields.y = *((float *)&methoda.methodPointer + 1);
    v292.fields.z = *(float *)&methoda.invoker_method;
    v292.fields.x = *(float *)&methoda.methodPointer;
    Instance = (System_Int32_array **)WarBoardManager__CreateEncountkEffectTask(
                                        (WarBoardManager_o *)Instance,
                                        v292,
                                        1,
                                        0LL);
    v164 = Instance;
    v165 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v165 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v165->static_fields;
    _9__63_1 = static_fields->__9__63_1;
    if ( !_9__63_1 )
    {
      if ( (BYTE3(v165->vtable._0_Equals.methodPtr) & 4) != 0 && !v165->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v165);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v168 = (Il2CppObject *)static_fields->__9;
      _9__63_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__63_1, v168, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, 0LL);
      v169 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v169->__9__63_1 = _9__63_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v169->__9__63_1,
        (System_Int32_array **)_9__63_1,
        v170,
        v171,
        v172,
        v173,
        v174,
        v175);
    }
    if ( !v164 )
      goto LABEL_109;
    v164[10] = (System_Int32_array *)_9__63_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v164 + 10),
      (System_Int32_array **)_9__63_1,
      v158,
      v159,
      v160,
      v161,
      v162,
      v163);
    v176 = (System_Delegate_o *)v164[5];
    v177 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v177,
      (Il2CppObject *)v123,
      Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
      0LL);
    v178 = (System_Int32_array **)System_Delegate__Combine(v176, (System_Delegate_o *)v177, 0LL);
    v80 = v178;
    if ( !v178 || *v178 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v164[5] = (System_Int32_array *)v178;
      sub_B2C2F8((BattleServantConfConponent_o *)(v164 + 5), v178, v179, v180, v181, v182, v183, v184);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v63,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v164,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      v185 = &v63->fields._size;
      if ( !v63->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v186 = v63->fields._items->m_Items[0];
      if ( !v186 )
        goto LABEL_109;
      v188 = *(System_Delegate_o **)&v186->fields.addCount;
      p_addCount = (BattleServantConfConponent_o *)&v186->fields.addCount;
      v189 = *v130;
      v190 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v190,
        v189,
        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
        0LL);
      v191 = (System_Int32_array **)System_Delegate__Combine(v188, (System_Delegate_o *)v190, 0LL);
      v80 = v191;
      if ( !v191 || *v191 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        p_addCount->klass = (BattleServantConfConponent_c *)v191;
        sub_B2C2F8(p_addCount, v191, v192, v193, v194, v195, v196, v197);
        goto LABEL_93;
      }
    }
LABEL_112:
    v271 = (WarBoardPieceData_o *)sub_B2C728(v80);
    WarBoardPieceData__get_isServant(v271, v272);
    return;
  }
  v102 = *(float *)&v278[6].klass;
  v103 = v47 + (float)(v276 * v102);
  v104 = v48 + (float)(v277 * v102);
  v105 = v49 + (float)(v87 * v102);
  v106 = UnityEngine_Component__get_gameObject(v278, 0LL);
  v107 = *(float *)&v278[5].monitor;
  v108 = v106;
  v109 = (WarBoardMovePerformance_o *)sub_B2C42C(WarBoardMovePerformance_TypeInfo);
  v288.fields.x = v103;
  v288.fields.y = v104;
  v288.fields.z = v105;
  v294.fields.x = v47;
  v294.fields.y = v48;
  v294.fields.z = v49;
  v110 = (System_Int32_array **)v109;
  WarBoardMovePerformance___ctor(v109, v108, v288, v294, v107, 4, v111);
  v113 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                  v85,
                                                                  v112);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  if ( !*v68 )
    goto LABEL_109;
  v114 = Instance;
  Instance = (System_Int32_array **)(*v68)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_109;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0LL);
  v116 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v116,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( v85->fields._forceId_k__BackingField || v85->fields._groupId_k__BackingField )
  {
    v118 = 0;
    if ( !v114 )
      goto LABEL_109;
  }
  else
  {
    v118 = v85->fields._type_k__BackingField == 1;
    if ( !v114 )
      goto LABEL_109;
  }
  if ( v118 )
  {
    v119 = 11;
    v120 = 1;
    v121 = (WarBoardMessageMaster_o *)v114;
    v122 = id;
  }
  else
  {
    v119 = 9;
    v121 = (WarBoardMessageMaster_o *)v114;
    v122 = id;
    v120 = 0;
  }
  Instance = (System_Int32_array **)WarBoardMessageMaster__GetMessageTasks(
                                      v121,
                                      v122,
                                      v119,
                                      v85->fields._breakPoint_k__BackingField,
                                      v120,
                                      v117);
  if ( !Instance )
    goto LABEL_109;
  v198 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v99,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v198,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v63,
      v198,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (System_Int32_array **)sub_B2C374(WarBoardTaskBase___TypeInfo, 5LL);
  if ( !Instance )
LABEL_109:
    sub_B2C434(Instance, v34);
  v205 = Instance;
  if ( v110 )
  {
    Instance = (System_Int32_array **)sub_B2C41C(v110, *(_QWORD *)&(*Instance)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( !*((_DWORD *)v205 + 6) )
    goto LABEL_110;
  v205[4] = (System_Int32_array *)v110;
  sub_B2C2F8((BattleServantConfConponent_o *)(v205 + 4), v110, v199, v200, v201, v202, v203, v204);
  Instance = (System_Int32_array **)v85->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_109;
  v206 = *v68;
  Instance = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*Instance)->m_Items[207])(
                                      Instance,
                                      *(_QWORD *)&(*Instance)->m_Items[209]);
  if ( !v206 )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__CreateAttackEffectTask(
                                      v206,
                                      *(UnityEngine_Vector3_o *)&v207,
                                      0,
                                      0LL);
  v216 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B2C41C(Instance, *(_QWORD *)&(*v205)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v205 + 6) <= 1u )
    goto LABEL_110;
  v205[5] = (System_Int32_array *)v216;
  sub_B2C2F8((BattleServantConfConponent_o *)(v205 + 5), v216, v210, v211, v212, v213, v214, v215);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v223 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B2C41C(Instance, *(_QWORD *)&(*v205)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v205 + 6) <= 2u )
    goto LABEL_110;
  v205[6] = (System_Int32_array *)v223;
  sub_B2C2F8((BattleServantConfConponent_o *)(v205 + 6), v223, v217, v218, v219, v220, v221, v222);
  Instance = (System_Int32_array **)v85->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                      (WarBoardPieceBaseComponent_o *)Instance,
                                      (System_String_o *)StringLiteral_8964/*"MasterDamage"*/,
                                      v224);
  v231 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B2C41C(Instance, *(_QWORD *)&(*v205)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v205 + 6) <= 3u )
    goto LABEL_110;
  v205[7] = (System_Int32_array *)v231;
  sub_B2C2F8((BattleServantConfConponent_o *)(v205 + 7), v231, v225, v226, v227, v228, v229, v230);
  v232 = (WarBoardOrthostichySchedule_o *)sub_B2C42C(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_22398892(v232, v113, v233);
  if ( v232 )
  {
    Instance = (System_Int32_array **)sub_B2C41C(v232, *(_QWORD *)&(*v205)->m_Items[9]);
    if ( !Instance )
    {
LABEL_111:
      v270 = sub_B2C454();
      sub_B2C400(v270, 0LL);
    }
  }
  if ( *((_DWORD *)v205 + 6) <= 4u )
  {
LABEL_110:
    v269 = sub_B2C460(Instance);
    sub_B2C400(v269, 0LL);
  }
  v205[8] = (System_Int32_array *)v232;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v205 + 8),
    (System_Int32_array **)v232,
    v234,
    v235,
    v236,
    v237,
    v238,
    v239);
  v240 = sub_B2C42C(WarBoardParallelSchedule_TypeInfo);
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v240, 0LL);
  *(_QWORD *)(v240 + 56) = v205;
  sub_B2C2F8((BattleServantConfConponent_o *)(v240 + 56), v205, v241, v242, v243, v244, v245, v246);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v63,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v240,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v185 = &v63->fields._size;
LABEL_93:
  if ( *v185 < 1 )
    return;
  v247 = v63->fields._items->m_Items[0];
  if ( !v247 )
    goto LABEL_109;
  v250 = *(System_Delegate_o **)&v247->fields.addCount;
  v248 = (BattleServantConfConponent_o *)&v247->fields.addCount;
  v249 = v250;
  v251 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v251 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  v252 = v251->static_fields;
  _9__63_4 = v252->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( (BYTE3(v251->vtable._0_Equals.methodPtr) & 4) != 0 && !v251->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v251);
      v252 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v254 = (Il2CppObject *)v252->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v254, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0LL);
    v255 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v255->__9__63_4 = _9__63_4;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v255->__9__63_4,
      (System_Int32_array **)_9__63_4,
      v256,
      v257,
      v258,
      v259,
      v260,
      v261);
  }
  v262 = (System_Int32_array **)System_Delegate__Combine(v249, (System_Delegate_o *)_9__63_4, 0LL);
  v80 = v262;
  if ( v262 && *v262 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    goto LABEL_112;
  v248->klass = (BattleServantConfConponent_c *)v262;
  sub_B2C2F8(v248, v262, v263, v264, v265, v266, v267, v268);
  Instance = *v88;
  if ( !*v88 )
    goto LABEL_109;
  WarBoardManager__AddTask_18201492(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v63,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttackResume(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardData_o *Instance; // x0
  __int64 v7; // x1
  WarBoardManager_o *v8; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardData_o *v10; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v14; // s11
  float v15; // s0
  float v16; // s1
  float v17; // s2
  __int64 v18; // x8
  float v19; // s15
  float v20; // s12
  float v21; // s13
  float v22; // s14
  MethodInfo v23; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418659B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex);
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, v5);
    byte_418659B = 1;
  }
  LODWORD(v23.invoker_method) = 0;
  v23.methodPointer = 0LL;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v8 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_15;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22512764(Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_15;
  v10 = Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v8, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v25 = WarBoardManager__GetSquarePosition(v8, squareIndex, 0LL);
  v25.fields.x = v25.fields.x - x;
  v25.fields.y = v25.fields.y - y;
  v25.fields.z = v25.fields.z - z;
  v23.methodPointer = *(Il2CppMethodPointer *)&v25.fields.x;
  *(float *)&v23.invoker_method = v25.fields.z;
  v26.fields.x = UnityEngine_Vector3__get_magnitude(v25, &v23);
  v14 = v26.fields.x;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_normalized(v26, &v23);
  if ( !v10 )
    goto LABEL_15;
  v18 = 136LL;
  if ( LODWORD(v10->fields.stageEntity) )
    v18 = 132LL;
  v19 = *(float *)((char *)&this->klass + v18);
  v20 = v15;
  v21 = v16;
  v22 = v17;
  Instance = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Instance = (WarBoardData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B2C434(Instance, v7);
  }
  v27.fields.x = x + (float)(v20 * (float)(v14 - v19));
  v27.fields.y = y + (float)(v21 * (float)(v14 - v19));
  v27.fields.z = z + (float)(v22 * (float)(v14 - v19));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v27, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *monitor; // x8
  WarBoardUserServantData_o *v19; // x0
  WebViewManager_o *Instance; // x25
  const MethodInfo_2155668 *v21; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardTaskBase_array *v23; // x26
  WebViewManager_o *v24; // x27
  const MethodInfo_2155668 *v25; // x2
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x24
  _DWORD *v33; // x8
  __int64 v34; // x24
  UnityEngine_Component_c *klass; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  System_Nullable_Vector3__o v38; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v39; // 0:x3.8
  System_Nullable_float__o v40; // 0:x3.8
  System_Nullable_Vector3__o v41; // 0:x0.16
  System_Nullable_Vector3__o v42; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  v14 = (UnityEngine_Component_o *)this;
  if ( (byte_41865A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&oldBreakPoint);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    this = (WarBoardPieceBaseComponent_o *)sub_B2C35C(&WarBoardTaskBase___TypeInfo, v17);
    byte_41865A2 = 1;
  }
  if ( cameraMove )
  {
    monitor = v14[8].monitor;
    if ( !monitor )
      goto LABEL_30;
    v19 = (WarBoardUserServantData_o *)*((_QWORD *)monitor + 21);
    if ( !v19
      || (this = (WarBoardPieceBaseComponent_o *)WarBoardUserServantData__IsBoss(v19, 0LL),
          ((unsigned __int8)this & 1) == 0) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform(v14, 0LL);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v41.fields.value.fields.x = &v38;
          *(_QWORD *)&v38.fields.value.fields.x = 0LL;
          *(_QWORD *)&v38.fields.value.fields.z = 0LL;
          *(_QWORD *)&v41.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v41, localPosition, v21);
          if ( Instance )
          {
            v39 = cameraSize;
            CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                             (WarBoardManager_o *)Instance,
                                                                                             v38,
                                                                                             v39,
                                                                                             1,
                                                                                             0,
                                                                                             1,
                                                                                             0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
              CameraPerformanceTask,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
            goto LABEL_19;
          }
        }
LABEL_30:
        sub_B2C434(this, *(_QWORD *)&oldBreakPoint);
      }
      v23 = (WarBoardTaskBase_array *)sub_B2C374(WarBoardTaskBase___TypeInfo, 1LL);
      v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform(v14, 0LL);
      if ( !this )
        goto LABEL_30;
      v44 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      *(_QWORD *)&v42.fields.value.fields.x = &v38;
      v38 = (System_Nullable_Vector3__o)0LL;
      *(_QWORD *)&v42.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v42, v44, v25);
      if ( !v24 )
        goto LABEL_30;
      v40 = cameraSize;
      this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                               (WarBoardManager_o *)v24,
                                               v38,
                                               v40,
                                               1,
                                               0,
                                               1,
                                               0LL);
      if ( !v23 )
        goto LABEL_30;
      v32 = (System_Int32_array **)this;
      if ( this )
      {
        this = (WarBoardPieceBaseComponent_o *)sub_B2C41C(this, v23->obj.klass->_1.element_class);
        if ( !this )
        {
          v37 = sub_B2C454();
          sub_B2C400(v37, 0LL);
        }
      }
      if ( !v23->max_length )
      {
LABEL_32:
        v36 = sub_B2C460(this);
        sub_B2C400(v36, 0LL);
      }
      v23->m_Items[0] = (WarBoardTaskBase_o *)v32;
      sub_B2C2F8((BattleServantConfConponent_o *)v23->m_Items, v32, v26, v27, v28, v29, v30, v31);
      if ( !Instance )
        goto LABEL_30;
      WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v23, 0LL);
    }
  }
LABEL_19:
  v33 = v14[8].monitor;
  if ( !v33 )
    goto LABEL_30;
  v34 = 0LL;
  if ( dummyPoint < 0 )
    dummyPoint = v33[13];
  while ( (int)v34 < v33[14] )
  {
    klass = v14[8].klass;
    if ( !klass )
      goto LABEL_30;
    if ( (unsigned int)v34 >= LODWORD(klass->_1.namespaze) )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v34);
    if ( this )
    {
      if ( (int)v34 >= oldBreakPoint || dummyPoint > (int)v34 )
      {
        WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)this, dummyPoint > (int)v34, 0, 0LL);
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
      v33 = v14[8].monitor;
      ++v34;
      if ( v33 )
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
    sub_B2C434(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w1
  const MethodInfo *v7; // x2

  if ( (byte_4186597 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4186597 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B2C434(Instance, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x19
  WarBoardPieceData_o *Instance; // x0
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  WarBoardPieceData_o **v30; // x20
  System_Int32_array **Piece_22512764; // x0
  WarBoardPieceData_o **v32; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x8
  System_Int32_array **Square; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x25
  System_Delegate_o *v48; // x26
  WarBoardTaskBase_TaskCallback_o *v49; // x27
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x8
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v66; // x28
  struct WarBoardPieceData_o *v67; // x8
  UnityEngine_GameObject_o *v68; // x26
  float v69; // s0
  float v70; // s1
  float v71; // s2
  float v72; // s8
  float v73; // s9
  float v74; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float z; // s14
  WarBoardMovePerformance_o *v79; // x0
  WarBoardMovePerformance_o *v80; // x27
  const MethodInfo *v81; // x3
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x26
  UnityEngine_GameObject_o *v89; // x27
  float v90; // s0
  float v91; // s1
  float v92; // s2
  struct WarBoardPieceData_o *v93; // x8
  float v94; // s8
  float v95; // s9
  float v96; // s10
  float v97; // s13
  float v98; // s11
  float v99; // s12
  float v100; // s14
  WarBoardMovePerformance_o *v101; // x0
  System_Int32_array **v102; // x28
  const MethodInfo *v103; // x3
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  int32_t v116; // w28
  __int64 v117; // x25
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Delegate_o *v124; // x24
  WarBoardTaskBase_TaskCallback_o *v125; // x27
  System_Int32_array **v126; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Collections_Generic_List_WarBoardTaskBase__o *v133; // x26
  struct WarBoardPieceData_o *v134; // x8
  System_Delegate_o *EndCallback; // x28
  WarBoardTaskBase_TaskCallback_o *v136; // x24
  System_Int32_array **v137; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  struct WarBoardPieceData_o *v144; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v145; // x22
  System_Int32_array **PieceEventVals; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  const MethodInfo *v153; // x1
  System_Int32_array *v154; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v156; // x0
  WarBoardManager_o *v157; // x20
  WarBoardTaskBase_array *v158; // x21
  __int64 v159; // x22
  WarBoardTaskBase_TaskCallback_o *v160; // x23
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  __int64 v173; // x0
  __int64 v174; // x0
  WarBoardPieceData_o *v175; // x0
  const MethodInfo *v176; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v177; // [xsp+18h] [xbp-88h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v179; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v180; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v181; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v182; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v183; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4186598 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&int___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__, v12);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__, v13);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__, v14);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__, v15);
    sub_B2C35C(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, v16);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v17);
    sub_B2C35C(&WarBoardMovePerformance_TypeInfo, v18);
    sub_B2C35C(&WarBoardParallelSchedule_TypeInfo, v19);
    sub_B2C35C(&WarBoardTaskBase___TypeInfo, v20);
    byte_4186598 = 1;
  }
  v21 = sub_B2C42C(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v21,
    0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v21 )
    goto LABEL_64;
  *(_QWORD *)(v21 + 48) = Instance;
  v30 = (WarBoardPieceData_o **)(v21 + 48);
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 48), (System_Int32_array **)Instance, v24, v25, v26, v27, v28, v29);
  if ( !*(_QWORD *)(v21 + 48) )
    goto LABEL_64;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v21 + 48) + 432LL);
  if ( !Instance )
    goto LABEL_64;
  Piece_22512764 = (System_Int32_array **)WarBoardData__GetPiece_22512764((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v21 + 40) = Piece_22512764;
  v32 = (WarBoardPieceData_o **)(v21 + 40);
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 40), Piece_22512764, v33, v34, v35, v36, v37, v38);
  v39 = *(_QWORD *)(v21 + 48);
  if ( !v39 )
    goto LABEL_64;
  Instance = *(WarBoardPieceData_o **)(v39 + 432);
  if ( !Instance )
    goto LABEL_64;
  Square = (System_Int32_array **)WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v21 + 16) = Square;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), Square, v41, v42, v43, v44, v45, v46);
  v47 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v47, 0LL, 0LL);
  if ( !v47 )
    goto LABEL_64;
  v48 = *(System_Delegate_o **)(v47 + 32);
  v49 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v49,
    (Il2CppObject *)v21,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0LL);
  v50 = (System_Int32_array **)System_Delegate__Combine(v48, (System_Delegate_o *)v49, 0LL);
  v57 = v50;
  if ( !v50 || *v50 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v47 + 32) = v50;
    sub_B2C2F8((BattleServantConfConponent_o *)(v47 + 32), v50, v51, v52, v53, v54, v55, v56);
    Instance = (WarBoardPieceData_o *)sub_B2C374(int___TypeInfo, 2LL);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_64;
    v23 = (const MethodInfo *)Instance;
    if ( !Instance )
      goto LABEL_64;
    groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
    if ( !groupId_k__BackingField )
      goto LABEL_65;
    Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField;
    if ( groupId_k__BackingField == 1 )
      goto LABEL_65;
    Instance->fields._currentActionCount_k__BackingField = squareIndex;
    *(_QWORD *)(v21 + 24) = Instance;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v21 + 24),
      (System_Int32_array **)Instance,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
    v177 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v177,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    v66 = *(_QWORD *)(v21 + 40);
    Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v67 = this->fields.pieceData;
    if ( !v67 )
      goto LABEL_64;
    v68 = (UnityEngine_GameObject_o *)Instance;
    Instance = *(WarBoardPieceData_o **)(v21 + 48);
    if ( !Instance )
      goto LABEL_64;
    *(UnityEngine_Vector3_o *)&v69 = WarBoardManager__GetSquarePosition(
                                       (WarBoardManager_o *)Instance,
                                       v67->fields._nowSquareIndex_k__BackingField,
                                       0LL);
    Instance = *v30;
    if ( !*v30 )
      goto LABEL_64;
    v72 = v69;
    v73 = v70;
    v74 = v71;
    SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    x = SquarePosition.fields.x;
    y = SquarePosition.fields.y;
    z = SquarePosition.fields.z;
    v79 = (WarBoardMovePerformance_o *)sub_B2C42C(WarBoardMovePerformance_TypeInfo);
    v179.fields.x = v72;
    v179.fields.y = v73;
    v179.fields.z = v74;
    v182.fields.x = x;
    v182.fields.y = y;
    v182.fields.z = z;
    v80 = v79;
    WarBoardMovePerformance___ctor(v79, v68, v179, v182, pixelPerSecond, 0, v81);
    if ( v66 )
    {
      Instance = (WarBoardPieceData_o *)sub_B2C374(WarBoardTaskBase___TypeInfo, 3LL);
      if ( !Instance )
        goto LABEL_64;
      v88 = (System_Int32_array **)Instance;
      if ( v80 )
      {
        Instance = (WarBoardPieceData_o *)sub_B2C41C(v80, Instance->klass->_1.element_class);
        if ( !Instance )
          goto LABEL_66;
      }
      if ( !*((_DWORD *)v88 + 6) )
        goto LABEL_65;
      v88[4] = (System_Int32_array *)v80;
      sub_B2C2F8((BattleServantConfConponent_o *)(v88 + 4), (System_Int32_array **)v80, v82, v83, v84, v85, v86, v87);
      if ( !*v32 )
        goto LABEL_64;
      Instance = (WarBoardPieceData_o *)(*v32)->fields.pieceComponent;
      if ( !Instance )
        goto LABEL_64;
      Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v30 )
        goto LABEL_64;
      v89 = (UnityEngine_GameObject_o *)Instance;
      *(UnityEngine_Vector3_o *)&v90 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v30, squareIndex, 0LL);
      v93 = this->fields.pieceData;
      if ( !v93 )
        goto LABEL_64;
      Instance = *v30;
      if ( !*v30 )
        goto LABEL_64;
      v94 = v90;
      v95 = v91;
      v96 = v92;
      v180 = WarBoardManager__GetSquarePosition(
               (WarBoardManager_o *)Instance,
               v93->fields._nowSquareIndex_k__BackingField,
               0LL);
      v97 = this->fields.pixelPerSecond;
      v98 = v180.fields.x;
      v99 = v180.fields.y;
      v100 = v180.fields.z;
      v101 = (WarBoardMovePerformance_o *)sub_B2C42C(WarBoardMovePerformance_TypeInfo);
      v181.fields.x = v94;
      v181.fields.y = v95;
      v181.fields.z = v96;
      v183.fields.x = v98;
      v183.fields.y = v99;
      v183.fields.z = v100;
      v102 = (System_Int32_array **)v101;
      WarBoardMovePerformance___ctor(v101, v89, v181, v183, v97, 0, v103);
      if ( v102 )
      {
        Instance = (WarBoardPieceData_o *)sub_B2C41C(v102, *(_QWORD *)&(*v88)->m_Items[9]);
        if ( !Instance )
          goto LABEL_66;
      }
      if ( *((_DWORD *)v88 + 6) <= 1u )
        goto LABEL_65;
      v88[5] = (System_Int32_array *)v102;
      sub_B2C2F8((BattleServantConfConponent_o *)(v88 + 5), v102, v104, v105, v106, v107, v108, v109);
      Instance = (WarBoardPieceData_o *)sub_B2C41C(v47, *(_QWORD *)&(*v88)->m_Items[9]);
      if ( !Instance )
        goto LABEL_66;
      if ( *((_DWORD *)v88 + 6) <= 2u )
        goto LABEL_65;
      v88[6] = (System_Int32_array *)v47;
      v116 = squareIndex;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)(v88 + 6),
        (System_Int32_array **)v47,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
      v117 = sub_B2C42C(WarBoardParallelSchedule_TypeInfo);
      WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v117, 0LL);
      *(_QWORD *)(v117 + 56) = v88;
      sub_B2C2F8((BattleServantConfConponent_o *)(v117 + 56), v88, v118, v119, v120, v121, v122, v123);
      if ( !v117 )
        goto LABEL_64;
      v124 = *(System_Delegate_o **)(v117 + 40);
      v125 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v125,
        (Il2CppObject *)v21,
        Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
        0LL);
      v126 = (System_Int32_array **)System_Delegate__Combine(v124, (System_Delegate_o *)v125, 0LL);
      v57 = v126;
      if ( !v126 || *v126 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        *(_QWORD *)(v117 + 40) = v126;
        sub_B2C2F8((BattleServantConfConponent_o *)(v117 + 40), v126, v127, v128, v129, v130, v131, v132);
        v133 = (System_Collections_Generic_List_WarBoardTaskBase__o *)v177;
        if ( !v177 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v177,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v117,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        v134 = this->fields.pieceData;
        if ( !v134 || !*v32 )
          goto LABEL_64;
        (*v32)->fields._nowSquareIndex_k__BackingField = v134->fields._nowSquareIndex_k__BackingField;
LABEL_45:
        v144 = this->fields.pieceData;
        if ( !v144 )
          goto LABEL_64;
        v144->fields._nowSquareIndex_k__BackingField = v116;
        v145 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v145,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
        Instance = this->fields.pieceData;
        if ( !Instance )
          goto LABEL_64;
        PieceEventVals = (System_Int32_array **)WarBoardPieceData__CreatePieceEventVals(Instance, v23);
        *(_QWORD *)(v21 + 32) = PieceEventVals;
        sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 32), PieceEventVals, v147, v148, v149, v150, v151, v152);
        Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Instance )
          goto LABEL_64;
        Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                            (WarBoardManager_o *)Instance,
                                            30,
                                            *(System_Int32_array **)(v21 + 32),
                                            0LL);
        if ( !v145 )
          goto LABEL_64;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v145,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        if ( *v32 )
        {
          v154 = WarBoardPieceData__CreatePieceEventVals(*v32, v153);
          Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !Instance )
            goto LABEL_64;
          EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                        (WarBoardManager_o *)Instance,
                                                                        30,
                                                                        v154,
                                                                        0LL);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v145,
            EventTasks,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        }
        Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Instance )
          goto LABEL_64;
        v156 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                36,
                                                                0LL,
                                                                0LL);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v145,
          v156,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v145,
               (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
        {
          Instance = *v30;
          if ( !*v30 )
            goto LABEL_64;
          WarBoardManager__AddTask_18201492(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v145,
            0LL);
        }
        Instance = *v30;
        if ( !*v30 )
          goto LABEL_64;
        WarBoardManager__AddTask_18201492((WarBoardManager_o *)Instance, 0, v133, 0LL);
        v157 = *(WarBoardManager_o **)(v21 + 48);
        v158 = (WarBoardTaskBase_array *)sub_B2C374(WarBoardTaskBase___TypeInfo, 1LL);
        v159 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
        WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v159, 0LL, 0LL);
        v160 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
        WarBoardTaskBase_TaskCallback___ctor(
          v160,
          (Il2CppObject *)v21,
          Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
          0LL);
        if ( !v159
          || (*(_QWORD *)(v159 + 32) = v160,
              sub_B2C2F8(
                (BattleServantConfConponent_o *)(v159 + 32),
                (System_Int32_array **)v160,
                v161,
                v162,
                v163,
                v164,
                v165,
                v166),
              !v158) )
        {
LABEL_64:
          sub_B2C434(Instance, v23);
        }
        Instance = (WarBoardPieceData_o *)sub_B2C41C(v159, v158->obj.klass->_1.element_class);
        if ( Instance )
        {
          if ( v158->max_length )
          {
            v158->m_Items[0] = (WarBoardTaskBase_o *)v159;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)v158->m_Items,
              (System_Int32_array **)v159,
              v167,
              v168,
              v169,
              v170,
              v171,
              v172);
            if ( v157 )
            {
              WarBoardManager__AddTask(v157, 0, v158, 0LL);
              Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( Instance )
              {
                WarBoardManager__JudgmentGameSet((WarBoardManager_o *)Instance, 0LL);
                return;
              }
            }
            goto LABEL_64;
          }
LABEL_65:
          v173 = sub_B2C460(Instance);
          sub_B2C400(v173, 0LL);
        }
LABEL_66:
        v174 = sub_B2C454();
        sub_B2C400(v174, 0LL);
      }
    }
    else
    {
      if ( !v80 )
        goto LABEL_64;
      EndCallback = (System_Delegate_o *)v80->fields.EndCallback;
      v136 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v136,
        (Il2CppObject *)v21,
        Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
        0LL);
      v137 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v136, 0LL);
      v57 = v137;
      if ( !v137 || *v137 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        v80->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v137;
        sub_B2C2F8((BattleServantConfConponent_o *)&v80->fields.EndCallback, v137, v138, v139, v140, v141, v142, v143);
        v133 = (System_Collections_Generic_List_WarBoardTaskBase__o *)v177;
        if ( !v177 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v177,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v177,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        v116 = squareIndex;
        goto LABEL_45;
      }
    }
  }
  v175 = (WarBoardPieceData_o *)sub_B2C728(v57);
  WarBoardPieceData__get_gameObject(v175, v176);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  if ( (byte_4186596 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4186596 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B2C434(Instance, v4);
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

  if ( (byte_41865A4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18181/*"ef_dm_base"*/, popText);
    byte_41865A4 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x23
  WarBoardData_o *Instance; // x0
  __int64 v20; // x1
  WarBoardManager_o *v21; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardWallData_o *v23; // x21
  float x; // s14
  float y; // s15
  float z; // s8
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s11
  float v31; // s12
  float v32; // s13
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  __int64 v40; // x24
  System_Delegate_o *v41; // x26
  WarBoardTaskBase_TaskCallback_o *v42; // x27
  System_Int32_array **v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  float v50; // s13
  float v51; // s1
  float v52; // s2
  float v53; // s0
  float v54; // s11
  float v55; // s12
  float v56; // s0
  float v57; // s13
  float v58; // s9
  float v59; // s10
  UnityEngine_GameObject_o *gameObject; // x23
  WarBoardMovePerformance_o *v61; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v62; // x24
  const MethodInfo *v63; // x3
  float lengthMoveAttack; // s0
  float v65; // s10
  float v66; // s11
  float v67; // s12
  UnityEngine_GameObject_o *v68; // x0
  float v69; // s13
  UnityEngine_GameObject_o *v70; // x22
  WarBoardMovePerformance_o *v71; // x0
  System_Int32_array **v72; // x24
  const MethodInfo *v73; // x3
  System_Collections_Generic_List_WarBoardTaskBase__o *v74; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x23
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x23
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x21
  WarBoardOrthostichySchedule_o *v97; // x21
  const MethodInfo *v98; // x2
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  __int64 v105; // x21
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 v112; // x0
  __int64 v113; // x0
  WarBoardPieceBaseComponent_o *v114; // x0
  int32_t v115; // w1
  const MethodInfo *v116; // x2
  float pixelPerSecond; // [xsp+8h] [xbp-A8h]
  float v118; // [xsp+Ch] [xbp-A4h]
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v127; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_418659D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v7);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__, v11);
    sub_B2C35C(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, v12);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v13);
    sub_B2C35C(&WarBoardMovePerformance_TypeInfo, v14);
    sub_B2C35C(&WarBoardOrthostichySchedule_TypeInfo, v15);
    sub_B2C35C(&WarBoardParallelSchedule_TypeInfo, v16);
    sub_B2C35C(&WarBoardTaskBase___TypeInfo, v17);
    byte_418659D = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v18 = sub_B2C42C(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v18,
    0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v21 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)WarBoardData__GetWall(Instance, squareIndex, 0, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_35;
  v23 = (WarBoardWallData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v21, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  *(UnityEngine_Vector3_o *)&v27 = WarBoardManager__GetSquarePosition(v21, squareIndex, 0LL);
  Instance = v21->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_35;
  v30 = v27;
  v31 = v28;
  v32 = v29;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0LL);
  if ( !v18 )
    goto LABEL_35;
  *(_QWORD *)(v18 + 16) = Instance;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)Instance, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v40 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v40, 0LL, 0LL);
  if ( !v40 )
    goto LABEL_35;
  v41 = *(System_Delegate_o **)(v40 + 32);
  v42 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v42,
    (Il2CppObject *)v18,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0LL);
  v43 = (System_Int32_array **)System_Delegate__Combine(v41, (System_Delegate_o *)v42, 0LL);
  if ( v43 && *v43 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v114 = (WarBoardPieceBaseComponent_o *)sub_B2C728(v43);
    WarBoardPieceBaseComponent__OnAfterWallAttack(v114, v115, v116);
    return;
  }
  *(_QWORD *)(v40 + 32) = v43;
  sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 32), v43, v44, v45, v46, v47, v48, v49);
  if ( !v39 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v39,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v121.fields.x = v30 - x;
  v121.fields.y = v31 - y;
  v121.fields.z = v32 - z;
  *(float *)&methoda.methodPointer = v30 - x;
  *((float *)&methoda.methodPointer + 1) = v31 - y;
  *(float *)&methoda.invoker_method = v32 - z;
  v122.fields.x = UnityEngine_Vector3__get_magnitude(v121, &methoda);
  v50 = v122.fields.x;
  *(UnityEngine_Vector3_o *)(&v51 - 1) = UnityEngine_Vector3__get_normalized(v122, &methoda);
  v54 = v53;
  v55 = v51;
  v56 = v50 - this->fields.lengthOnAttack;
  v57 = v52;
  if ( v56 > 0.0 )
  {
    v58 = x + (float)(v54 * v56);
    v118 = y + (float)(v51 * v56);
    v59 = z + (float)(v52 * v56);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v61 = (WarBoardMovePerformance_o *)sub_B2C42C(WarBoardMovePerformance_TypeInfo);
    v123.fields.y = y;
    y = v118;
    v123.fields.x = x;
    v123.fields.z = z;
    v126.fields.x = v58;
    v126.fields.y = v118;
    v126.fields.z = v59;
    v62 = (EventMissionProgressRequest_Argument_ProgressData_o *)v61;
    WarBoardMovePerformance___ctor(v61, gameObject, v123, v126, pixelPerSecond, 5, v63);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v39,
      v62,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    x = v58;
    z = v59;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v65 = x + (float)(v54 * lengthMoveAttack);
  v66 = y + (float)(v55 * lengthMoveAttack);
  v67 = z + (float)(v57 * lengthMoveAttack);
  v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v69 = this->fields.pixelPerSecond;
  v70 = v68;
  v71 = (WarBoardMovePerformance_o *)sub_B2C42C(WarBoardMovePerformance_TypeInfo);
  v124.fields.x = v65;
  v124.fields.y = v66;
  v124.fields.z = v67;
  v127.fields.x = x;
  v127.fields.y = y;
  v127.fields.z = z;
  v72 = (System_Int32_array **)v71;
  WarBoardMovePerformance___ctor(v71, v70, v124, v127, v69, 4, v73);
  if ( !v23 )
    goto LABEL_35;
  v74 = WarBoardWallData__DecrementBreakPointPerformance(v23, 1, 0LL);
  v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v75,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0LL, 0LL);
  if ( !v75 )
    goto LABEL_35;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v75,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v39,
    (System_Collections_Generic_IEnumerable_T__o *)v75,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)sub_B2C374(WarBoardTaskBase___TypeInfo, 4LL);
  if ( !Instance )
    goto LABEL_35;
  v82 = (System_Int32_array **)Instance;
  if ( v72 )
  {
    Instance = (WarBoardData_o *)sub_B2C41C(v72, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( !*((_DWORD *)v82 + 6) )
    goto LABEL_36;
  v82[4] = (System_Int32_array *)v72;
  sub_B2C2F8((BattleServantConfConponent_o *)(v82 + 4), v72, v76, v77, v78, v79, v80, v81);
  Instance = (WarBoardData_o *)v23->fields.component;
  if ( !Instance )
    goto LABEL_35;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0LL);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v21, IconPosition, 0, 0LL);
  v89 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_B2C41C(Instance, *(_QWORD *)&(*v82)->m_Items[9]);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( *((_DWORD *)v82 + 6) <= 1u )
    goto LABEL_36;
  v82[5] = (System_Int32_array *)v89;
  sub_B2C2F8((BattleServantConfConponent_o *)(v82 + 5), v89, v83, v84, v85, v86, v87, v88);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_35:
    sub_B2C434(Instance, v20);
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v96 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_B2C41C(Instance, *(_QWORD *)&(*v82)->m_Items[9]);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( *((_DWORD *)v82 + 6) <= 2u )
    goto LABEL_36;
  v82[6] = (System_Int32_array *)v96;
  sub_B2C2F8((BattleServantConfConponent_o *)(v82 + 6), v96, v90, v91, v92, v93, v94, v95);
  v97 = (WarBoardOrthostichySchedule_o *)sub_B2C42C(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_22398892(v97, v74, v98);
  if ( v97 )
  {
    Instance = (WarBoardData_o *)sub_B2C41C(v97, *(_QWORD *)&(*v82)->m_Items[9]);
    if ( !Instance )
    {
LABEL_37:
      v113 = sub_B2C454();
      sub_B2C400(v113, 0LL);
    }
  }
  if ( *((_DWORD *)v82 + 6) <= 3u )
  {
LABEL_36:
    v112 = sub_B2C460(Instance);
    sub_B2C400(v112, 0LL);
  }
  v82[7] = (System_Int32_array *)v97;
  sub_B2C2F8((BattleServantConfConponent_o *)(v82 + 7), (System_Int32_array **)v97, v99, v100, v101, v102, v103, v104);
  v105 = sub_B2C42C(WarBoardParallelSchedule_TypeInfo);
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v105, 0LL);
  *(_QWORD *)(v105 + 56) = v82;
  sub_B2C2F8((BattleServantConfConponent_o *)(v105 + 56), v82, v106, v107, v108, v109, v110, v111);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v39,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v105,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( v39->fields._size >= 1 )
    WarBoardManager__AddTask_18201492(v21, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v39, 0LL);
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
    sub_B2C434(simpleAnimation, animationName);
  SimpleAnimation__Play_16486620(simpleAnimation, animationName, 0LL);
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
    sub_B2C434(this, method);
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
        v7 = sub_B2C460(this);
        sub_B2C400(v7, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v16; // x22
  unsigned __int64 v17; // x19
  UnityEngine_Object_o *v18; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x0

  if ( (byte_418658D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072, parents);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_418658D = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v14];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v16 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_22;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)klass )
      {
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + v17);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v18,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v18,
                                                                                                 0LL);
          if ( !v10 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v10,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v27 = sub_B2C460(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B2C400(v27, 0LL);
    }
  }
LABEL_22:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                                                                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B2C434(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&button->fields.tweenTargets,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_418658F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, enable);
    byte_418658F = 1;
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
      sub_B2C434(0LL, v6);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  peRenderTexture_ChangeLayerObject_o *v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *listEffectData; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x21
  struct UnityEngine_Renderer_o *renderer; // x21
  UnityEngine_Renderer_c *klass; // x8
  unsigned __int64 v25; // x22
  bool v26; // w19
  UnityEngine_Object_o *v27; // x20
  __int64 v28; // x0

  if ( (byte_41865A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__, effectKey);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v8);
    sub_B2C35C(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v9);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__, v10);
    sub_B2C35C(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, v11);
    byte_41865A3 = 1;
  }
  v12 = sub_B2C42C(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_20;
  *(_QWORD *)(v12 + 16) = effectKey;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)effectKey, v15, v16, v17, v18, v19, v20);
  listEffectData = this->fields.listEffectData;
  v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v22,
    (Il2CppObject *)v12,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  if ( !listEffectData )
    goto LABEL_20;
  v13 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listEffectData,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  if ( !v13 )
    return (char)v13;
  renderer = v13->fields.renderer;
  if ( !renderer )
LABEL_20:
    sub_B2C434(v13, v14);
  klass = renderer[1].klass;
  if ( (int)klass >= 1 )
  {
    v25 = 0LL;
    v26 = isDisp;
    do
    {
      if ( v25 >= (unsigned int)klass )
      {
        v28 = sub_B2C460(v13);
        sub_B2C400(v28, 0LL);
      }
      v27 = (UnityEngine_Object_o *)*((_QWORD *)&renderer[1].monitor + v25);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v13 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)v13 & 1) == 0 )
      {
        if ( !v27 )
          goto LABEL_20;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v27, v26, 0LL);
      }
      LODWORD(klass) = renderer[1].klass;
      ++v25;
    }
    while ( (__int64)v25 < (int)klass );
  }
  LOBYTE(v13) = 1;
  return (char)v13;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_418658E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, enable);
    byte_418658E = 1;
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
      sub_B2C434(0LL, v6);
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
  if ( (byte_4186591 & 1) == 0 )
  {
    this = (WarBoardPieceBaseComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186591 = 1;
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
      sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
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
      SimpleAnimation__Stop_16484120(simpleAnimation, animationName, 0LL);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0LL);
        return;
      }
    }
LABEL_7:
    sub_B2C434(simpleAnimation, animationName);
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
      sub_B2C434(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v26; // x23
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o **v35; // x21
  __int64 v36; // x22
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v37; // x23
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v45; // w23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v46; // x25
  System_Collections_Generic_IEnumerable_T__o *v47; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v48; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v50; // x25
  System_Collections_Generic_IEnumerable_T__o *v51; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v52; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v55; // x20
  _BOOL8 v56; // x0
  __int64 v57; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *removeTweenTargetObjects; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v61; // x1
  UnityEngine_GameObject_o *v62; // x0
  WarBoardManager_TaskList_o *v63; // x1
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  struct UICommonButton_o *v66; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_HashSet_Enumerator_T__o v74; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v75; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4186594 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_UIWidget___ctor__, method);
    sub_B2C35C(&System_Action_UIWidget__TypeInfo, v3);
    sub_B2C35C(&Method_BasicHelper_ForEach_UIWidget___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_GameObject___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_GameObject___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__, v13);
    sub_B2C35C(&System_Collections_Generic_HashSet_UIWidget__TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Contains__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Remove__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor___67310168, v18);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v19);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__, v20);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__, v21);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__, v22);
    sub_B2C35C(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__, v23);
    sub_B2C35C(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, v24);
    byte_4186594 = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v25 = sub_B2C42C(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v25,
    0LL);
  v26 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v26,
    (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v25 )
    goto LABEL_36;
  *(_QWORD *)(v25 + 24) = v26;
  v35 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o **)(v25 + 24);
  v36 = v25 + 16;
  sub_B2C2F8((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)v26, v29, v30, v31, v32, v33, v34);
  v37 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v37,
    (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v25 + 16) = v37;
  sub_B2C2F8((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_36;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasAvailablePermanentSleepBuff(pieceData, v28);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v45 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v46 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_UIWidget__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v46,
      (Il2CppObject *)v25,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      cannotActTurnDurk,
      (System_Action_T__o *)v46,
      (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_36;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, v28);
    if ( v45 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v47 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v48 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_UIWidget__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v48,
        (Il2CppObject *)v25,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_UIWidget___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v47,
        (System_Action_T__o *)v48,
        (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v50 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_UIWidget__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v50,
      (Il2CppObject *)v25,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v50,
      (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v45 & 1) != 0 )
    {
      v51 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v52 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_UIWidget__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v52,
        (Il2CppObject *)v25,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_UIWidget___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v51,
        (System_Action_T__o *)v52,
        (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v36 )
    goto LABEL_36;
  if ( *(int *)(*(_QWORD *)v36 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_36;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v55 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v55,
    tweenTargets,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_GameObject___ctor___67310168);
  pieceData = *(WarBoardPieceData_o **)v36;
  if ( !*(_QWORD *)v36 )
    goto LABEL_36;
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v74,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)pieceData,
    (const MethodInfo_2D8C544 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v75 = v74;
  while ( 1 )
  {
    v56 = System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v75,
            (const MethodInfo_20E9DBC *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v56 )
      break;
    current = v75.fields._current;
    if ( !v75.fields._current )
      sub_B2C434(v56, v57);
    removeTweenTargetObjects = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.removeTweenTargetObjects;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v75.fields._current, 0LL);
    if ( !removeTweenTargetObjects )
      sub_B2C434(gameObject, gameObject);
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           removeTweenTargetObjects,
           (WarBoardManager_TaskList_o *)gameObject,
           (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v63 = (WarBoardManager_TaskList_o *)v62;
      if ( !v55 )
        sub_B2C434(v62, v62);
      goto LABEL_22;
    }
    if ( !*v35 )
      sub_B2C434(0LL, v61);
    if ( System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           *v35,
           (BattleBuffData_BuffData_o *)current,
           (const MethodInfo_2D8C0E0 *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      gray = UnityEngine_Color__get_gray(0LL);
      UIWidget__set_color((UIWidget_o *)current, gray, 0LL);
      v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v63 = (WarBoardManager_TaskList_o *)v64;
      if ( !v55 )
        sub_B2C434(v64, v64);
LABEL_22:
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v55,
        v63,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color((UIWidget_o *)current, white, 0LL);
      v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !v55 )
        sub_B2C434(v65, v65);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v75,
    (const MethodInfo_20E9DB8 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v66 = this->fields.button;
  v67 = System_Linq_Enumerable__Distinct_string_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v55,
          (const MethodInfo_1A8D740 *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                       v67,
                                       (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v66 )
LABEL_36:
    sub_B2C434(pieceData, v28);
  v66->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v66->fields.tweenTargets,
    (System_Int32_array **)pieceData,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiByBuffChanged(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v4; // x1
  WarBoardPieceStatusLabel_o *v5; // x0

  if ( (byte_4186593 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4186593 = 1;
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
      sub_B2C434(0LL, v4);
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

  if ( (byte_41865A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_41865A7 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B2C434(Instance, v5);
  PieceDispPriority = WarBoardData__GetPieceDispPriority(Instance, this->fields.pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__WidgetDepthIncrement(
        WarBoardPieceBaseComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x21
  __int64 v5; // x1
  struct UIWidget_array *uiWidgets; // x8
  struct UIWidget_array **p_uiWidgets; // x20
  System_Int32_array **ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int max_length; // w21
  int v23; // w22
  __int64 v24; // x23
  __int64 v25; // x9
  __int64 v26; // x9
  __int64 v27; // x22
  __int64 v28; // x23
  UnityEngine_Object_o *v29; // x21
  struct UIWidget_array *v30; // x8
  __int64 v31; // x0

  v4 = this;
  if ( (byte_41865A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072, *(_QWORD *)&value);
    this = (WarBoardPieceBaseComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_41865A0 = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                       (UnityEngine_Component_o *)v4,
                                                                                       1,
                                                                                       (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v4->fields.uiWidgets,
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    uiWidgets = v4->fields.uiWidgets;
    if ( !uiWidgets )
      goto LABEL_27;
    max_length = uiWidgets->max_length;
    if ( max_length >= 1 )
    {
      v23 = 0;
      v24 = 32LL;
      do
      {
        if ( !uiWidgets )
          goto LABEL_27;
        if ( v23 >= uiWidgets->max_length )
          goto LABEL_29;
        v25 = *(__int64 *)((char *)&uiWidgets->obj.klass + v24);
        if ( !v25 )
          goto LABEL_27;
        if ( *(int *)(v25 + 168) >= 1001 )
        {
          *(Il2CppClass **)((char *)&uiWidgets->obj.klass + v24) = 0LL;
          sub_B2C2F8((BattleServantConfConponent_o *)((char *)uiWidgets + v24), 0LL, v16, v17, v18, v19, v20, v21);
        }
        uiWidgets = *p_uiWidgets;
        ++v23;
        v24 += 8LL;
      }
      while ( v23 < max_length );
      if ( !uiWidgets )
LABEL_27:
        sub_B2C434(this, v15);
    }
  }
  v26 = *(_QWORD *)&uiWidgets->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = (int)v26;
    v28 = 4LL;
    while ( v28 - 4 < (unsigned __int64)uiWidgets->max_length )
    {
      v29 = (UnityEngine_Object_o *)*((_QWORD *)&uiWidgets->obj.klass + v28);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v30 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_27;
        if ( v28 - 4 >= (unsigned __int64)v30->max_length )
          break;
        this = (WarBoardPieceBaseComponent_o *)*((_QWORD *)&v30->obj.klass + v28);
        if ( !this )
          goto LABEL_27;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0LL);
      }
      if ( v28 - 3 >= v27 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v28;
      if ( !*p_uiWidgets )
        goto LABEL_27;
    }
LABEL_29:
    v31 = sub_B2C460(this);
    sub_B2C400(v31, 0LL);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186700 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardPieceBaseComponent___c_TypeInfo, v1);
    byte_4186700 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186703 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_4186703 = 1;
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

  if ( (byte_4186701 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4186701 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__maskFadeout(Instance, 2, 0.0, 0LL, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186702 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_4186702 = 1;
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

  if ( (byte_4186704 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_4186704 = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_B2C434(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)targetUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_4186705 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_4186705 = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_B2C434(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)darkenUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_4186706 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_4186706 = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_B2C434(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)targetUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_4186707 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_4186707 = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_B2C434(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)darkenUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
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
    sub_B2C434(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4186708 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_4186708 = 1;
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

  if ( (byte_4186709 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_4186709 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v10; // x1
  WarBoardPieceData_o *targetSquarePiece; // x0
  System_Int32_array *PieceEventVals; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_418670A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_418670A = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0LL);
  if ( !v8 )
    goto LABEL_13;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0LL);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                  Instance,
                                                                  38,
                                                                  PieceEventVals,
                                                                  0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
      EventTasks,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_B2C434(Instance, v10);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(Instance, 37, 0LL, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
    v14,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v8,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
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
    sub_B2C434(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, method);
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

  if ( (byte_418670C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_418670C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(_4__this, method);
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
    sub_B2C434(this, method);
  return targetPiece->fields._isDead_k__BackingField && this->fields.moveAfterActionCheck;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x1
  WarBoardPieceData_o *targetPiece; // x0
  struct WarBoardManager_o *warBoardManager; // x8
  int32_t id; // w21
  struct WarBoardPieceData_o *v14; // x8
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v16; // x22
  int32_t v17; // w2
  bool v18; // w4
  WarBoardMessageMaster_o *v19; // x0
  int32_t v20; // w1
  int32_t v21; // w3
  System_Int32_array *v22; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  WarBoardManager_o *v25; // x19

  if ( (byte_418670B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardMessageMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    byte_418670B = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v14 = this->fields.targetPiece;
    if ( !v14 )
      goto LABEL_26;
    breakPoint_k__BackingField = v14->fields._breakPoint_k__BackingField;
    v16 = (WarBoardMessageMaster_o *)targetPiece;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0LL);
    if ( !v16 )
      goto LABEL_26;
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      v17 = 12;
      v18 = 1;
      v19 = v16;
      v20 = id;
      v21 = breakPoint_k__BackingField;
    }
    else
    {
      v17 = 10;
      v19 = v16;
      v20 = id;
      v21 = breakPoint_k__BackingField;
      v18 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v19, v20, v17, v21, v18, 0LL);
    if ( !v9 )
      goto LABEL_26;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
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
  v22 = (System_Int32_array *)targetPiece;
  targetPiece = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                         this->fields.warBoardManager,
                                         2,
                                         (System_Int32_array *)targetPiece,
                                         0LL);
  if ( !v9 )
    goto LABEL_26;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)targetPiece,
                                                                20,
                                                                v22,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    EventTasks,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  v24 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)targetPiece,
                                                         40,
                                                         v22,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    v24,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v9,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v25 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v25 )
    {
      WarBoardManager__InsertRunningTask(v25, (WarBoardTaskBase_array *)targetPiece, 0LL);
      return;
    }
LABEL_26:
    sub_B2C434(targetPiece, v10);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418670E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_418670E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(_4__this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v10; // x1
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_418670D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_418670D = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0LL, 0LL);
  if ( !v8 )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v8,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
      return;
    }
LABEL_9:
    sub_B2C434(Instance, v10);
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
    sub_B2C434(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0LL);
}