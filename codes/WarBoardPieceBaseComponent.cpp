void __fastcall WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_421335A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_6812/*"Frame{0}"*/, v7);
    byte_421335A = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listEffectData,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416LL;
  this->fields.lengthMoveAttack = 25.0;
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_32029B0;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_32029C0;
  v15 = (System_Int32_array **)StringLiteral_6812/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6812/*"Frame{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.baseFrameName, v15, v16, v17, v18, v19, v20, v21);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.removeTweenTargetObjects,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  __int64 v25; // x1
  __int64 v26; // x2
  WarBoardMovePerformance_o *v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x20
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  WebViewManager_o *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_4213351 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_B0D8A4(&WarBoardMovePerformance_TypeInfo, v14);
    byte_4213351 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  *(_QWORD *)&squareIndex,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_12;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, v16);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_12;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v22 = SquarePosition.fields.x;
  v23 = SquarePosition.fields.y;
  v24 = SquarePosition.fields.z;
  v27 = (WarBoardMovePerformance_o *)sub_B0D974(WarBoardMovePerformance_TypeInfo, v25, v26);
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  v35.fields.x = v22;
  v35.fields.y = v23;
  v35.fields.z = v24;
  v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)v27;
  WarBoardMovePerformance___ctor(v27, gameObject, v34, v35, pixelPerSecond, 0, v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v15,
    v28,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v30 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                               (WarBoardManager_o *)pieceData,
                                                               38,
                                                               PieceEventVals,
                                                               0LL),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
          v30,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v31 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                               (WarBoardManager_o *)pieceData,
                                                               37,
                                                               0LL,
                                                               0LL),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
          v31,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_12:
    sub_B0D97C(pieceData);
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

  if ( (byte_4213342 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4213342 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_B0D97C(Instance);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL)
      && WarBoardManager__IsSelectedPieceSame(v6, this->fields.pieceData, 0LL) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardCommonEffectPerformance_o *v23; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x21
  System_Nullable_Vector3__o v25; // 0:x3.16
  System_Nullable_Vector3__o v26; // 0:x5.16

  if ( (byte_4213357 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_B0D8A4(&WarBoardCommonEffectPerformance_TypeInfo, v13);
    sub_B0D8A4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v14);
    byte_4213357 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  effectName,
                                                                                                  taskList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2FC9D88 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v19 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
      v19 = (UnityEngine_Object_o *)transform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v20 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)CommonEffectAsset_object,
                                        (UnityEngine_Transform_o *)v19,
                                        (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
    v23 = (WarBoardCommonEffectPerformance_o *)sub_B0D974(WarBoardCommonEffectPerformance_TypeInfo, v21, v22);
    *(_QWORD *)&v25.fields.value.fields.x = 0LL;
    *(_QWORD *)&v25.fields.value.fields.z = 0LL;
    *(_QWORD *)&v26.fields.value.fields.x = 0LL;
    *(_QWORD *)&v26.fields.value.fields.z = 0LL;
    v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)v23;
    WarBoardCommonEffectPerformance___ctor(v23, 0LL, v20, v25, v26, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
    if ( v15 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        v24,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v15,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__AddTask_17750248(
          (WarBoardManager_o *)Instance,
          0,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
          0LL);
        return;
      }
    }
LABEL_21:
    sub_B0D97C(Instance);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x22
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v23; // x21
  WarBoardCommonEffectPerformance_o *v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x20
  System_Nullable_Vector3__o v26; // 0:x3.16
  System_Nullable_Vector3__o v27; // 0:x5.16

  if ( (byte_4213358 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_B0D8A4(&WarBoardCommonEffectPerformance_TypeInfo, v14);
    byte_4213358 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(0LL, effectDamageBaseObject, 0LL) )
  {
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v16,
                                                                                                    v17);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    v23 = this->fields.effectDamageBaseObject;
    v24 = (WarBoardCommonEffectPerformance_o *)sub_B0D974(WarBoardCommonEffectPerformance_TypeInfo, v20, v21);
    *(_QWORD *)&v26.fields.value.fields.x = 0LL;
    *(_QWORD *)&v26.fields.value.fields.z = 0LL;
    *(_QWORD *)&v27.fields.value.fields.x = 0LL;
    *(_QWORD *)&v27.fields.value.fields.z = 0LL;
    v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)v24;
    WarBoardCommonEffectPerformance___ctor(v24, 0LL, v23, v26, v27, (System_Nullable_Vector3__o)0, 0, 0, 0, 0LL);
    if ( v18 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v18,
        v25,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v18,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      Instance = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__AddTask_17750248(
          (WarBoardManager_o *)Instance,
          0,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v18,
          0LL);
        return;
      }
    }
LABEL_18:
    sub_B0D97C(Instance);
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
  __int64 v17; // x1
  __int64 v18; // x2
  _QWORD **v19; // x20
  __int64 v20; // x19
  __int16 v21; // w8
  __int64 v22; // x19
  __int64 v23; // x19
  __int64 v24; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  WarBoardPieceBaseComponent___c_c *v27; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__62_0; // x20
  Il2CppObject *v30; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  v4 = this;
  if ( (byte_421334B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, targetPiece);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__, v8);
    sub_B0D8A4(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__, v11);
    this = (WarBoardPieceBaseComponent_o *)sub_B0D8A4(&WarBoardPieceBaseComponent___c_TypeInfo, v12);
    byte_421334B = 1;
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
              (const MethodInfo_1B44D70 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v16,
               (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_33:
    sub_B0D97C(this);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v26 = *(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.m_CachedPtr;
    v27 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v27 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                   System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo,
                                                                                                   v17,
                                                                                                   v18);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__62_0,
        v30,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        (const MethodInfo_261A104 *)Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
      v31 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v31->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v31->__9__62_0,
        (System_Int32_array **)_9__62_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                 v26,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                 (const MethodInfo_1B533F8 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v16,
             (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v19 = (_QWORD **)Method_System_Array_Empty_int___;
  v20 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v21 = *(_WORD *)(v20 + 306);
  if ( (v21 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v21 = *(_WORD *)(v20 + 306);
  }
  if ( (v21 & 0x400) != 0 )
  {
    v22 = *v19[6];
    if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
      sub_AA65A4(*v19[6]);
    if ( !*(_DWORD *)(v22 + 224) )
    {
      v23 = *v19[6];
      if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
        sub_AA65A4(*v19[6]);
      j_il2cpp_runtime_class_init_0(v23);
    }
  }
  v24 = *v19[6];
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AA65A4(*v19[6]);
  return **(System_Int32_array ***)(v24 + 184);
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_4213353 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName);
    byte_4213353 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_B0D974(
                                                 WarBoardSimpleAnimationPerformance_TypeInfo,
                                                 animationName,
                                                 method);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0LL);
  return v6;
}


void __fastcall WarBoardPieceBaseComponent__HideActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_4213344 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4213344 = 1;
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
    sub_B0D97C(currentActionPointRoot);
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x19
  WarBoardManager_o *v4; // x0

  if ( (byte_4213347 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_4213347 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v2 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v3 = **(_QWORD **)(v2 + 192);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AA65A4(v3);
  v4 = **(WarBoardManager_o ***)(v3 + 184);
  if ( !v4 )
    sub_B0D97C(0LL);
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
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Transform_o *transform; // x21
  int v30; // s0
  int32_t breakPointMax_k__BackingField; // w21
  struct WarBoardBreakPointComponent_array *v34; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t v42; // w25
  float v43; // s8
  float v44; // s9
  struct UnityEngine_GameObject_o *breakPointPrefab; // x23
  UnityEngine_Transform_o *v46; // x24
  UnityEngine_GameObject_o *v47; // x24
  WarBoardBreakPointComponent_o *v48; // x23
  struct UIWidget_o *breakPointParent; // x8
  struct WarBoardBreakPointComponent_array *v50; // x26
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t v57; // w24
  Il2CppClass **v58; // x0
  struct WarBoardBreakPointComponent_array *v59; // x8
  float maxSpacing; // s0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  UnityEngine_Transform_array *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x22
  const MethodInfo *v75; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v80; // x21
  UnityEngine_Object_o *v81; // x22
  struct UnityEngine_GameObject_o *v82; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  UnityEngine_Object_o *v90; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  __int64 v98; // x0
  __int64 v99; // x0
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421333E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UILabel___, pieceData);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v6);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B0D8A4(&UnityEngine_Transform___TypeInfo, v10);
    sub_B0D8A4(&WarBoardBreakPointComponent___TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v12);
    sub_B0D8A4(&StringLiteral_21926/*"root_text/type01/dm_base"*/, v13);
    sub_B0D8A4(&StringLiteral_18237/*"ef_dm_base"*/, v14);
    byte_421333E = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.pieceData = pieceData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.pieceData,
    (System_Int32_array **)pieceData,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_27;
  if ( !gameObject )
    goto LABEL_27;
  *(UnityEngine_Vector3_o *)&v30 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)gameObject,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
  breakPointMax_k__BackingField = pieceData->fields._breakPointMax_k__BackingField;
  v34 = (struct WarBoardBreakPointComponent_array *)sub_B0D8BC(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v34;
  p_breakPoints = &this->fields.breakPoints;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.breakPoints,
    (System_Int32_array **)v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_27;
  if ( breakPointMax_k__BackingField >= 1 )
  {
    v42 = 0;
    v43 = 0.0;
    v44 = (float)*(int *)(gameObject + 160) / (float)breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = this->fields.breakPointPrefab;
      v46 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (__int64)UnityEngine_Object__Instantiate_UILabel_(
                              (UILabel_o *)breakPointPrefab,
                              v46,
                              (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
      if ( !gameObject )
        goto LABEL_27;
      v47 = (UnityEngine_GameObject_o *)gameObject;
      v48 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v47, 0LL);
      if ( !gameObject )
        goto LABEL_27;
      v100.fields.y = 0.0;
      v100.fields.z = 0.0;
      v100.fields.x = v43;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v100, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_27;
      if ( !v48 )
        goto LABEL_27;
      WarBoardBreakPointComponent__Initialize(
        v48,
        breakPointParent->fields.mDepth + 2 * (~v42 + breakPointMax_k__BackingField),
        v42 + 1,
        pieceData->fields._type_k__BackingField == 1,
        pieceData->fields._type_k__BackingField == 0 && pieceData->fields._forceId_k__BackingField != 0,
        0,
        0LL);
      v50 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_27;
      gameObject = sub_B0D964(v48, v50->obj.klass->_1.element_class);
      if ( !gameObject )
        goto LABEL_62;
      v57 = v42;
      if ( v42 >= v50->max_length )
        goto LABEL_61;
      v58 = &v50->obj.klass + v42;
      v58[4] = (Il2CppClass *)v48;
      sub_B0D840((BattleServantConfConponent_o *)(v58 + 4), (System_Int32_array **)v48, v51, v52, v53, v54, v55, v56);
      v59 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_27;
      if ( v42 >= v59->max_length )
        goto LABEL_61;
      gameObject = (__int64)v59->m_Items[v42];
      if ( !gameObject )
        goto LABEL_27;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        pieceData->fields._breakPoint_k__BackingField > v42++,
        0,
        0LL);
      if ( breakPointMax_k__BackingField <= v57 + 1 )
        break;
      maxSpacing = v48->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      if ( maxSpacing >= v44 )
        maxSpacing = v44;
      v43 = v43 + maxSpacing;
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&pieceData->fields.pieceComponent,
    (System_Int32_array **)this,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_27;
LABEL_31:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  v67 = (UnityEngine_Transform_array *)sub_B0D8BC(UnityEngine_Transform___TypeInfo, 1LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v67 )
    goto LABEL_27;
  v74 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B0D964(gameObject, v67->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_62:
      v99 = sub_B0D99C();
      sub_B0D948(v99, 0LL);
    }
  }
  if ( !v67->max_length )
  {
LABEL_61:
    v98 = sub_B0D9A8(gameObject);
    sub_B0D948(v98, 0LL);
  }
  v67->m_Items[0] = (UnityEngine_Transform_o *)v74;
  sub_B0D840((BattleServantConfConponent_o *)v67->m_Items, v74, v68, v69, v70, v71, v72, v73);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v67, v75);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  gameObject = *(_QWORD *)(gameObject + 432);
  if ( !gameObject )
    goto LABEL_27;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v77);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v78);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_18237/*"ef_dm_base"*/,
                               (const MethodInfo_2FC9D88 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    v80 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v81 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
      v80 = (UnityEngine_Transform_o *)v81;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v82 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               (UILabel_o *)CommonEffectAsset_object,
                                               v80,
                                               (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
    this->fields.effectDamageBaseObject = v82;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.effectDamageBaseObject,
      (System_Int32_array **)v82,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0LL, 0LL) )
    {
      v90 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_21926/*"root_text/type01/dm_base"*/,
                                      0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = UnityEngine_Object__op_Inequality(v90, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v90 )
          goto LABEL_27;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)v90,
                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)Component_WebViewObject;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.effectDamageBaseLabel,
          (System_Int32_array **)Component_WebViewObject,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_27:
        sub_B0D97C(gameObject);
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  System_Int32_array **Instance; // x0
  WarBoardData_o **v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x8
  System_Int32_array **Piece_22073600; // x0
  WarBoardData_o **v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x24
  __int64 v51; // x1
  __int64 v52; // x2
  WarBoardTaskBase_TaskCallback_o *v53; // x25
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  float y; // v0.s[1]
  float x; // s8
  const MethodInfo *v63; // x1
  float32x2_t v64; // d0
  unsigned __int32 v65; // s1
  float v66; // s2
  __int64 v67; // x8
  bool v68; // zf
  __int64 v69; // x8
  float v70; // s3
  float v71; // s1
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x24
  __int64 v75; // x1
  __int64 v76; // x2
  WarBoardTaskBase_TaskCallback_o *v77; // x25
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct WarBoardPieceData_o *v84; // x8
  UnityEngine_GameObject_o *v85; // x26
  float v86; // s8
  float v87; // s9
  float v88; // s10
  float pixelPerSecond; // s13
  float v90; // s11
  float v91; // s12
  float z; // s14
  __int64 v93; // x1
  __int64 v94; // x2
  WarBoardMovePerformance_o *v95; // x0
  WarBoardTaskBase_o *v96; // x25
  const MethodInfo *v97; // x3
  const MethodInfo *v98; // x1
  const MethodInfo *v99; // x1
  __int64 v100; // x2
  bool v101; // w8
  System_Func_bool__o *v102; // x23
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x21
  __int64 v106; // x1
  __int64 v107; // x2
  System_Delegate_o *v108; // x23
  WarBoardPieceBaseComponent___c_c *v109; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v112; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  WarBoardPieceData_o *v127; // x0
  const MethodInfo *v128; // x1
  MethodInfo v129; // [xsp+0h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_421334E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__, v11);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__, v12);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__, v13);
    sub_B0D8A4(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
      v14);
    sub_B0D8A4(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, v15);
    sub_B0D8A4(&WarBoardPieceBaseComponent___c_TypeInfo, v16);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v17);
    sub_B0D8A4(&WarBoardConditionalJumpTask_TypeInfo, v18);
    sub_B0D8A4(&WarBoardMovePerformance_TypeInfo, v19);
    byte_421334E = 1;
  }
  LODWORD(v129.invoker_method) = 0;
  v129.methodPointer = 0LL;
  v20 = sub_B0D974(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, *(_QWORD *)&squareIndex, method);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_38;
  *(_QWORD *)(v20 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v20 + 52) = squareIndex;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v32 = (WarBoardData_o **)(v20 + 24);
  *(_QWORD *)(v20 + 24) = Instance;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 24), Instance, v33, v34, v35, v36, v37, v38);
  v39 = *(_QWORD *)(v20 + 24);
  if ( !v39 )
    goto LABEL_38;
  gameObject = *(WarBoardData_o **)(v39 + 432);
  if ( !gameObject )
    goto LABEL_38;
  Piece_22073600 = (System_Int32_array **)WarBoardData__GetPiece_22073600(gameObject, *(_DWORD *)(v20 + 52), 0LL);
  v41 = (WarBoardData_o **)(v20 + 16);
  *(_QWORD *)(v20 + 16) = Piece_22073600;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), Piece_22073600, v42, v43, v44, v45, v46, v47);
  v50 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v48, v49);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v50, 0LL, 0LL);
  v53 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v51, v52);
  WarBoardTaskBase_TaskCallback___ctor(
    v53,
    (Il2CppObject *)v20,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v50 )
    goto LABEL_38;
  *(_QWORD *)(v50 + 32) = v53;
  sub_B0D840((BattleServantConfConponent_o *)(v50 + 32), (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
  if ( !v30 )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_38;
  gameObject = *v32;
  if ( !*v32 )
    goto LABEL_38;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v20 + 24);
  *(UnityEngine_Vector3_o *)(v20 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_38;
  v131 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v20 + 52), 0LL);
  y = v131.fields.y;
  *(float32x2_t *)&v131.fields.x = vsub_f32(*(float32x2_t *)&v131.fields.x, *(float32x2_t *)(v20 + 40));
  v131.fields.y = v131.fields.z - *(float *)(v20 + 48);
  v129.methodPointer = *(Il2CppMethodPointer *)&v131.fields.x;
  *(float *)&v129.invoker_method = v131.fields.y;
  v132.fields.x = UnityEngine_Vector3__get_magnitude(v131, &v129);
  x = v132.fields.x;
  *(UnityEngine_Vector3_o *)v64.n64_u64 = UnityEngine_Vector3__get_normalized(v132, &v129);
  v67 = *(_QWORD *)(v20 + 16);
  if ( !v67 )
    goto LABEL_38;
  v68 = *(_DWORD *)(v67 + 16) == 0;
  v69 = 136LL;
  if ( !v68 )
    v69 = 132LL;
  v70 = x - *(float *)((char *)&this->klass + v69);
  if ( v70 > 0.0 )
  {
    v64.n64_u32[1] = v65;
    v71 = (float)(v66 * v70) + *(float *)(v20 + 48);
    *(float32x2_t *)(v20 + 40) = vadd_f32(vmul_n_f32(v64, v70), *(float32x2_t *)(v20 + 40));
    *(float *)(v20 + 48) = v71;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_38;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, v63);
  v74 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v72, v73);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v74, 0LL, 0LL);
  v77 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v75, v76);
  WarBoardTaskBase_TaskCallback___ctor(
    v77,
    (Il2CppObject *)v20,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0LL);
  if ( !v74 )
    goto LABEL_38;
  *(_QWORD *)(v74 + 32) = v77;
  sub_B0D840((BattleServantConfConponent_o *)(v74 + 32), (System_Int32_array **)v77, v78, v79, v80, v81, v82, v83);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v84 = this->fields.pieceData;
  if ( !v84 )
    goto LABEL_38;
  v85 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v20 + 24);
  if ( !gameObject )
    goto LABEL_38;
  v86 = *(float *)(v20 + 40);
  v87 = *(float *)(v20 + 44);
  v88 = *(float *)(v20 + 48);
  v133 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v84->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v90 = v133.fields.x;
  v91 = v133.fields.y;
  z = v133.fields.z;
  v95 = (WarBoardMovePerformance_o *)sub_B0D974(WarBoardMovePerformance_TypeInfo, v93, v94);
  v134.fields.x = v86;
  v134.fields.y = v87;
  v134.fields.z = v88;
  v135.fields.x = v90;
  v135.fields.y = v91;
  v135.fields.z = z;
  v96 = (WarBoardTaskBase_o *)v95;
  WarBoardMovePerformance___ctor(v95, v85, v134, v135, pixelPerSecond, 0, v97);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_38;
  if ( WarBoardPieceData__GetMoveAfterAttack((WarBoardPieceData_o *)gameObject, v98) )
  {
    v101 = 0;
  }
  else
  {
    gameObject = *v41;
    if ( !*v41 )
      goto LABEL_38;
    v101 = WarBoardPieceData__GetMovedAferDefend((WarBoardPieceData_o *)gameObject, v99) == 0;
  }
  *(_BYTE *)(v20 + 56) = v101;
  v102 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v99, v100);
  System_Func_bool____ctor(
    v102,
    (Il2CppObject *)v20,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v105 = sub_B0D974(WarBoardConditionalJumpTask_TypeInfo, v103, v104);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v105, v102, (WarBoardTaskBase_o *)v74, v96, 0LL);
  if ( !v105 )
LABEL_38:
    sub_B0D97C(gameObject);
  v108 = *(System_Delegate_o **)(v105 + 40);
  v109 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v109 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  static_fields = v109->static_fields;
  _9__65_3 = static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( (BYTE3(v109->vtable._0_Equals.methodPtr) & 4) != 0 && !v109->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v109);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v112 = (Il2CppObject *)static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v106, v107);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v112,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0LL);
    v113 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v113->__9__65_3 = _9__65_3;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v113->__9__65_3,
      (System_Int32_array **)_9__65_3,
      v114,
      v115,
      v116,
      v117,
      v118,
      v119);
  }
  v120 = (System_Int32_array **)System_Delegate__Combine(v108, (System_Delegate_o *)_9__65_3, 0LL);
  if ( !v120 || *v120 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v105 + 40) = v120;
    sub_B0D840((BattleServantConfConponent_o *)(v105 + 40), v120, v121, v122, v123, v124, v125, v126);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v105,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    gameObject = *v32;
    if ( *v32 )
    {
      WarBoardManager__AddTask_17750248(
        (WarBoardManager_o *)gameObject,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v30,
        0LL);
      return;
    }
    goto LABEL_38;
  }
  v127 = (WarBoardPieceData_o *)sub_B0DC70(v120);
  WarBoardPieceData__IsEnabledMoveAfterAttack(v127, v128);
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  WarBoardData_o **v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  System_Int32_array **Instance; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x8
  System_Int32_array **Wall; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  WarBoardTaskBase_TaskCallback_o *v50; // x24
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  float y; // v0.s[1]
  float x; // s8
  __int64 v60; // x1
  __int64 v61; // x2
  float32x2_t v62; // d0
  unsigned __int32 v63; // s1
  float v64; // s2
  float v65; // s3
  float v66; // s1
  __int64 v67; // x22
  __int64 v68; // x1
  __int64 v69; // x2
  WarBoardTaskBase_TaskCallback_o *v70; // x23
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct WarBoardPieceData_o *v77; // x8
  UnityEngine_GameObject_o *v78; // x24
  float v79; // s8
  float v80; // s9
  float v81; // s10
  float pixelPerSecond; // s13
  float v83; // s11
  float v84; // s12
  float z; // s14
  __int64 v86; // x1
  __int64 v87; // x2
  WarBoardMovePerformance_o *v88; // x0
  WarBoardTaskBase_o *v89; // x23
  const MethodInfo *v90; // x3
  const MethodInfo *v91; // x1
  __int64 v92; // x1
  __int64 v93; // x2
  System_Func_bool__o *v94; // x19
  __int64 v95; // x1
  __int64 v96; // x2
  WarBoardConditionalJumpTask_o *v97; // x24
  MethodInfo v98; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4213350 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__, v11);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__, v12);
    sub_B0D8A4(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
      v13);
    sub_B0D8A4(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, v14);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v15);
    sub_B0D8A4(&WarBoardConditionalJumpTask_TypeInfo, v16);
    sub_B0D8A4(&WarBoardMovePerformance_TypeInfo, v17);
    byte_4213350 = 1;
  }
  LODWORD(v98.invoker_method) = 0;
  v98.methodPointer = 0LL;
  v18 = sub_B0D974(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, *(_QWORD *)&squareIndex, method);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_19;
  *(_QWORD *)(v18 + 24) = this;
  v26 = (WarBoardData_o **)(v18 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v18 + 44) = squareIndex;
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v18 + 16) = Instance;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 16), Instance, v31, v32, v33, v34, v35, v36);
  v37 = *(_QWORD *)(v18 + 16);
  if ( !v37 )
    goto LABEL_19;
  gameObject = *(WarBoardData_o **)(v37 + 432);
  if ( !gameObject )
    goto LABEL_19;
  Wall = (System_Int32_array **)WarBoardData__GetWall(gameObject, *(_DWORD *)(v18 + 44), 1, 0LL);
  *(_QWORD *)(v18 + 48) = Wall;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 48), Wall, v39, v40, v41, v42, v43, v44);
  v47 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v45, v46);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v47, 0LL, 0LL);
  v50 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v48, v49);
  WarBoardTaskBase_TaskCallback___ctor(
    v50,
    (Il2CppObject *)v18,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v47 )
    goto LABEL_19;
  *(_QWORD *)(v47 + 32) = v50;
  sub_B0D840((BattleServantConfConponent_o *)(v47 + 32), (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
  if ( !v29 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v29,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_19;
  gameObject = *v26;
  if ( !*v26 )
    goto LABEL_19;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v18 + 16);
  *(UnityEngine_Vector3_o *)(v18 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_19;
  v100 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v18 + 44), 0LL);
  y = v100.fields.y;
  *(float32x2_t *)&v100.fields.x = vsub_f32(*(float32x2_t *)&v100.fields.x, *(float32x2_t *)(v18 + 32));
  v100.fields.y = v100.fields.z - *(float *)(v18 + 40);
  v98.methodPointer = *(Il2CppMethodPointer *)&v100.fields.x;
  *(float *)&v98.invoker_method = v100.fields.y;
  v101.fields.x = UnityEngine_Vector3__get_magnitude(v100, &v98);
  x = v101.fields.x;
  *(UnityEngine_Vector3_o *)v62.n64_u64 = UnityEngine_Vector3__get_normalized(v101, &v98);
  v65 = x - this->fields.lengthOnAttack;
  if ( v65 > 0.0 )
  {
    v62.n64_u32[1] = v63;
    v66 = (float)(v64 * v65) + *(float *)(v18 + 40);
    *(float32x2_t *)(v18 + 32) = vadd_f32(vmul_n_f32(v62, v65), *(float32x2_t *)(v18 + 32));
    *(float *)(v18 + 40) = v66;
  }
  v67 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v60, v61);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v67, 0LL, 0LL);
  v70 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v68, v69);
  WarBoardTaskBase_TaskCallback___ctor(
    v70,
    (Il2CppObject *)v18,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0LL);
  if ( !v67 )
    goto LABEL_19;
  *(_QWORD *)(v67 + 32) = v70;
  sub_B0D840((BattleServantConfConponent_o *)(v67 + 32), (System_Int32_array **)v70, v71, v72, v73, v74, v75, v76);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v77 = this->fields.pieceData;
  if ( !v77 )
    goto LABEL_19;
  v78 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v18 + 16);
  if ( !gameObject )
    goto LABEL_19;
  v79 = *(float *)(v18 + 32);
  v80 = *(float *)(v18 + 36);
  v81 = *(float *)(v18 + 40);
  v102 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v77->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v83 = v102.fields.x;
  v84 = v102.fields.y;
  z = v102.fields.z;
  v88 = (WarBoardMovePerformance_o *)sub_B0D974(WarBoardMovePerformance_TypeInfo, v86, v87);
  v103.fields.x = v79;
  v103.fields.y = v80;
  v103.fields.z = v81;
  v104.fields.x = v83;
  v104.fields.y = v84;
  v104.fields.z = z;
  v89 = (WarBoardTaskBase_o *)v88;
  WarBoardMovePerformance___ctor(v88, v78, v103, v104, pixelPerSecond, 0, v90);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject
    || (*(_BYTE *)(v18 + 56) = WarBoardPieceData__GetMoveAfterAttack((WarBoardPieceData_o *)gameObject, v91) == 0,
        v94 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v92, v93),
        System_Func_bool____ctor(
          v94,
          (Il2CppObject *)v18,
          Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
          (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__),
        v97 = (WarBoardConditionalJumpTask_o *)sub_B0D974(WarBoardConditionalJumpTask_TypeInfo, v95, v96),
        WarBoardConditionalJumpTask___ctor(v97, v94, (WarBoardTaskBase_o *)v67, v89, 0LL),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v97,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__),
        (gameObject = *(WarBoardData_o **)(v18 + 16)) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(gameObject);
  }
  WarBoardManager__AddTask_17750248(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v29,
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
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array ***v40; // x25
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v42; // x19
  float v43; // s0
  float v44; // s1
  float v45; // s2
  float v46; // s13
  float v47; // s8
  float v48; // s14
  float v49; // s0
  float v50; // s1
  float v51; // s2
  float v52; // s9
  float v53; // s10
  float v54; // s11
  System_Int32_array **Square; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x20
  const MethodInfo *v65; // x2
  System_Int32_array *ParticipantVals; // x24
  WarBoardPieceData_o *v67; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WarBoardManager_o **v69; // x19
  System_Collections_Generic_IEnumerable_T__o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x25
  __int64 v74; // x1
  __int64 v75; // x2
  System_Delegate_o *v76; // x27
  WarBoardTaskBase_TaskCallback_o *v77; // x28
  System_Int32_array **v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x8
  float x; // s12
  __int64 v87; // x1
  __int64 v88; // x2
  float v89; // s0
  float v90; // s1
  float v91; // s2
  WarBoardPieceData_o *v92; // x22
  __int64 v93; // x8
  float v94; // s15
  System_Int32_array ***v95; // x28
  float v96; // s4
  float v97; // s12
  float v98; // s9
  float v99; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v101; // s11
  UnityEngine_GameObject_o *v102; // x25
  __int64 v103; // x1
  __int64 v104; // x2
  WarBoardMovePerformance_o *v105; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v106; // x26
  const MethodInfo *v107; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v108; // x25
  System_Collections_Generic_IEnumerable_T__o *v109; // x0
  System_Collections_Generic_IEnumerable_T__o *v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  float v113; // s0
  float v114; // s9
  float v115; // s10
  float v116; // s11
  UnityEngine_GameObject_o *v117; // x0
  float v118; // s12
  UnityEngine_GameObject_o *v119; // x21
  __int64 v120; // x1
  __int64 v121; // x2
  WarBoardMovePerformance_o *v122; // x0
  System_Int32_array **v123; // x24
  const MethodInfo *v124; // x3
  const MethodInfo *v125; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *v126; // x21
  System_Int32_array **v127; // x23
  int32_t id; // w26
  __int64 v129; // x1
  __int64 v130; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v131; // x0
  const MethodInfo *v132; // x5
  _BOOL4 v133; // w8
  int32_t v134; // w2
  bool v135; // w4
  WarBoardMessageMaster_o *v136; // x0
  int32_t v137; // w1
  __int64 v138; // x24
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  Il2CppObject **v145; // x22
  float v146; // s0
  float v147; // s1
  float v148; // s2
  float v149; // s0
  float v150; // s5
  float v151; // s11
  float v152; // s12
  float v153; // s13
  float v154; // s8
  float y; // s9
  float z; // s10
  float magnitude; // s0
  float v158; // s1
  float v159; // s8
  float v160; // s1
  __int64 v161; // x8
  __int64 v162; // x8
  float ZoomSize; // s0
  __int64 v164; // x8
  __int64 v165; // x8
  __int64 v166; // x8
  const MethodInfo_299B944 *v167; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v169; // x8
  WarBoardManager_o *v170; // x23
  float v171; // s0
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  __int64 v173; // x1
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Int32_array **v180; // x21
  WarBoardPieceBaseComponent___c_c *v181; // x8
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v184; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v185; // x0
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_Delegate_o *v192; // x25
  __int64 v193; // x1
  __int64 v194; // x2
  WarBoardTaskBase_TaskCallback_o *v195; // x26
  System_Int32_array **v196; // x0
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  __int64 v203; // x1
  __int64 v204; // x2
  int *v205; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v206; // x21
  BattleServantConfConponent_o *p_addCount; // x21
  System_Delegate_o *v208; // t1
  Il2CppObject *v209; // x22
  WarBoardTaskBase_TaskCallback_o *v210; // x24
  System_Int32_array **v211; // x0
  System_String_array **v212; // x2
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  __int64 v218; // x1
  __int64 v219; // x2
  System_Collections_Generic_IEnumerable_T__o *v220; // x23
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  System_Int32_array **v227; // x23
  WarBoardManager_o *v228; // x24
  int v229; // s0
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_Int32_array **v238; // x24
  System_String_array **v239; // x2
  System_String_array **v240; // x3
  System_Boolean_array **v241; // x4
  System_Int32_array **v242; // x5
  System_Int32_array *v243; // x6
  System_Int32_array *v244; // x7
  System_Int32_array **v245; // x24
  const MethodInfo *v246; // x2
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  System_Int32_array **v253; // x22
  __int64 v254; // x1
  __int64 v255; // x2
  WarBoardOrthostichySchedule_o *v256; // x22
  const MethodInfo *v257; // x2
  System_String_array **v258; // x2
  System_String_array **v259; // x3
  System_Boolean_array **v260; // x4
  System_Int32_array **v261; // x5
  System_Int32_array *v262; // x6
  System_Int32_array *v263; // x7
  __int64 v264; // x1
  __int64 v265; // x2
  __int64 v266; // x21
  System_String_array **v267; // x2
  System_String_array **v268; // x3
  System_Boolean_array **v269; // x4
  System_Int32_array **v270; // x5
  System_Int32_array *v271; // x6
  System_Int32_array *v272; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v273; // x21
  BattleServantConfConponent_o *v274; // x21
  System_Delegate_o *v275; // x22
  System_Delegate_o *v276; // t1
  WarBoardPieceBaseComponent___c_c *v277; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *v278; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v280; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v281; // x0
  System_String_array **v282; // x2
  System_String_array **v283; // x3
  System_Boolean_array **v284; // x4
  System_Int32_array **v285; // x5
  System_Int32_array *v286; // x6
  System_Int32_array *v287; // x7
  System_Int32_array **v288; // x0
  System_String_array **v289; // x2
  System_String_array **v290; // x3
  System_Boolean_array **v291; // x4
  System_Int32_array **v292; // x5
  System_Int32_array *v293; // x6
  System_Int32_array *v294; // x7
  __int64 v295; // x0
  __int64 v296; // x0
  WarBoardPieceData_o *v297; // x0
  const MethodInfo *v298; // x1
  float v299; // [xsp+4h] [xbp-ECh]
  float v300; // [xsp+8h] [xbp-E8h]
  float v301; // [xsp+Ch] [xbp-E4h]
  float v302; // [xsp+10h] [xbp-E0h]
  float v303; // [xsp+14h] [xbp-DCh]
  UnityEngine_Component_o *v304; // [xsp+18h] [xbp-D8h]
  System_Nullable_float__o size; // [xsp+20h] [xbp-D0h] BYREF
  System_Nullable_Vector3__o v306; // [xsp+28h] [xbp-C8h] BYREF
  MethodInfo methoda; // [xsp+38h] [xbp-B8h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v309; // 0:x3.8
  System_Nullable_Vector3__o v310; // 0:x0.16
  UnityEngine_Vector3_o v311; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v312; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v313; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v314; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v315; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v317; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v318; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v319; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v320; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_421334C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v14);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v17);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, v18);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, v19);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__, v20);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__, v21);
    sub_B0D8A4(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, v22);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__, v23);
    sub_B0D8A4(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v24);
    sub_B0D8A4(&WarBoardPieceBaseComponent___c_TypeInfo, v25);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v26);
    sub_B0D8A4(&WarBoardMovePerformance_TypeInfo, v27);
    sub_B0D8A4(&WarBoardOrthostichySchedule_TypeInfo, v28);
    sub_B0D8A4(&WarBoardParallelSchedule_TypeInfo, v29);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v30);
    sub_B0D8A4(&StringLiteral_8987/*"MasterDamage"*/, v31);
    byte_421334C = 1;
  }
  LODWORD(methoda.klass) = 0;
  methoda.name = 0LL;
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v32 = sub_B0D974(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, *(_QWORD *)&squareIndex, method);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v32,
    0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v32 )
    goto LABEL_109;
  *(_QWORD *)(v32 + 24) = Instance;
  v40 = (System_Int32_array ***)(v32 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v32 + 24), Instance, v34, v35, v36, v37, v38, v39);
  if ( !*(_QWORD *)(v32 + 24) )
    goto LABEL_109;
  Instance = *(System_Int32_array ***)(*(_QWORD *)(v32 + 24) + 432LL);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardData__GetPiece_22073600((WarBoardData_o *)Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_109;
  v42 = (WarBoardPieceData_o *)Instance;
  Instance = *v40;
  if ( !*v40 )
    goto LABEL_109;
  *(UnityEngine_Vector3_o *)&v43 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v40;
  if ( !*v40 )
    goto LABEL_109;
  v46 = v43;
  v47 = v44;
  v48 = v45;
  *(UnityEngine_Vector3_o *)&v49 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0LL);
  if ( !*v40 )
    goto LABEL_109;
  Instance = (System_Int32_array **)(*v40)[54];
  if ( !Instance )
    goto LABEL_109;
  v52 = v49;
  v53 = v50;
  v54 = v51;
  Square = (System_Int32_array **)WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v32 + 16) = Square;
  sub_B0D840((BattleServantConfConponent_o *)(v32 + 16), Square, v56, v57, v58, v59, v60, v61);
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v62,
                                                                                                  v63);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v42, v65);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      42,
                                      ParticipantVals,
                                      0LL);
  if ( !v64 )
    goto LABEL_109;
  v304 = (UnityEngine_Component_o *)this;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v67 = v42;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                43,
                                                                ParticipantVals,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64,
    EventTasks,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v69 = (WarBoardManager_o **)(v32 + 24);
  v70 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)Instance,
                                                         41,
                                                         ParticipantVals,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64,
    v70,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v73 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v71, v72);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v73, 0LL, 0LL);
  if ( !v73 )
    goto LABEL_109;
  v76 = *(System_Delegate_o **)(v73 + 32);
  v77 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v74, v75);
  WarBoardTaskBase_TaskCallback___ctor(
    v77,
    (Il2CppObject *)v32,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0LL);
  v78 = (System_Int32_array **)System_Delegate__Combine(v76, (System_Delegate_o *)v77, 0LL);
  v85 = v78;
  if ( v78 && *v78 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    goto LABEL_112;
  *(_QWORD *)(v73 + 32) = v78;
  sub_B0D840((BattleServantConfConponent_o *)(v73 + 32), v78, v79, v80, v81, v82, v83, v84);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v64,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v311.fields.x = v52 - v46;
  v311.fields.y = v53 - v47;
  v311.fields.z = v54 - v48;
  *(float *)&methoda.name = v52 - v46;
  *((float *)&methoda.name + 1) = v53 - v47;
  *(float *)&methoda.klass = v54 - v48;
  v312.fields.x = UnityEngine_Vector3__get_magnitude(v311, (const MethodInfo *)&methoda.name);
  x = v312.fields.x;
  *(UnityEngine_Vector3_o *)&v89 = UnityEngine_Vector3__get_normalized(v312, (const MethodInfo *)&methoda.name);
  if ( !v67 )
    goto LABEL_109;
  v92 = v67;
  v93 = 136LL;
  if ( v67->fields._type_k__BackingField )
    v93 = 132LL;
  v94 = v91;
  v95 = (System_Int32_array ***)(v32 + 24);
  v302 = v89;
  v303 = v90;
  v96 = x - *(float *)((char *)&v304->klass + v93);
  if ( v96 > 0.0 )
  {
    v97 = v46 + (float)(v89 * v96);
    v299 = v52;
    v300 = v54;
    v98 = v47 + (float)(v90 * v96);
    v301 = v53;
    v99 = v48 + (float)(v91 * v96);
    gameObject = UnityEngine_Component__get_gameObject(v304, 0LL);
    v101 = *(float *)&v304[5].monitor;
    v102 = gameObject;
    v105 = (WarBoardMovePerformance_o *)sub_B0D974(WarBoardMovePerformance_TypeInfo, v103, v104);
    v313.fields.x = v46;
    v313.fields.y = v47;
    v313.fields.z = v48;
    v319.fields.x = v97;
    v319.fields.y = v98;
    v319.fields.z = v99;
    v106 = (EventMissionProgressRequest_Argument_ProgressData_o *)v105;
    WarBoardMovePerformance___ctor(v105, v102, v313, v319, v101, 5, v107);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v64,
      v106,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v47 = v98;
    v52 = v299;
    v54 = v300;
    v48 = v99;
    v53 = v301;
    v46 = v97;
  }
  v108 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                   v87,
                                                                                                   v88);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v108,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      1,
                                      ParticipantVals,
                                      0LL);
  if ( !v108 )
    goto LABEL_109;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v108,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v109 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                          (WarBoardManager_o *)Instance,
                                                          19,
                                                          ParticipantVals,
                                                          0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v108,
    v109,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v110 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                          (WarBoardManager_o *)Instance,
                                                          39,
                                                          ParticipantVals,
                                                          0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v108,
    v110,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v67->fields._type_k__BackingField != 1 )
  {
    v138 = sub_B0D974(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v111, v112);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v138,
      0LL);
    if ( !v138 )
      goto LABEL_109;
    *(_QWORD *)(v138 + 32) = v32;
    v145 = (Il2CppObject **)(v138 + 32);
    sub_B0D840(
      (BattleServantConfConponent_o *)(v138 + 32),
      (System_Int32_array **)v32,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64,
      (System_Collections_Generic_IEnumerable_T__o *)v108,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v146 = *(float *)&v304[5].fields.m_CachedPtr;
    v147 = v302 * v146;
    v148 = v303 * v146;
    v149 = v94 * v146;
    v150 = v54 - v149;
    v151 = v46 + v147;
    v152 = v47 + v148;
    v153 = v48 + v149;
    v315.fields.x = (float)(v52 - v147) - v151;
    v315.fields.y = (float)(v53 - v148) - (float)(v47 + v148);
    v315.fields.z = v150 - v153;
    methoda.methodPointer = *(Il2CppMethodPointer *)&v315.fields.x;
    *(float *)&methoda.invoker_method = v150 - v153;
    normalized = UnityEngine_Vector3__get_normalized(v315, &methoda);
    v154 = normalized.fields.x;
    y = normalized.fields.y;
    z = normalized.fields.z;
    magnitude = UnityEngine_Vector3__get_magnitude(normalized, &methoda);
    v158 = v151 + (float)((float)(v154 * magnitude) * 0.5);
    v159 = v152 + (float)((float)(y * magnitude) * 0.5);
    *(float *)&methoda.methodPointer = v158;
    *((float *)&methoda.methodPointer + 1) = v159;
    *(float *)&methoda.invoker_method = v153 + (float)((float)(z * magnitude) * 0.5);
    Instance = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))v304->klass[2]._1.events)(
                                        v304,
                                        v304->klass[2]._1.properties);
    *((float *)&methoda.methodPointer + 1) = v159 + v160;
    if ( !*(_QWORD *)(v138 + 32) )
      goto LABEL_109;
    v161 = *(_QWORD *)(*(_QWORD *)(v138 + 32) + 24LL);
    if ( !v161 )
      goto LABEL_109;
    v162 = *(_QWORD *)(v161 + 40);
    if ( !v162 )
      goto LABEL_109;
    Instance = *(System_Int32_array ***)(v162 + 72);
    if ( !Instance )
      goto LABEL_109;
    ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
    v164 = *(_QWORD *)(v138 + 32);
    *(float *)(v138 + 16) = ZoomSize;
    if ( !v164 )
      goto LABEL_109;
    v165 = *(_QWORD *)(v164 + 24);
    if ( !v165 )
      goto LABEL_109;
    v166 = *(_QWORD *)(v165 + 40);
    if ( !v166 )
      goto LABEL_109;
    Instance = *(System_Int32_array ***)(v166 + 64);
    if ( !Instance )
      goto LABEL_109;
    ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0LL);
    v169 = *(_QWORD *)(v138 + 32);
    *(UnityEngine_Vector2_o *)(v138 + 20) = ScrlPos;
    if ( !v169 )
      goto LABEL_109;
    v170 = *(WarBoardManager_o **)(v169 + 24);
    *(_QWORD *)&v317.fields.x = methoda.methodPointer;
    v317.fields.z = *(float *)&methoda.invoker_method;
    *(_QWORD *)&v310.fields.value.fields.x = &v306;
    *(_QWORD *)&v306.fields.value.fields.x = 0LL;
    *(_QWORD *)&v306.fields.value.fields.z = 0LL;
    *(_QWORD *)&v310.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v310, v317, v167);
    v171 = *((float *)&v304[5].fields + 1);
    p_size = (System_Nullable_float__o)&size;
    size = 0LL;
    System_Nullable_float____ctor(p_size, v171, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
    if ( !v170 )
      goto LABEL_109;
    v309 = size;
    CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                     v170,
                                                                                     v306,
                                                                                     v309,
                                                                                     1,
                                                                                     0,
                                                                                     1,
                                                                                     0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v64,
      CameraPerformanceTask,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    if ( !*v145 )
      goto LABEL_109;
    Instance = (System_Int32_array **)(*v145)[1].monitor;
    if ( !Instance )
      goto LABEL_109;
    v318.fields.y = *((float *)&methoda.methodPointer + 1);
    v318.fields.z = *(float *)&methoda.invoker_method;
    v318.fields.x = *(float *)&methoda.methodPointer;
    Instance = (System_Int32_array **)WarBoardManager__CreateEncountkEffectTask(
                                        (WarBoardManager_o *)Instance,
                                        v318,
                                        1,
                                        0LL);
    v180 = Instance;
    v181 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v181 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v181->static_fields;
    _9__63_1 = static_fields->__9__63_1;
    if ( !_9__63_1 )
    {
      if ( (BYTE3(v181->vtable._0_Equals.methodPtr) & 4) != 0 && !v181->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v181);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v184 = (Il2CppObject *)static_fields->__9;
      _9__63_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v173, v174);
      System_Action___ctor(_9__63_1, v184, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, 0LL);
      v185 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v185->__9__63_1 = _9__63_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v185->__9__63_1,
        (System_Int32_array **)_9__63_1,
        v186,
        v187,
        v188,
        v189,
        v190,
        v191);
    }
    if ( !v180 )
      goto LABEL_109;
    v180[10] = (System_Int32_array *)_9__63_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v180 + 10),
      (System_Int32_array **)_9__63_1,
      v174,
      v175,
      v176,
      v177,
      v178,
      v179);
    v192 = (System_Delegate_o *)v180[5];
    v195 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v193, v194);
    WarBoardTaskBase_TaskCallback___ctor(
      v195,
      (Il2CppObject *)v138,
      Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
      0LL);
    v196 = (System_Int32_array **)System_Delegate__Combine(v192, (System_Delegate_o *)v195, 0LL);
    v85 = v196;
    if ( !v196 || *v196 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v180[5] = (System_Int32_array *)v196;
      sub_B0D840((BattleServantConfConponent_o *)(v180 + 5), v196, v197, v198, v199, v200, v201, v202);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v64,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v180,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      v205 = &v64->fields._size;
      if ( !v64->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v206 = v64->fields._items->m_Items[0];
      if ( !v206 )
        goto LABEL_109;
      v208 = *(System_Delegate_o **)&v206->fields.addCount;
      p_addCount = (BattleServantConfConponent_o *)&v206->fields.addCount;
      v209 = *v145;
      v210 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v203, v204);
      WarBoardTaskBase_TaskCallback___ctor(
        v210,
        v209,
        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
        0LL);
      v211 = (System_Int32_array **)System_Delegate__Combine(v208, (System_Delegate_o *)v210, 0LL);
      v85 = v211;
      if ( !v211 || *v211 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        p_addCount->klass = (BattleServantConfConponent_c *)v211;
        sub_B0D840(p_addCount, v211, v212, v213, v214, v215, v216, v217);
        goto LABEL_93;
      }
    }
LABEL_112:
    v297 = (WarBoardPieceData_o *)sub_B0DC70(v85);
    WarBoardPieceData__get_isServant(v297, v298);
    return;
  }
  v113 = *(float *)&v304[6].klass;
  v114 = v46 + (float)(v302 * v113);
  v115 = v47 + (float)(v303 * v113);
  v116 = v48 + (float)(v94 * v113);
  v117 = UnityEngine_Component__get_gameObject(v304, 0LL);
  v118 = *(float *)&v304[5].monitor;
  v119 = v117;
  v122 = (WarBoardMovePerformance_o *)sub_B0D974(WarBoardMovePerformance_TypeInfo, v120, v121);
  v314.fields.x = v114;
  v314.fields.y = v115;
  v314.fields.z = v116;
  v320.fields.x = v46;
  v320.fields.y = v47;
  v320.fields.z = v48;
  v123 = (System_Int32_array **)v122;
  WarBoardMovePerformance___ctor(v122, v119, v314, v320, v118, 4, v124);
  v126 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                  v92,
                                                                  v125);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  if ( !*v69 )
    goto LABEL_109;
  v127 = Instance;
  Instance = (System_Int32_array **)(*v69)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_109;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0LL);
  v131 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                   v129,
                                                                                                   v130);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v131,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( v92->fields._forceId_k__BackingField || v92->fields._groupId_k__BackingField )
  {
    v133 = 0;
    if ( !v127 )
      goto LABEL_109;
  }
  else
  {
    v133 = v92->fields._type_k__BackingField == 1;
    if ( !v127 )
      goto LABEL_109;
  }
  if ( v133 )
  {
    v134 = 11;
    v135 = 1;
    v136 = (WarBoardMessageMaster_o *)v127;
    v137 = id;
  }
  else
  {
    v134 = 9;
    v136 = (WarBoardMessageMaster_o *)v127;
    v137 = id;
    v135 = 0;
  }
  Instance = (System_Int32_array **)WarBoardMessageMaster__GetMessageTasks(
                                      v136,
                                      v137,
                                      v134,
                                      v92->fields._breakPoint_k__BackingField,
                                      v135,
                                      v132);
  if ( !Instance )
    goto LABEL_109;
  v220 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v108,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v220,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v64,
      v220,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (System_Int32_array **)sub_B0D8BC(WarBoardTaskBase___TypeInfo, 5LL);
  if ( !Instance )
LABEL_109:
    sub_B0D97C(Instance);
  v227 = Instance;
  if ( v123 )
  {
    Instance = (System_Int32_array **)sub_B0D964(v123, *(_QWORD *)&(*Instance)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( !*((_DWORD *)v227 + 6) )
    goto LABEL_110;
  v227[4] = (System_Int32_array *)v123;
  sub_B0D840((BattleServantConfConponent_o *)(v227 + 4), v123, v221, v222, v223, v224, v225, v226);
  Instance = (System_Int32_array **)v92->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_109;
  v228 = *v69;
  Instance = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*Instance)->m_Items[207])(
                                      Instance,
                                      *(_QWORD *)&(*Instance)->m_Items[209]);
  if ( !v228 )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__CreateAttackEffectTask(
                                      v228,
                                      *(UnityEngine_Vector3_o *)&v229,
                                      0,
                                      0LL);
  v238 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B0D964(Instance, *(_QWORD *)&(*v227)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v227 + 6) <= 1u )
    goto LABEL_110;
  v227[5] = (System_Int32_array *)v238;
  sub_B0D840((BattleServantConfConponent_o *)(v227 + 5), v238, v232, v233, v234, v235, v236, v237);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v245 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B0D964(Instance, *(_QWORD *)&(*v227)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v227 + 6) <= 2u )
    goto LABEL_110;
  v227[6] = (System_Int32_array *)v245;
  sub_B0D840((BattleServantConfConponent_o *)(v227 + 6), v245, v239, v240, v241, v242, v243, v244);
  Instance = (System_Int32_array **)v92->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                      (WarBoardPieceBaseComponent_o *)Instance,
                                      (System_String_o *)StringLiteral_8987/*"MasterDamage"*/,
                                      v246);
  v253 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B0D964(Instance, *(_QWORD *)&(*v227)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v227 + 6) <= 3u )
    goto LABEL_110;
  v227[7] = (System_Int32_array *)v253;
  sub_B0D840((BattleServantConfConponent_o *)(v227 + 7), v253, v247, v248, v249, v250, v251, v252);
  v256 = (WarBoardOrthostichySchedule_o *)sub_B0D974(WarBoardOrthostichySchedule_TypeInfo, v254, v255);
  WarBoardOrthostichySchedule___ctor_21959728(v256, v126, v257);
  if ( v256 )
  {
    Instance = (System_Int32_array **)sub_B0D964(v256, *(_QWORD *)&(*v227)->m_Items[9]);
    if ( !Instance )
    {
LABEL_111:
      v296 = sub_B0D99C();
      sub_B0D948(v296, 0LL);
    }
  }
  if ( *((_DWORD *)v227 + 6) <= 4u )
  {
LABEL_110:
    v295 = sub_B0D9A8(Instance);
    sub_B0D948(v295, 0LL);
  }
  v227[8] = (System_Int32_array *)v256;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v227 + 8),
    (System_Int32_array **)v256,
    v258,
    v259,
    v260,
    v261,
    v262,
    v263);
  v266 = sub_B0D974(WarBoardParallelSchedule_TypeInfo, v264, v265);
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v266, 0LL);
  *(_QWORD *)(v266 + 56) = v227;
  sub_B0D840((BattleServantConfConponent_o *)(v266 + 56), v227, v267, v268, v269, v270, v271, v272);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v64,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v266,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v205 = &v64->fields._size;
LABEL_93:
  if ( *v205 < 1 )
    return;
  v273 = v64->fields._items->m_Items[0];
  if ( !v273 )
    goto LABEL_109;
  v276 = *(System_Delegate_o **)&v273->fields.addCount;
  v274 = (BattleServantConfConponent_o *)&v273->fields.addCount;
  v275 = v276;
  v277 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v277 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  v278 = v277->static_fields;
  _9__63_4 = v278->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( (BYTE3(v277->vtable._0_Equals.methodPtr) & 4) != 0 && !v277->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v277);
      v278 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v280 = (Il2CppObject *)v278->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v218, v219);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v280, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0LL);
    v281 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v281->__9__63_4 = _9__63_4;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v281->__9__63_4,
      (System_Int32_array **)_9__63_4,
      v282,
      v283,
      v284,
      v285,
      v286,
      v287);
  }
  v288 = (System_Int32_array **)System_Delegate__Combine(v275, (System_Delegate_o *)_9__63_4, 0LL);
  v85 = v288;
  if ( v288 && *v288 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    goto LABEL_112;
  v274->klass = (BattleServantConfConponent_c *)v288;
  sub_B0D840(v274, v288, v289, v290, v291, v292, v293, v294);
  Instance = *v95;
  if ( !*v95 )
    goto LABEL_109;
  WarBoardManager__AddTask_17750248(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v64,
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

  if ( (byte_421334D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&WarBoardControlUiDataComponent_TypeInfo, v5);
    byte_421334D = 1;
  }
  LODWORD(v22.invoker_method) = 0;
  v22.methodPointer = 0LL;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_15;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_22073600(Instance, squareIndex, 0LL);
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
    sub_B0D97C(Instance);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *monitor; // x8
  WarBoardUserServantData_o *v19; // x0
  WebViewManager_o *Instance; // x25
  const MethodInfo_299B944 *v21; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardTaskBase_array *v23; // x26
  WebViewManager_o *v24; // x27
  const MethodInfo_299B944 *v25; // x2
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
  if ( (byte_4213354 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&oldBreakPoint);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    this = (WarBoardPieceBaseComponent_o *)sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v17);
    byte_4213354 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
            goto LABEL_19;
          }
        }
LABEL_30:
        sub_B0D97C(this);
      }
      v23 = (WarBoardTaskBase_array *)sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
      v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        this = (WarBoardPieceBaseComponent_o *)sub_B0D964(this, v23->obj.klass->_1.element_class);
        if ( !this )
        {
          v37 = sub_B0D99C();
          sub_B0D948(v37, 0LL);
        }
      }
      if ( !v23->max_length )
      {
LABEL_32:
        v36 = sub_B0D9A8(this);
        sub_B0D948(v36, 0LL);
      }
      v23->m_Items[0] = (WarBoardTaskBase_o *)v32;
      sub_B0D840((BattleServantConfConponent_o *)v23->m_Items, v32, v26, v27, v28, v29, v30, v31);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  if ( (byte_4213349 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4213349 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B0D97C(Instance);
  v5 = 20 * (dispPriotiry - WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL));
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, v5, v6);
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  WarBoardPieceData_o **v29; // x20
  System_Int32_array **Piece_22073600; // x0
  WarBoardPieceData_o **v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x8
  System_Int32_array **Square; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x25
  __int64 v49; // x1
  __int64 v50; // x2
  System_Delegate_o *v51; // x26
  WarBoardTaskBase_TaskCallback_o *v52; // x27
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x8
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x28
  struct WarBoardPieceData_o *v72; // x8
  UnityEngine_GameObject_o *v73; // x26
  float v74; // s0
  float v75; // s1
  float v76; // s2
  float v77; // s8
  float v78; // s9
  float v79; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float z; // s14
  __int64 v84; // x1
  __int64 v85; // x2
  WarBoardMovePerformance_o *v86; // x0
  WarBoardMovePerformance_o *v87; // x27
  const MethodInfo *v88; // x3
  __int64 v89; // x1
  __int64 v90; // x2
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x26
  UnityEngine_GameObject_o *v98; // x27
  float v99; // s0
  float v100; // s1
  float v101; // s2
  struct WarBoardPieceData_o *v102; // x8
  float v103; // s8
  float v104; // s9
  float v105; // s10
  float v106; // s13
  float v107; // s11
  float v108; // s12
  float v109; // s14
  __int64 v110; // x1
  __int64 v111; // x2
  WarBoardMovePerformance_o *v112; // x0
  System_Int32_array **v113; // x28
  const MethodInfo *v114; // x3
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  int32_t v127; // w28
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x25
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  __int64 v137; // x1
  __int64 v138; // x2
  System_Delegate_o *v139; // x24
  WarBoardTaskBase_TaskCallback_o *v140; // x27
  System_Int32_array **v141; // x0
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Collections_Generic_List_WarBoardTaskBase__o *v148; // x26
  __int64 v149; // x1
  __int64 v150; // x2
  struct WarBoardPieceData_o *v151; // x8
  System_Delegate_o *EndCallback; // x28
  WarBoardTaskBase_TaskCallback_o *v153; // x24
  System_Int32_array **v154; // x0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  struct WarBoardPieceData_o *v161; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v162; // x22
  const MethodInfo *v163; // x1
  System_Int32_array **PieceEventVals; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  const MethodInfo *v171; // x1
  System_Int32_array *v172; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v174; // x0
  WarBoardManager_o *v175; // x20
  WarBoardTaskBase_array *v176; // x21
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x22
  __int64 v180; // x1
  __int64 v181; // x2
  WarBoardTaskBase_TaskCallback_o *v182; // x23
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  __int64 v195; // x0
  __int64 v196; // x0
  WarBoardPieceData_o *v197; // x0
  const MethodInfo *v198; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v199; // [xsp+18h] [xbp-88h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v201; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v202; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v203; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v204; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v205; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_421334A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&int___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__, v12);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__, v13);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__, v14);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__, v15);
    sub_B0D8A4(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, v16);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v17);
    sub_B0D8A4(&WarBoardMovePerformance_TypeInfo, v18);
    sub_B0D8A4(&WarBoardParallelSchedule_TypeInfo, v19);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v20);
    byte_421334A = 1;
  }
  v21 = sub_B0D974(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, *(_QWORD *)&squareIndex, method);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v21,
    0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v21 )
    goto LABEL_64;
  *(_QWORD *)(v21 + 48) = Instance;
  v29 = (WarBoardPieceData_o **)(v21 + 48);
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 48), (System_Int32_array **)Instance, v23, v24, v25, v26, v27, v28);
  if ( !*(_QWORD *)(v21 + 48) )
    goto LABEL_64;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v21 + 48) + 432LL);
  if ( !Instance )
    goto LABEL_64;
  Piece_22073600 = (System_Int32_array **)WarBoardData__GetPiece_22073600((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v21 + 40) = Piece_22073600;
  v31 = (WarBoardPieceData_o **)(v21 + 40);
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 40), Piece_22073600, v32, v33, v34, v35, v36, v37);
  v38 = *(_QWORD *)(v21 + 48);
  if ( !v38 )
    goto LABEL_64;
  Instance = *(WarBoardPieceData_o **)(v38 + 432);
  if ( !Instance )
    goto LABEL_64;
  Square = (System_Int32_array **)WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v21 + 16) = Square;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 16), Square, v40, v41, v42, v43, v44, v45);
  v48 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v46, v47);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v48, 0LL, 0LL);
  if ( !v48 )
    goto LABEL_64;
  v51 = *(System_Delegate_o **)(v48 + 32);
  v52 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v49, v50);
  WarBoardTaskBase_TaskCallback___ctor(
    v52,
    (Il2CppObject *)v21,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0LL);
  v53 = (System_Int32_array **)System_Delegate__Combine(v51, (System_Delegate_o *)v52, 0LL);
  v60 = v53;
  if ( !v53 || *v53 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v48 + 32) = v53;
    sub_B0D840((BattleServantConfConponent_o *)(v48 + 32), v53, v54, v55, v56, v57, v58, v59);
    Instance = (WarBoardPieceData_o *)sub_B0D8BC(int___TypeInfo, 2LL);
    pieceData = this->fields.pieceData;
    if ( !pieceData || !Instance )
      goto LABEL_64;
    groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
    if ( !groupId_k__BackingField )
      goto LABEL_65;
    Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField;
    if ( groupId_k__BackingField == 1 )
      goto LABEL_65;
    Instance->fields._currentActionCount_k__BackingField = squareIndex;
    *(_QWORD *)(v21 + 24) = Instance;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v21 + 24),
      (System_Int32_array **)Instance,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    v199 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                     v69,
                                                                                                     v70);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v199,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    v71 = *(_QWORD *)(v21 + 40);
    Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v72 = this->fields.pieceData;
    if ( !v72 )
      goto LABEL_64;
    v73 = (UnityEngine_GameObject_o *)Instance;
    Instance = *(WarBoardPieceData_o **)(v21 + 48);
    if ( !Instance )
      goto LABEL_64;
    *(UnityEngine_Vector3_o *)&v74 = WarBoardManager__GetSquarePosition(
                                       (WarBoardManager_o *)Instance,
                                       v72->fields._nowSquareIndex_k__BackingField,
                                       0LL);
    Instance = *v29;
    if ( !*v29 )
      goto LABEL_64;
    v77 = v74;
    v78 = v75;
    v79 = v76;
    SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    x = SquarePosition.fields.x;
    y = SquarePosition.fields.y;
    z = SquarePosition.fields.z;
    v86 = (WarBoardMovePerformance_o *)sub_B0D974(WarBoardMovePerformance_TypeInfo, v84, v85);
    v201.fields.x = v77;
    v201.fields.y = v78;
    v201.fields.z = v79;
    v204.fields.x = x;
    v204.fields.y = y;
    v204.fields.z = z;
    v87 = v86;
    WarBoardMovePerformance___ctor(v86, v73, v201, v204, pixelPerSecond, 0, v88);
    if ( v71 )
    {
      Instance = (WarBoardPieceData_o *)sub_B0D8BC(WarBoardTaskBase___TypeInfo, 3LL);
      if ( !Instance )
        goto LABEL_64;
      v97 = (System_Int32_array **)Instance;
      if ( v87 )
      {
        Instance = (WarBoardPieceData_o *)sub_B0D964(v87, Instance->klass->_1.element_class);
        if ( !Instance )
          goto LABEL_66;
      }
      if ( !*((_DWORD *)v97 + 6) )
        goto LABEL_65;
      v97[4] = (System_Int32_array *)v87;
      sub_B0D840((BattleServantConfConponent_o *)(v97 + 4), (System_Int32_array **)v87, v91, v92, v93, v94, v95, v96);
      if ( !*v31 )
        goto LABEL_64;
      Instance = (WarBoardPieceData_o *)(*v31)->fields.pieceComponent;
      if ( !Instance )
        goto LABEL_64;
      Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v29 )
        goto LABEL_64;
      v98 = (UnityEngine_GameObject_o *)Instance;
      *(UnityEngine_Vector3_o *)&v99 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v29, squareIndex, 0LL);
      v102 = this->fields.pieceData;
      if ( !v102 )
        goto LABEL_64;
      Instance = *v29;
      if ( !*v29 )
        goto LABEL_64;
      v103 = v99;
      v104 = v100;
      v105 = v101;
      v202 = WarBoardManager__GetSquarePosition(
               (WarBoardManager_o *)Instance,
               v102->fields._nowSquareIndex_k__BackingField,
               0LL);
      v106 = this->fields.pixelPerSecond;
      v107 = v202.fields.x;
      v108 = v202.fields.y;
      v109 = v202.fields.z;
      v112 = (WarBoardMovePerformance_o *)sub_B0D974(WarBoardMovePerformance_TypeInfo, v110, v111);
      v203.fields.x = v103;
      v203.fields.y = v104;
      v203.fields.z = v105;
      v205.fields.x = v107;
      v205.fields.y = v108;
      v205.fields.z = v109;
      v113 = (System_Int32_array **)v112;
      WarBoardMovePerformance___ctor(v112, v98, v203, v205, v106, 0, v114);
      if ( v113 )
      {
        Instance = (WarBoardPieceData_o *)sub_B0D964(v113, *(_QWORD *)&(*v97)->m_Items[9]);
        if ( !Instance )
          goto LABEL_66;
      }
      if ( *((_DWORD *)v97 + 6) <= 1u )
        goto LABEL_65;
      v97[5] = (System_Int32_array *)v113;
      sub_B0D840((BattleServantConfConponent_o *)(v97 + 5), v113, v115, v116, v117, v118, v119, v120);
      Instance = (WarBoardPieceData_o *)sub_B0D964(v48, *(_QWORD *)&(*v97)->m_Items[9]);
      if ( !Instance )
        goto LABEL_66;
      if ( *((_DWORD *)v97 + 6) <= 2u )
        goto LABEL_65;
      v97[6] = (System_Int32_array *)v48;
      v127 = squareIndex;
      sub_B0D840(
        (BattleServantConfConponent_o *)(v97 + 6),
        (System_Int32_array **)v48,
        v121,
        v122,
        v123,
        v124,
        v125,
        v126);
      v130 = sub_B0D974(WarBoardParallelSchedule_TypeInfo, v128, v129);
      WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v130, 0LL);
      *(_QWORD *)(v130 + 56) = v97;
      sub_B0D840((BattleServantConfConponent_o *)(v130 + 56), v97, v131, v132, v133, v134, v135, v136);
      if ( !v130 )
        goto LABEL_64;
      v139 = *(System_Delegate_o **)(v130 + 40);
      v140 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v137, v138);
      WarBoardTaskBase_TaskCallback___ctor(
        v140,
        (Il2CppObject *)v21,
        Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
        0LL);
      v141 = (System_Int32_array **)System_Delegate__Combine(v139, (System_Delegate_o *)v140, 0LL);
      v60 = v141;
      if ( !v141 || *v141 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        *(_QWORD *)(v130 + 40) = v141;
        sub_B0D840((BattleServantConfConponent_o *)(v130 + 40), v141, v142, v143, v144, v145, v146, v147);
        v148 = (System_Collections_Generic_List_WarBoardTaskBase__o *)v199;
        if ( !v199 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v199,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v130,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        v151 = this->fields.pieceData;
        if ( !v151 || !*v31 )
          goto LABEL_64;
        (*v31)->fields._nowSquareIndex_k__BackingField = v151->fields._nowSquareIndex_k__BackingField;
LABEL_45:
        v161 = this->fields.pieceData;
        if ( !v161 )
          goto LABEL_64;
        v161->fields._nowSquareIndex_k__BackingField = v127;
        v162 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v149, v150);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v162,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
        Instance = this->fields.pieceData;
        if ( !Instance )
          goto LABEL_64;
        PieceEventVals = (System_Int32_array **)WarBoardPieceData__CreatePieceEventVals(Instance, v163);
        *(_QWORD *)(v21 + 32) = PieceEventVals;
        sub_B0D840((BattleServantConfConponent_o *)(v21 + 32), PieceEventVals, v165, v166, v167, v168, v169, v170);
        Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Instance )
          goto LABEL_64;
        Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                            (WarBoardManager_o *)Instance,
                                            30,
                                            *(System_Int32_array **)(v21 + 32),
                                            0LL);
        if ( !v162 )
          goto LABEL_64;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v162,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        if ( *v31 )
        {
          v172 = WarBoardPieceData__CreatePieceEventVals(*v31, v171);
          Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !Instance )
            goto LABEL_64;
          EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                        (WarBoardManager_o *)Instance,
                                                                        30,
                                                                        v172,
                                                                        0LL);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v162,
            EventTasks,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        }
        Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Instance )
          goto LABEL_64;
        v174 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                36,
                                                                0LL,
                                                                0LL);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v162,
          v174,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v162,
               (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
        {
          Instance = *v29;
          if ( !*v29 )
            goto LABEL_64;
          WarBoardManager__AddTask_17750248(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v162,
            0LL);
        }
        Instance = *v29;
        if ( !*v29 )
          goto LABEL_64;
        WarBoardManager__AddTask_17750248((WarBoardManager_o *)Instance, 0, v148, 0LL);
        v175 = *(WarBoardManager_o **)(v21 + 48);
        v176 = (WarBoardTaskBase_array *)sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
        v179 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v177, v178);
        WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v179, 0LL, 0LL);
        v182 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v180, v181);
        WarBoardTaskBase_TaskCallback___ctor(
          v182,
          (Il2CppObject *)v21,
          Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
          0LL);
        if ( !v179
          || (*(_QWORD *)(v179 + 32) = v182,
              sub_B0D840(
                (BattleServantConfConponent_o *)(v179 + 32),
                (System_Int32_array **)v182,
                v183,
                v184,
                v185,
                v186,
                v187,
                v188),
              !v176) )
        {
LABEL_64:
          sub_B0D97C(Instance);
        }
        Instance = (WarBoardPieceData_o *)sub_B0D964(v179, v176->obj.klass->_1.element_class);
        if ( Instance )
        {
          if ( v176->max_length )
          {
            v176->m_Items[0] = (WarBoardTaskBase_o *)v179;
            sub_B0D840(
              (BattleServantConfConponent_o *)v176->m_Items,
              (System_Int32_array **)v179,
              v189,
              v190,
              v191,
              v192,
              v193,
              v194);
            if ( v175 )
            {
              WarBoardManager__AddTask(v175, 0, v176, 0LL);
              Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( Instance )
              {
                WarBoardManager__JudgmentGameSet((WarBoardManager_o *)Instance, 0LL);
                return;
              }
            }
            goto LABEL_64;
          }
LABEL_65:
          v195 = sub_B0D9A8(Instance);
          sub_B0D948(v195, 0LL);
        }
LABEL_66:
        v196 = sub_B0D99C();
        sub_B0D948(v196, 0LL);
      }
    }
    else
    {
      if ( !v87 )
        goto LABEL_64;
      EndCallback = (System_Delegate_o *)v87->fields.EndCallback;
      v153 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v89, v90);
      WarBoardTaskBase_TaskCallback___ctor(
        v153,
        (Il2CppObject *)v21,
        Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
        0LL);
      v154 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v153, 0LL);
      v60 = v154;
      if ( !v154 || *v154 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        v87->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v154;
        sub_B0D840((BattleServantConfConponent_o *)&v87->fields.EndCallback, v154, v155, v156, v157, v158, v159, v160);
        v148 = (System_Collections_Generic_List_WarBoardTaskBase__o *)v199;
        if ( !v199 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v199,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v87,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v199,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        v127 = squareIndex;
        goto LABEL_45;
      }
    }
  }
  v197 = (WarBoardPieceData_o *)sub_B0DC70(v60);
  WarBoardPieceData__get_gameObject(v197, v198);
}


void __fastcall WarBoardPieceBaseComponent__OnRevive(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  int32_t v4; // w1
  const MethodInfo *v5; // x2

  if ( (byte_4213348 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4213348 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B0D97C(Instance);
  v4 = 20 * (WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL) - this->fields.dispPriotiry);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, v4, v5);
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

  if ( (byte_4213356 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18237/*"ef_dm_base"*/, popText);
    byte_4213356 = 1;
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
  WarBoardManager_o *v20; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardWallData_o *v22; // x21
  float x; // s14
  float y; // s15
  float z; // s8
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s11
  float v30; // s12
  float v31; // s13
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x24
  __int64 v44; // x1
  __int64 v45; // x2
  System_Delegate_o *v46; // x26
  WarBoardTaskBase_TaskCallback_o *v47; // x27
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  float v55; // s13
  float v56; // s1
  float v57; // s2
  float v58; // s0
  float v59; // s11
  float v60; // s12
  float v61; // s0
  float v62; // s13
  float v63; // s9
  float v64; // s10
  UnityEngine_GameObject_o *gameObject; // x23
  __int64 v66; // x1
  __int64 v67; // x2
  WarBoardMovePerformance_o *v68; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v69; // x24
  const MethodInfo *v70; // x3
  float lengthMoveAttack; // s0
  float v72; // s10
  float v73; // s11
  float v74; // s12
  UnityEngine_GameObject_o *v75; // x0
  float v76; // s13
  UnityEngine_GameObject_o *v77; // x22
  __int64 v78; // x1
  __int64 v79; // x2
  WarBoardMovePerformance_o *v80; // x0
  System_Int32_array **v81; // x24
  const MethodInfo *v82; // x3
  System_Collections_Generic_List_WarBoardTaskBase__o *v83; // x22
  __int64 v84; // x1
  __int64 v85; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v86; // x23
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x23
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x21
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x21
  __int64 v108; // x1
  __int64 v109; // x2
  WarBoardOrthostichySchedule_o *v110; // x21
  const MethodInfo *v111; // x2
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x21
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  __int64 v127; // x0
  __int64 v128; // x0
  WarBoardPieceBaseComponent_o *v129; // x0
  int32_t v130; // w1
  const MethodInfo *v131; // x2
  float pixelPerSecond; // [xsp+8h] [xbp-A8h]
  float v133; // [xsp+Ch] [xbp-A4h]
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v142; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_421334F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__, v11);
    sub_B0D8A4(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, v12);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v13);
    sub_B0D8A4(&WarBoardMovePerformance_TypeInfo, v14);
    sub_B0D8A4(&WarBoardOrthostichySchedule_TypeInfo, v15);
    sub_B0D8A4(&WarBoardParallelSchedule_TypeInfo, v16);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v17);
    byte_421334F = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v18 = sub_B0D974(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, *(_QWORD *)&squareIndex, method);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v18,
    0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v20 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)WarBoardData__GetWall(Instance, squareIndex, 0, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_35;
  v22 = (WarBoardWallData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v20, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  *(UnityEngine_Vector3_o *)&v26 = WarBoardManager__GetSquarePosition(v20, squareIndex, 0LL);
  Instance = v20->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_35;
  v29 = v26;
  v30 = v27;
  v31 = v28;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0LL);
  if ( !v18 )
    goto LABEL_35;
  *(_QWORD *)(v18 + 16) = Instance;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)Instance, v32, v33, v34, v35, v36, v37);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v38,
                                                                                                  v39);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v43 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v41, v42);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v43, 0LL, 0LL);
  if ( !v43 )
    goto LABEL_35;
  v46 = *(System_Delegate_o **)(v43 + 32);
  v47 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v44, v45);
  WarBoardTaskBase_TaskCallback___ctor(
    v47,
    (Il2CppObject *)v18,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0LL);
  v48 = (System_Int32_array **)System_Delegate__Combine(v46, (System_Delegate_o *)v47, 0LL);
  if ( v48 && *v48 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v129 = (WarBoardPieceBaseComponent_o *)sub_B0DC70(v48);
    WarBoardPieceBaseComponent__OnAfterWallAttack(v129, v130, v131);
    return;
  }
  *(_QWORD *)(v43 + 32) = v48;
  sub_B0D840((BattleServantConfConponent_o *)(v43 + 32), v48, v49, v50, v51, v52, v53, v54);
  if ( !v40 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v40,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v136.fields.x = v29 - x;
  v136.fields.y = v30 - y;
  v136.fields.z = v31 - z;
  *(float *)&methoda.methodPointer = v29 - x;
  *((float *)&methoda.methodPointer + 1) = v30 - y;
  *(float *)&methoda.invoker_method = v31 - z;
  v137.fields.x = UnityEngine_Vector3__get_magnitude(v136, &methoda);
  v55 = v137.fields.x;
  *(UnityEngine_Vector3_o *)(&v56 - 1) = UnityEngine_Vector3__get_normalized(v137, &methoda);
  v59 = v58;
  v60 = v56;
  v61 = v55 - this->fields.lengthOnAttack;
  v62 = v57;
  if ( v61 > 0.0 )
  {
    v63 = x + (float)(v59 * v61);
    v133 = y + (float)(v56 * v61);
    v64 = z + (float)(v57 * v61);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v68 = (WarBoardMovePerformance_o *)sub_B0D974(WarBoardMovePerformance_TypeInfo, v66, v67);
    v138.fields.y = y;
    y = v133;
    v138.fields.x = x;
    v138.fields.z = z;
    v141.fields.x = v63;
    v141.fields.y = v133;
    v141.fields.z = v64;
    v69 = (EventMissionProgressRequest_Argument_ProgressData_o *)v68;
    WarBoardMovePerformance___ctor(v68, gameObject, v138, v141, pixelPerSecond, 5, v70);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v40,
      v69,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    x = v63;
    z = v64;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v72 = x + (float)(v59 * lengthMoveAttack);
  v73 = y + (float)(v60 * lengthMoveAttack);
  v74 = z + (float)(v62 * lengthMoveAttack);
  v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v76 = this->fields.pixelPerSecond;
  v77 = v75;
  v80 = (WarBoardMovePerformance_o *)sub_B0D974(WarBoardMovePerformance_TypeInfo, v78, v79);
  v139.fields.x = v72;
  v139.fields.y = v73;
  v139.fields.z = v74;
  v142.fields.x = x;
  v142.fields.y = y;
  v142.fields.z = z;
  v81 = (System_Int32_array **)v80;
  WarBoardMovePerformance___ctor(v80, v77, v139, v142, v76, 4, v82);
  if ( !v22 )
    goto LABEL_35;
  v83 = WarBoardWallData__DecrementBreakPointPerformance(v22, 1, 0LL);
  v86 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v84,
                                                                                                  v85);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v86,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0LL, 0LL);
  if ( !v86 )
    goto LABEL_35;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v86,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v40,
    (System_Collections_Generic_IEnumerable_T__o *)v86,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)sub_B0D8BC(WarBoardTaskBase___TypeInfo, 4LL);
  if ( !Instance )
    goto LABEL_35;
  v93 = (System_Int32_array **)Instance;
  if ( v81 )
  {
    Instance = (WarBoardData_o *)sub_B0D964(v81, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( !*((_DWORD *)v93 + 6) )
    goto LABEL_36;
  v93[4] = (System_Int32_array *)v81;
  sub_B0D840((BattleServantConfConponent_o *)(v93 + 4), v81, v87, v88, v89, v90, v91, v92);
  Instance = (WarBoardData_o *)v22->fields.component;
  if ( !Instance )
    goto LABEL_35;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0LL);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v20, IconPosition, 0, 0LL);
  v100 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_B0D964(Instance, *(_QWORD *)&(*v93)->m_Items[9]);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( *((_DWORD *)v93 + 6) <= 1u )
    goto LABEL_36;
  v93[5] = (System_Int32_array *)v100;
  sub_B0D840((BattleServantConfConponent_o *)(v93 + 5), v100, v94, v95, v96, v97, v98, v99);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_35:
    sub_B0D97C(Instance);
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v107 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_B0D964(Instance, *(_QWORD *)&(*v93)->m_Items[9]);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( *((_DWORD *)v93 + 6) <= 2u )
    goto LABEL_36;
  v93[6] = (System_Int32_array *)v107;
  sub_B0D840((BattleServantConfConponent_o *)(v93 + 6), v107, v101, v102, v103, v104, v105, v106);
  v110 = (WarBoardOrthostichySchedule_o *)sub_B0D974(WarBoardOrthostichySchedule_TypeInfo, v108, v109);
  WarBoardOrthostichySchedule___ctor_21959728(v110, v83, v111);
  if ( v110 )
  {
    Instance = (WarBoardData_o *)sub_B0D964(v110, *(_QWORD *)&(*v93)->m_Items[9]);
    if ( !Instance )
    {
LABEL_37:
      v128 = sub_B0D99C();
      sub_B0D948(v128, 0LL);
    }
  }
  if ( *((_DWORD *)v93 + 6) <= 3u )
  {
LABEL_36:
    v127 = sub_B0D9A8(Instance);
    sub_B0D948(v127, 0LL);
  }
  v93[7] = (System_Int32_array *)v110;
  sub_B0D840((BattleServantConfConponent_o *)(v93 + 7), (System_Int32_array **)v110, v112, v113, v114, v115, v116, v117);
  v120 = sub_B0D974(WarBoardParallelSchedule_TypeInfo, v118, v119);
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v120, 0LL);
  *(_QWORD *)(v120 + 56) = v93;
  sub_B0D840((BattleServantConfConponent_o *)(v120 + 56), v93, v121, v122, v123, v124, v125, v126);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v40,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v120,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( v40->fields._size >= 1 )
    WarBoardManager__AddTask_17750248(v20, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v40, 0LL);
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
    sub_B0D97C(simpleAnimation);
  SimpleAnimation__Play_50482404(simpleAnimation, animationName, 0LL);
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
    sub_B0D97C(this);
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
        v7 = sub_B0D9A8(this);
        sub_B0D948(v7, 0LL);
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
  signed int max_length; // w8
  unsigned int v13; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v15; // x22
  unsigned __int64 v16; // x19
  UnityEngine_Object_o *v17; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x0

  if ( (byte_421333F & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, parents);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_421333F = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  parents,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v13];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v15 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_22;
      }
      v16 = 0LL;
      while ( v16 < (unsigned int)klass )
      {
        v17 = (UnityEngine_Object_o *)*((_QWORD *)&v15[1].monitor + v16);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v17,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v17 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v17,
                                                                                                 0LL);
          if ( !v10 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v10,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v15[1].klass;
        if ( (__int64)++v16 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v26 = sub_B0D9A8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B0D948(v26, 0LL);
    }
  }
LABEL_22:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                                                                               (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B0D97C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B0D840(
    (BattleServantConfConponent_o *)&button->fields.tweenTargets,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_4213341 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, enable);
    byte_4213341 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_B0D97C(0LL);
    if ( enable )
    {
      v7 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v6, v7, 0, 0LL);
      return;
    }
    if ( v6->fields.mState )
    {
      v7 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v6, 0, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *listEffectData; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x21
  struct UnityEngine_Renderer_o *renderer; // x21
  UnityEngine_Renderer_c *klass; // x8
  unsigned __int64 v26; // x22
  bool v27; // w19
  UnityEngine_Object_o *v28; // x20
  __int64 v29; // x0

  if ( (byte_4213355 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__, effectKey);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v8);
    sub_B0D8A4(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__, v10);
    sub_B0D8A4(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, v11);
    byte_4213355 = 1;
  }
  v12 = sub_B0D974(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, effectKey, isDisp);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_20;
  *(_QWORD *)(v12 + 16) = effectKey;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)effectKey, v14, v15, v16, v17, v18, v19);
  listEffectData = this->fields.listEffectData;
  v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo,
                                                                   v21,
                                                                   v22);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v23,
    (Il2CppObject *)v12,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  if ( !listEffectData )
    goto LABEL_20;
  v13 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listEffectData,
          (System_Predicate_T__o *)v23,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  if ( !v13 )
    return (char)v13;
  renderer = v13->fields.renderer;
  if ( !renderer )
LABEL_20:
    sub_B0D97C(v13);
  klass = renderer[1].klass;
  if ( (int)klass >= 1 )
  {
    v26 = 0LL;
    v27 = isDisp;
    do
    {
      if ( v26 >= (unsigned int)klass )
      {
        v29 = sub_B0D9A8(v13);
        sub_B0D948(v29, 0LL);
      }
      v28 = (UnityEngine_Object_o *)*((_QWORD *)&renderer[1].monitor + v26);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v13 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)v13 & 1) == 0 )
      {
        if ( !v28 )
          goto LABEL_20;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v28, v27, 0LL);
      }
      LODWORD(klass) = renderer[1].klass;
      ++v26;
    }
    while ( (__int64)v26 < (int)klass );
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
  UICommonButton_o *v6; // x0

  if ( (byte_4213340 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, enable);
    byte_4213340 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_B0D97C(0LL);
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0LL);
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
  if ( (byte_4213343 & 1) == 0 )
  {
    this = (WarBoardPieceBaseComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4213343 = 1;
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
      sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
      SimpleAnimation__Stop_50479904(simpleAnimation, animationName, 0LL);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0LL);
        return;
      }
    }
LABEL_7:
    sub_B0D97C(simpleAnimation);
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
      sub_B0D97C(this);
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
  __int64 v2; // x2
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
  __int64 v25; // x1
  __int64 v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v29; // x23
  WarBoardPieceData_o *pieceData; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o **v37; // x21
  __int64 v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x1
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v52; // w23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v53; // x25
  const MethodInfo *v54; // x1
  System_Collections_Generic_IEnumerable_T__o *v55; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v56; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v58; // x25
  System_Collections_Generic_IEnumerable_T__o *v59; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v60; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v63; // x20
  _BOOL8 v64; // x0
  Il2CppObject *current; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *removeTweenTargetObjects; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v68; // x0
  WarBoardManager_TaskList_o *v69; // x1
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  struct UICommonButton_o *v72; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Collections_Generic_HashSet_Enumerator_T__o v80; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v81; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4213346 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_UIWidget___ctor__, method);
    sub_B0D8A4(&System_Action_UIWidget__TypeInfo, v4);
    sub_B0D8A4(&Method_BasicHelper_ForEach_UIWidget___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_GameObject___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_GameObject___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__, v14);
    sub_B0D8A4(&System_Collections_Generic_HashSet_UIWidget__TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Contains__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Remove__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor___67883728, v19);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v20);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__, v21);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__, v22);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__, v23);
    sub_B0D8A4(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__, v24);
    sub_B0D8A4(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, v25);
    byte_4213346 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  v26 = sub_B0D974(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, method, v2);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v26,
    0LL);
  v29 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                             System_Collections_Generic_HashSet_UIWidget__TypeInfo,
                                                                             v27,
                                                                             v28);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v29,
    (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v26 )
    goto LABEL_36;
  *(_QWORD *)(v26 + 24) = v29;
  v37 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o **)(v26 + 24);
  v38 = v26 + 16;
  sub_B0D840((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)v29, v31, v32, v33, v34, v35, v36);
  v41 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                             System_Collections_Generic_HashSet_UIWidget__TypeInfo,
                                                                             v39,
                                                                             v40);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v41,
    (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v26 + 16) = v41;
  sub_B0D840((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_36;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasAvailablePermanentSleepBuff(pieceData, v48);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v52 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v53 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_UIWidget__TypeInfo,
                                                                                 v49,
                                                                                 v50);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v53,
      (Il2CppObject *)v26,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      (const MethodInfo_246EA3C *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      cannotActTurnDurk,
      (System_Action_T__o *)v53,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_36;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, v54);
    if ( v52 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v55 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v56 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                   System_Action_UIWidget__TypeInfo,
                                                                                   v49,
                                                                                   v50);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v56,
        (Il2CppObject *)v26,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        (const MethodInfo_246EA3C *)Method_System_Action_UIWidget___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v55,
        (System_Action_T__o *)v56,
        (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v58 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_UIWidget__TypeInfo,
                                                                                 v49,
                                                                                 v50);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v58,
      (Il2CppObject *)v26,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      (const MethodInfo_246EA3C *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v58,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v52 & 1) != 0 )
    {
      v59 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v60 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                   System_Action_UIWidget__TypeInfo,
                                                                                   v49,
                                                                                   v50);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v60,
        (Il2CppObject *)v26,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        (const MethodInfo_246EA3C *)Method_System_Action_UIWidget___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v59,
        (System_Action_T__o *)v60,
        (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v38 )
    goto LABEL_36;
  if ( *(int *)(*(_QWORD *)v38 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_36;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v63 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_GameObject__TypeInfo,
                                                                          v49,
                                                                          v50);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v63,
    tweenTargets,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_GameObject___ctor___67883728);
  pieceData = *(WarBoardPieceData_o **)v38;
  if ( !*(_QWORD *)v38 )
    goto LABEL_36;
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v80,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)pieceData,
    (const MethodInfo_2C7C4C0 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v81 = v80;
  while ( 1 )
  {
    v64 = System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v81,
            (const MethodInfo_2111EE0 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v64 )
      break;
    current = v81.fields._current;
    if ( !v81.fields._current )
      sub_B0D97C(v64);
    removeTweenTargetObjects = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.removeTweenTargetObjects;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v81.fields._current, 0LL);
    if ( !removeTweenTargetObjects )
      sub_B0D97C(gameObject);
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           removeTweenTargetObjects,
           (WarBoardManager_TaskList_o *)gameObject,
           (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v69 = (WarBoardManager_TaskList_o *)v68;
      if ( !v63 )
        sub_B0D97C(v68);
      goto LABEL_22;
    }
    if ( !*v37 )
      sub_B0D97C(0LL);
    if ( System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           *v37,
           (BattleBuffData_BuffData_o *)current,
           (const MethodInfo_2C7C05C *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      gray = UnityEngine_Color__get_gray(0LL);
      UIWidget__set_color((UIWidget_o *)current, gray, 0LL);
      v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v69 = (WarBoardManager_TaskList_o *)v70;
      if ( !v63 )
        sub_B0D97C(v70);
LABEL_22:
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v63,
        v69,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color((UIWidget_o *)current, white, 0LL);
      v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !v63 )
        sub_B0D97C(v71);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v63,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v81,
    (const MethodInfo_2111EDC *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v72 = this->fields.button;
  v73 = System_Linq_Enumerable__Distinct_string_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v63,
          (const MethodInfo_1B48A0C *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                       v73,
                                       (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v72 )
LABEL_36:
    sub_B0D97C(pieceData);
  v72->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v72->fields.tweenTargets,
    (System_Int32_array **)pieceData,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiByBuffChanged(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  WarBoardPieceStatusLabel_o *v4; // x0

  if ( (byte_4213345 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4213345 = 1;
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
    v4 = this->fields.pieceStatusLabelComponent;
    if ( !v4 )
      sub_B0D97C(0LL);
    WarBoardPieceStatusLabel__SetupLabel(v4, this->fields.pieceData, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__UpdateWidgetDepth(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardData_o *Instance; // x0
  int32_t PieceDispPriority; // w0
  const MethodInfo *v6; // x2

  if ( (byte_4213359 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4213359 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B0D97C(Instance);
  PieceDispPriority = WarBoardData__GetPieceDispPriority(Instance, this->fields.pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v6);
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
  if ( (byte_4213352 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, *(_QWORD *)&value);
    this = (WarBoardPieceBaseComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4213352 = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                       (UnityEngine_Component_o *)v4,
                                                                                       1,
                                                                                       (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B0D840(
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
          sub_B0D840((BattleServantConfConponent_o *)((char *)uiWidgets + v23), 0LL, v15, v16, v17, v18, v19, v20);
        }
        uiWidgets = *p_uiWidgets;
        ++v22;
        v23 += 8LL;
      }
      while ( v22 < max_length );
      if ( !uiWidgets )
LABEL_27:
        sub_B0D97C(this);
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
    v30 = sub_B0D9A8(this);
    sub_B0D948(v30, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_421387B & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardPieceBaseComponent___c_TypeInfo, v1);
    byte_421387B = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardPieceBaseComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_421387E & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_421387E = 1;
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

  if ( (byte_421387C & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_421387C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__maskFadeout(Instance, 2, 0.0, 0LL, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_421387D & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_421387D = 1;
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

  if ( (byte_421387F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_421387F = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)targetUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_4213880 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_4213880 = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)darkenUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_4213881 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_4213881 = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)targetUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_4213882 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_4213882 = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)darkenUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
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
    sub_B0D97C(0LL);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4213883 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_4213883 = 1;
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

  if ( (byte_4213884 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_4213884 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  WarBoardManager_o *Instance; // x0
  WarBoardPieceData_o *targetSquarePiece; // x0
  System_Int32_array *PieceEventVals; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4213885 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    byte_4213885 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0LL);
  if ( !v9 )
    goto LABEL_13;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0LL);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                  Instance,
                                                                  38,
                                                                  PieceEventVals,
                                                                  0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
      EventTasks,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_B0D97C(Instance);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(Instance, 37, 0LL, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    v14,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v9,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
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
    sub_B0D97C(0LL);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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

  if ( (byte_4213887 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4213887 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(_4__this);
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
    sub_B0D97C(this);
  return targetPiece->fields._isDead_k__BackingField && this->fields.moveAfterActionCheck;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
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

  if ( (byte_4213886 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardMessageMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    byte_4213886 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
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
    if ( !v10 )
      goto LABEL_26;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
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
  if ( !v10 )
    goto LABEL_26;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)targetPiece,
                                                                20,
                                                                v22,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    EventTasks,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  v24 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)targetPiece,
                                                         40,
                                                         v22,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    v24,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v10,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v25 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v25 )
    {
      WarBoardManager__InsertRunningTask(v25, (WarBoardTaskBase_array *)targetPiece, 0LL);
      return;
    }
LABEL_26:
    sub_B0D97C(targetPiece);
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
    sub_B0D97C(0LL);
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

  if ( (byte_4213889 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4213889 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(_4__this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  WarBoardManager_o *Instance; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4213888 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    byte_4213888 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0LL, 0LL);
  if ( !v9 )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v9,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
      return;
    }
LABEL_9:
    sub_B0D97C(Instance);
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
    sub_B0D97C(this);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0LL);
}