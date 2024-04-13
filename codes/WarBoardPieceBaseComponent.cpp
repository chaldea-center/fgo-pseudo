void __fastcall WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E762E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6875/*"Frame{0}"*/, v14, v15, v16);
    byte_42E762E = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listEffectData,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416LL;
  this->fields.lengthMoveAttack = 25.0;
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_32A1BD0;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_32A1BE0;
  v24 = (System_Int32_array **)StringLiteral_6875/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6875/*"Frame{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.baseFrameName, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v31;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.removeTweenTargetObjects,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__AddDeadMoveTask(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Vector3_o originalPos,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  const MethodInfo *v29; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Int32_array *PieceEventVals; // x22
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  float pixelPerSecond; // s13
  float v35; // s11
  float v36; // s12
  float v37; // s14
  WarBoardMovePerformance_o *v38; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x20
  const MethodInfo *v40; // x3
  System_Collections_Generic_IEnumerable_T__o *v41; // x0
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  WebViewManager_o *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_42E7625 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, squareIndex, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22, v23, v24);
    sub_B5D5C4(&WarBoardMovePerformance_TypeInfo, v25, v26, v27);
    byte_42E7625 = 1;
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_12;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, v29);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_12;
  pieceData = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                       (WarBoardManager_o *)pieceData,
                                       30,
                                       PieceEventVals,
                                       0LL);
  if ( !v28 )
    goto LABEL_12;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v28,
    (System_Collections_Generic_IEnumerable_T__o *)pieceData,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_12;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)pieceData,
                                                                36,
                                                                0LL,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v28,
    EventTasks,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_12;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v35 = SquarePosition.fields.x;
  v36 = SquarePosition.fields.y;
  v37 = SquarePosition.fields.z;
  v38 = (WarBoardMovePerformance_o *)sub_B5D694(WarBoardMovePerformance_TypeInfo);
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  v46.fields.x = v35;
  v46.fields.y = v36;
  v46.fields.z = v37;
  v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)v38;
  WarBoardMovePerformance___ctor(v38, gameObject, v45, v46, pixelPerSecond, 0, v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v28,
    v39,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v41 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                               (WarBoardManager_o *)pieceData,
                                                               38,
                                                               PieceEventVals,
                                                               0LL),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v28,
          v41,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v42 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                               (WarBoardManager_o *)pieceData,
                                                               37,
                                                               0LL,
                                                               0LL),
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v28,
          v42,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_12:
    sub_B5D69C(pieceData, v29);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t controllType_k__BackingField; // w8
  WarBoardManager_o *v11; // x20
  struct WarBoardSeSetting_o *seSetting; // x8
  System_String_o *DeselectSe; // x21
  const MethodInfo *v14; // x2
  Il2CppMethodPointer methodPtr; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  struct WarBoardPieceData_o *v17; // x8
  struct WarBoardSeSetting_o *v18; // x8
  System_String_o *SelectSe; // x21
  struct WarBoardPieceData_o *v20; // x8
  struct WarBoardSeSetting_o *v21; // x8
  System_String_o *v22; // x21
  struct WarBoardSeSetting_o *v23; // x8
  System_String_o *OpenSimpleInfoSe; // x19

  if ( (byte_42E7616 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E7616 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  controllType_k__BackingField = Instance->fields._controllType_k__BackingField;
  v11 = Instance;
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
      v17 = this->fields.pieceData;
      if ( v17 )
      {
        WarBoardManager__SquareSelect(v11, v17->fields._nowSquareIndex_k__BackingField, 0LL);
        v14 = this->klass->vtable._14_EditPiece.method;
        methodPtr = this->klass->vtable._15_ChangeStatus.methodPtr;
LABEL_37:
        ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v14)(this, methodPtr);
        return;
      }
LABEL_46:
      sub_B5D69C(Instance, v9);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL)
      && WarBoardManager__IsSelectedPieceSame(v11, this->fields.pieceData, 0LL) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
          WarBoardManager__DeselectPiece(v11, 1, 0LL, 0LL);
          v14 = this->klass->vtable._13_HideStatus.method;
          methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
          goto LABEL_37;
        }
      }
      goto LABEL_46;
    }
    if ( WarBoardManager__get_isSelectedPiece(v11, 0LL) && this->fields.isSelectable )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v18 = Instance->fields.seSetting;
        if ( v18 )
        {
          SelectSe = v18->fields.SelectSe;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          Instance = (WarBoardManager_o *)SoundManager__playSe(SelectSe, 0LL);
          v20 = this->fields.pieceData;
          if ( v20 )
          {
            WarBoardManager__SelectedPieceAction(v11, v20->fields._nowSquareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
      goto LABEL_46;
    }
    if ( WarBoardManager__IsNowTurn(v11, this->fields.pieceData, 0LL) )
    {
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v21 = Instance->fields.seSetting;
        if ( v21 )
        {
          v22 = v21->fields.SelectSe;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v22, 0LL);
          WarBoardManager__SelectPiece(v11, this->fields.pieceData, 0LL);
          v14 = this->klass->vtable._12_ShowStatus.method;
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
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    v23 = Instance->fields.seSetting;
    if ( !v23 )
      goto LABEL_46;
    OpenSimpleInfoSe = v23->fields.OpenSimpleInfoSe;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  WebViewManager_o *Instance; // x0
  __int64 v33; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v36; // x21
  UnityEngine_GameObject_o *v37; // x22
  WarBoardCommonEffectPerformance_o *v38; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x21
  System_Nullable_Vector3__o v40; // 0:x3.16
  System_Nullable_Vector3__o v41; // 0:x5.16

  if ( (byte_42E762B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__,
      (_DWORD)effectName,
      (_DWORD)taskList,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22, v23, v24);
    sub_B5D5C4(&WarBoardCommonEffectPerformance_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v28, v29, v30);
    byte_42E762B = 1;
  }
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2E68600 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v36 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
      v36 = (UnityEngine_Object_o *)transform;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v37 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)CommonEffectAsset_object,
                                        (UnityEngine_Transform_o *)v36,
                                        (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    v38 = (WarBoardCommonEffectPerformance_o *)sub_B5D694(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v40.fields.value.fields.x = 0LL;
    *(_QWORD *)&v40.fields.value.fields.z = 0LL;
    *(_QWORD *)&v41.fields.value.fields.x = 0LL;
    *(_QWORD *)&v41.fields.value.fields.z = 0LL;
    v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)v38;
    WarBoardCommonEffectPerformance___ctor(v38, 0LL, v37, v40, v41, (System_Nullable_Vector3__o)0, 0, 0, 1, 0LL);
    if ( v31 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v31,
        v39,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v31,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__AddTask_18807556(
          (WarBoardManager_o *)Instance,
          0,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v31,
          0LL);
        return;
      }
    }
LABEL_21:
    sub_B5D69C(Instance, v33);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__CreateEffectText(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_Object_o *effectDamageBaseObject; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x22
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v30; // x1
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v32; // x21
  WarBoardCommonEffectPerformance_o *v33; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x20
  System_Nullable_Vector3__o v35; // 0:x3.16
  System_Nullable_Vector3__o v36; // 0:x5.16

  if ( (byte_42E762C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__,
      (_DWORD)effectName,
      (_DWORD)popText,
      *(_QWORD *)&popTextColor);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&WarBoardCommonEffectPerformance_TypeInfo, v24, v25, v26);
    byte_42E762C = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(0LL, effectDamageBaseObject, 0LL) )
  {
    v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v28,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    v32 = this->fields.effectDamageBaseObject;
    v33 = (WarBoardCommonEffectPerformance_o *)sub_B5D694(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v35.fields.value.fields.x = 0LL;
    *(_QWORD *)&v35.fields.value.fields.z = 0LL;
    *(_QWORD *)&v36.fields.value.fields.x = 0LL;
    *(_QWORD *)&v36.fields.value.fields.z = 0LL;
    v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)v33;
    WarBoardCommonEffectPerformance___ctor(v33, 0LL, v32, v35, v36, (System_Nullable_Vector3__o)0, 0, 0, 0, 0LL);
    if ( v28 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        v34,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      if ( taskList )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
          (System_Collections_Generic_IEnumerable_T__o *)v28,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        return;
      }
      Instance = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        WarBoardManager__AddTask_18807556(
          (WarBoardManager_o *)Instance,
          0,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)v28,
          0LL);
        return;
      }
    }
LABEL_18:
    sub_B5D69C(Instance, v30);
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
  __int64 v3; // x3
  WarBoardPieceBaseComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *PieceEventVals; // x20
  const MethodInfo *v31; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  _QWORD **v34; // x20
  __int64 v35; // x19
  __int16 v36; // w8
  __int64 v37; // x19
  __int64 v38; // x19
  __int64 v39; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x19
  WarBoardPieceBaseComponent___c_c *v42; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__62_0; // x20
  Il2CppObject *v45; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  v5 = this;
  if ( (byte_42E761F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)targetPiece, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Concat_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__, v24, v25, v26);
    this = (WarBoardPieceBaseComponent_o *)sub_B5D5C4(&WarBoardPieceBaseComponent___c_TypeInfo, v27, v28, v29);
    byte_42E761F = 1;
  }
  if ( !targetPiece )
    goto LABEL_33;
  if ( targetPiece->fields._type_k__BackingField == 1 )
  {
    this = (WarBoardPieceBaseComponent_o *)v5->fields.pieceData;
    if ( this )
    {
      PieceEventVals = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                              (WarBoardPieceData_o *)this,
                                                                              (const MethodInfo *)targetPiece);
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                   targetPiece,
                                                                   v31);
      v33 = System_Linq_Enumerable__Concat_int_(
              PieceEventVals,
              v32,
              (const MethodInfo_1CA4918 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v33,
               (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_33:
    sub_B5D69C(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v41 = *(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.m_CachedPtr;
    v42 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v42 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v42->static_fields;
    _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)static_fields->__9;
      _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__62_0,
        v45,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        (const MethodInfo_2C3041C *)Method_System_Func_WarBoardPieceData__IEnumerable_int____ctor__);
      v46 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v46->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v46->__9__62_0,
        (System_Int32_array **)_9__62_0,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                 v41,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                 (const MethodInfo_1CB4938 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v33,
             (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v34 = (_QWORD **)Method_System_Array_Empty_int___;
  v35 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v36 = *(_WORD *)(v35 + 306);
  if ( (v36 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v36 = *(_WORD *)(v35 + 306);
  }
  if ( (v36 & 0x400) != 0 )
  {
    v37 = *v34[6];
    if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
      sub_AF52C4(*v34[6]);
    if ( !*(_DWORD *)(v37 + 224) )
    {
      v38 = *v34[6];
      if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
        sub_AF52C4(*v34[6]);
      j_il2cpp_runtime_class_init_0(v38);
    }
  }
  v39 = *v34[6];
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AF52C4(*v34[6]);
  return **(System_Int32_array ***)(v39 + 184);
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v7; // x21

  if ( (byte_42E7627 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardSimpleAnimationPerformance_TypeInfo, (_DWORD)animationName, (_DWORD)method, v3);
    byte_42E7627 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v7 = (WarBoardSimpleAnimationPerformance_o *)sub_B5D694(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v7, simpleAnimation, animationName, 0LL);
  return v7;
}


void __fastcall WarBoardPieceBaseComponent__HideActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_42E7618 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7618 = 1;
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
    sub_B5D69C(currentActionPointRoot, method);
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
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v4; // x19
  __int64 v5; // x19
  WarBoardManager_o *v6; // x0

  if ( (byte_42E761B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, (_DWORD)method, v2, v3);
    byte_42E761B = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AF52C4(v5);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6 )
    sub_B5D69C(0LL, method);
  WarBoardManager__HideSimplePopup(v6, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__Initialize(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 gameObject; // x0
  __int64 v37; // x1
  struct SimpleAnimation_o *Component_srcLineSprite; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Transform_o *transform; // x21
  int v52; // s0
  int32_t breakPointMax_k__BackingField; // w21
  struct WarBoardBreakPointComponent_array *v56; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int32_t v64; // w25
  float v65; // s8
  float v66; // s9
  struct UnityEngine_GameObject_o *breakPointPrefab; // x23
  UnityEngine_Transform_o *v68; // x24
  UnityEngine_GameObject_o *v69; // x24
  WarBoardBreakPointComponent_o *v70; // x23
  struct UIWidget_o *breakPointParent; // x8
  struct WarBoardBreakPointComponent_array *v72; // x26
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  int32_t v79; // w24
  Il2CppClass **v80; // x0
  struct WarBoardBreakPointComponent_array *v81; // x8
  float maxSpacing; // s0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  UnityEngine_Transform_array *v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x22
  const MethodInfo *v97; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v102; // x21
  UnityEngine_Object_o *v103; // x22
  struct UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  UnityEngine_Object_o *v112; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  __int64 v120; // x0
  __int64 v121; // x0
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7612 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UILabel___, (_DWORD)pieceData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Transform___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&WarBoardBreakPointComponent___TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_22151/*"root_text/type01/dm_base"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_18409/*"ef_dm_base"*/, v33, v34, v35);
    byte_42E7612 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  Component_srcLineSprite = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimation,
    (System_Int32_array **)Component_srcLineSprite,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.pieceData = pieceData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.pieceData,
    (System_Int32_array **)pieceData,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_27;
  if ( !gameObject )
    goto LABEL_27;
  *(UnityEngine_Vector3_o *)&v52 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)gameObject,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v52, 0LL);
  breakPointMax_k__BackingField = pieceData->fields._breakPointMax_k__BackingField;
  v56 = (struct WarBoardBreakPointComponent_array *)sub_B5D5DC(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v56;
  p_breakPoints = &this->fields.breakPoints;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.breakPoints,
    (System_Int32_array **)v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_27;
  if ( breakPointMax_k__BackingField >= 1 )
  {
    v64 = 0;
    v65 = 0.0;
    v66 = (float)*(int *)(gameObject + 160) / (float)breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = this->fields.breakPointPrefab;
      v68 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (__int64)UnityEngine_Object__Instantiate_UILabel_(
                              (UILabel_o *)breakPointPrefab,
                              v68,
                              (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
      if ( !gameObject )
        goto LABEL_27;
      v69 = (UnityEngine_GameObject_o *)gameObject;
      v70 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v69, 0LL);
      if ( !gameObject )
        goto LABEL_27;
      v122.fields.y = 0.0;
      v122.fields.z = 0.0;
      v122.fields.x = v65;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v122, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_27;
      if ( !v70 )
        goto LABEL_27;
      WarBoardBreakPointComponent__Initialize(
        v70,
        breakPointParent->fields.mDepth + 2 * (~v64 + breakPointMax_k__BackingField),
        v64 + 1,
        pieceData->fields._type_k__BackingField == 1,
        pieceData->fields._type_k__BackingField == 0 && pieceData->fields._forceId_k__BackingField != 0,
        0,
        0LL);
      v72 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_27;
      gameObject = sub_B5D684(v70, v72->obj.klass->_1.element_class);
      if ( !gameObject )
        goto LABEL_62;
      v79 = v64;
      if ( v64 >= v72->max_length )
        goto LABEL_61;
      v80 = &v72->obj.klass + v64;
      v80[4] = (Il2CppClass *)v70;
      sub_B5D560((BattleServantConfConponent_o *)(v80 + 4), (System_Int32_array **)v70, v73, v74, v75, v76, v77, v78);
      v81 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_27;
      if ( v64 >= v81->max_length )
        goto LABEL_61;
      gameObject = (__int64)v81->m_Items[v64];
      if ( !gameObject )
        goto LABEL_27;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        pieceData->fields._breakPoint_k__BackingField > v64++,
        0,
        0LL);
      if ( breakPointMax_k__BackingField <= v79 + 1 )
        break;
      maxSpacing = v70->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      if ( maxSpacing >= v66 )
        maxSpacing = v66;
      v65 = v65 + maxSpacing;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&pieceData->fields.pieceComponent,
    (System_Int32_array **)this,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_27;
LABEL_31:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  v89 = (UnityEngine_Transform_array *)sub_B5D5DC(UnityEngine_Transform___TypeInfo, 1LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v89 )
    goto LABEL_27;
  v96 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B5D684(gameObject, v89->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_62:
      v121 = sub_B5D6BC();
      sub_B5D668(v121, 0LL);
    }
  }
  if ( !v89->max_length )
  {
LABEL_61:
    v120 = sub_B5D6C8(gameObject);
    sub_B5D668(v120, 0LL);
  }
  v89->m_Items[0] = (UnityEngine_Transform_o *)v96;
  sub_B5D560((BattleServantConfConponent_o *)v89->m_Items, v96, v90, v91, v92, v93, v94, v95);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v89, v97);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  gameObject = *(_QWORD *)(gameObject + 432);
  if ( !gameObject )
    goto LABEL_27;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v99);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v100);
  gameObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_27;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_18409/*"ef_dm_base"*/,
                               (const MethodInfo_2E68600 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    v102 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v103 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                     this,
                                     this->klass[1]._1.image);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v103, 0LL, 0LL) )
      v102 = (UnityEngine_Transform_o *)v103;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v104 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                (UILabel_o *)CommonEffectAsset_object,
                                                v102,
                                                (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    this->fields.effectDamageBaseObject = v104;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.effectDamageBaseObject,
      (System_Int32_array **)v104,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0LL, 0LL) )
    {
      v112 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                       *p_effectDamageBaseObject,
                                       (System_String_o *)StringLiteral_22151/*"root_text/type01/dm_base"*/,
                                       0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = UnityEngine_Object__op_Inequality(v112, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v112 )
          goto LABEL_27;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)v112,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)Component_WebViewObject;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.effectDamageBaseLabel,
          (System_Int32_array **)Component_WebViewObject,
          v114,
          v115,
          v116,
          v117,
          v118,
          v119);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_27:
        sub_B5D69C(gameObject, v37);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  __int64 v51; // x22
  WarBoardData_o *gameObject; // x0
  const MethodInfo *v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x19
  System_Int32_array **Instance; // x0
  WarBoardData_o **v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x8
  System_Int32_array **Piece_23181536; // x0
  WarBoardData_o **v71; // x23
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x24
  WarBoardTaskBase_TaskCallback_o *v79; // x25
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  float y; // v0.s[1]
  float x; // s8
  float32x2_t v89; // d0
  unsigned __int32 v90; // s1
  float v91; // s2
  __int64 v92; // x8
  bool v93; // zf
  __int64 v94; // x8
  float v95; // s3
  float v96; // s1
  __int64 v97; // x24
  WarBoardTaskBase_TaskCallback_o *v98; // x25
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  struct WarBoardPieceData_o *v105; // x8
  UnityEngine_GameObject_o *v106; // x26
  float v107; // s8
  float v108; // s9
  float v109; // s10
  float pixelPerSecond; // s13
  float v111; // s11
  float v112; // s12
  float z; // s14
  WarBoardMovePerformance_o *v114; // x0
  WarBoardTaskBase_o *v115; // x25
  const MethodInfo *v116; // x3
  bool v117; // w8
  System_Func_bool__o *v118; // x23
  __int64 v119; // x21
  System_Delegate_o *v120; // x23
  WarBoardPieceBaseComponent___c_c *v121; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v124; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  WarBoardPieceData_o *v139; // x0
  const MethodInfo *v140; // x1
  MethodInfo v141; // [xsp+0h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E7622 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__, v24, v25, v26);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__, v27, v28, v29);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__, v30, v31, v32);
    sub_B5D5C4(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
      v33,
      v34,
      v35);
    sub_B5D5C4(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&WarBoardPieceBaseComponent___c_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&WarBoardConditionalJumpTask_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&WarBoardMovePerformance_TypeInfo, v48, v49, v50);
    byte_42E7622 = 1;
  }
  LODWORD(v141.invoker_method) = 0;
  v141.methodPointer = 0LL;
  v51 = sub_B5D694(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v51,
    0LL);
  if ( !v51 )
    goto LABEL_38;
  *(_QWORD *)(v51 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 32), (System_Int32_array **)this, v54, v55, v56, v57, v58, v59);
  *(_DWORD *)(v51 + 52) = squareIndex;
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v62 = (WarBoardData_o **)(v51 + 24);
  *(_QWORD *)(v51 + 24) = Instance;
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 24), Instance, v63, v64, v65, v66, v67, v68);
  v69 = *(_QWORD *)(v51 + 24);
  if ( !v69 )
    goto LABEL_38;
  gameObject = *(WarBoardData_o **)(v69 + 432);
  if ( !gameObject )
    goto LABEL_38;
  Piece_23181536 = (System_Int32_array **)WarBoardData__GetPiece_23181536(gameObject, *(_DWORD *)(v51 + 52), 0LL);
  v71 = (WarBoardData_o **)(v51 + 16);
  *(_QWORD *)(v51 + 16) = Piece_23181536;
  sub_B5D560((BattleServantConfConponent_o *)(v51 + 16), Piece_23181536, v72, v73, v74, v75, v76, v77);
  v78 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v78, 0LL, 0LL);
  v79 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v79,
    (Il2CppObject *)v51,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v78 )
    goto LABEL_38;
  *(_QWORD *)(v78 + 32) = v79;
  sub_B5D560((BattleServantConfConponent_o *)(v78 + 32), (System_Int32_array **)v79, v80, v81, v82, v83, v84, v85);
  if ( !v60 )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v60,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v78,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_38;
  gameObject = *v62;
  if ( !*v62 )
    goto LABEL_38;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v51 + 24);
  *(UnityEngine_Vector3_o *)(v51 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_38;
  v143 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v51 + 52), 0LL);
  y = v143.fields.y;
  *(float32x2_t *)&v143.fields.x = vsub_f32(*(float32x2_t *)&v143.fields.x, *(float32x2_t *)(v51 + 40));
  v143.fields.y = v143.fields.z - *(float *)(v51 + 48);
  v141.methodPointer = *(Il2CppMethodPointer *)&v143.fields.x;
  *(float *)&v141.invoker_method = v143.fields.y;
  v144.fields.x = UnityEngine_Vector3__get_magnitude(v143, &v141);
  x = v144.fields.x;
  *(UnityEngine_Vector3_o *)v89.n64_u64 = UnityEngine_Vector3__get_normalized(v144, &v141);
  v92 = *(_QWORD *)(v51 + 16);
  if ( !v92 )
    goto LABEL_38;
  v93 = *(_DWORD *)(v92 + 16) == 0;
  v94 = 136LL;
  if ( !v93 )
    v94 = 132LL;
  v95 = x - *(float *)((char *)&this->klass + v94);
  if ( v95 > 0.0 )
  {
    v89.n64_u32[1] = v90;
    v96 = (float)(v91 * v95) + *(float *)(v51 + 48);
    *(float32x2_t *)(v51 + 40) = vadd_f32(vmul_n_f32(v89, v95), *(float32x2_t *)(v51 + 40));
    *(float *)(v51 + 48) = v96;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_38;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, v53);
  v97 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v97, 0LL, 0LL);
  v98 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v98,
    (Il2CppObject *)v51,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0LL);
  if ( !v97 )
    goto LABEL_38;
  *(_QWORD *)(v97 + 32) = v98;
  sub_B5D560((BattleServantConfConponent_o *)(v97 + 32), (System_Int32_array **)v98, v99, v100, v101, v102, v103, v104);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v105 = this->fields.pieceData;
  if ( !v105 )
    goto LABEL_38;
  v106 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v51 + 24);
  if ( !gameObject )
    goto LABEL_38;
  v107 = *(float *)(v51 + 40);
  v108 = *(float *)(v51 + 44);
  v109 = *(float *)(v51 + 48);
  v145 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v105->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v111 = v145.fields.x;
  v112 = v145.fields.y;
  z = v145.fields.z;
  v114 = (WarBoardMovePerformance_o *)sub_B5D694(WarBoardMovePerformance_TypeInfo);
  v146.fields.x = v107;
  v146.fields.y = v108;
  v146.fields.z = v109;
  v147.fields.x = v111;
  v147.fields.y = v112;
  v147.fields.z = z;
  v115 = (WarBoardTaskBase_o *)v114;
  WarBoardMovePerformance___ctor(v114, v106, v146, v147, pixelPerSecond, 0, v116);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_38;
  if ( WarBoardPieceData__GetMoveAfterAttack((WarBoardPieceData_o *)gameObject, v53) )
  {
    v117 = 0;
  }
  else
  {
    gameObject = *v71;
    if ( !*v71 )
      goto LABEL_38;
    v117 = WarBoardPieceData__GetMovedAferDefend((WarBoardPieceData_o *)gameObject, v53) == 0;
  }
  *(_BYTE *)(v51 + 56) = v117;
  v118 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v118,
    (Il2CppObject *)v51,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v119 = sub_B5D694(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v119, v118, (WarBoardTaskBase_o *)v97, v115, 0LL);
  if ( !v119 )
LABEL_38:
    sub_B5D69C(gameObject, v53);
  v120 = *(System_Delegate_o **)(v119 + 40);
  v121 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v121 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  static_fields = v121->static_fields;
  _9__65_3 = static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( (BYTE3(v121->vtable._0_Equals.methodPtr) & 4) != 0 && !v121->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v121);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v124 = (Il2CppObject *)static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v124,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0LL);
    v125 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v125->__9__65_3 = _9__65_3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v125->__9__65_3,
      (System_Int32_array **)_9__65_3,
      v126,
      v127,
      v128,
      v129,
      v130,
      v131);
  }
  v132 = (System_Int32_array **)System_Delegate__Combine(v120, (System_Delegate_o *)_9__65_3, 0LL);
  if ( !v132 || *v132 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v119 + 40) = v132;
    sub_B5D560((BattleServantConfConponent_o *)(v119 + 40), v132, v133, v134, v135, v136, v137, v138);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v60,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v119,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    gameObject = *v62;
    if ( *v62 )
    {
      WarBoardManager__AddTask_18807556(
        (WarBoardManager_o *)gameObject,
        0,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)v60,
        0LL);
      return;
    }
    goto LABEL_38;
  }
  v139 = (WarBoardPieceData_o *)sub_B5D990(v132);
  WarBoardPieceData__IsEnabledMoveAfterAttack(v139, v140);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAfterWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  __int64 v45; // x20
  WarBoardData_o *gameObject; // x0
  const MethodInfo *v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  WarBoardData_o **v54; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x21
  System_Int32_array **Instance; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x8
  System_Int32_array **Wall; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x23
  WarBoardTaskBase_TaskCallback_o *v72; // x24
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  float y; // v0.s[1]
  float x; // s8
  float32x2_t v82; // d0
  unsigned __int32 v83; // s1
  float v84; // s2
  float v85; // s3
  float v86; // s1
  __int64 v87; // x22
  WarBoardTaskBase_TaskCallback_o *v88; // x23
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct WarBoardPieceData_o *v95; // x8
  UnityEngine_GameObject_o *v96; // x24
  float v97; // s8
  float v98; // s9
  float v99; // s10
  float pixelPerSecond; // s13
  float v101; // s11
  float v102; // s12
  float z; // s14
  WarBoardMovePerformance_o *v104; // x0
  WarBoardTaskBase_o *v105; // x23
  const MethodInfo *v106; // x3
  System_Func_bool__o *v107; // x19
  WarBoardConditionalJumpTask_o *v108; // x24
  MethodInfo v109; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E7624 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__, v24, v25, v26);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__, v27, v28, v29);
    sub_B5D5C4(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
      v30,
      v31,
      v32);
    sub_B5D5C4(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&WarBoardConditionalJumpTask_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&WarBoardMovePerformance_TypeInfo, v42, v43, v44);
    byte_42E7624 = 1;
  }
  LODWORD(v109.invoker_method) = 0;
  v109.methodPointer = 0LL;
  v45 = sub_B5D694(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v45,
    0LL);
  if ( !v45 )
    goto LABEL_19;
  *(_QWORD *)(v45 + 24) = this;
  v54 = (WarBoardData_o **)(v45 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 24), (System_Int32_array **)this, v48, v49, v50, v51, v52, v53);
  *(_DWORD *)(v45 + 44) = squareIndex;
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v45 + 16) = Instance;
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 16), Instance, v57, v58, v59, v60, v61, v62);
  v63 = *(_QWORD *)(v45 + 16);
  if ( !v63 )
    goto LABEL_19;
  gameObject = *(WarBoardData_o **)(v63 + 432);
  if ( !gameObject )
    goto LABEL_19;
  Wall = (System_Int32_array **)WarBoardData__GetWall(gameObject, *(_DWORD *)(v45 + 44), 1, 0LL);
  *(_QWORD *)(v45 + 48) = Wall;
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 48), Wall, v65, v66, v67, v68, v69, v70);
  v71 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v71, 0LL, 0LL);
  v72 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v72,
    (Il2CppObject *)v45,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v71 )
    goto LABEL_19;
  *(_QWORD *)(v71 + 32) = v72;
  sub_B5D560((BattleServantConfConponent_o *)(v71 + 32), (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
  if ( !v55 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v55,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_19;
  gameObject = *v54;
  if ( !*v54 )
    goto LABEL_19;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v45 + 16);
  *(UnityEngine_Vector3_o *)(v45 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_19;
  v111 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)gameObject, *(_DWORD *)(v45 + 44), 0LL);
  y = v111.fields.y;
  *(float32x2_t *)&v111.fields.x = vsub_f32(*(float32x2_t *)&v111.fields.x, *(float32x2_t *)(v45 + 32));
  v111.fields.y = v111.fields.z - *(float *)(v45 + 40);
  v109.methodPointer = *(Il2CppMethodPointer *)&v111.fields.x;
  *(float *)&v109.invoker_method = v111.fields.y;
  v112.fields.x = UnityEngine_Vector3__get_magnitude(v111, &v109);
  x = v112.fields.x;
  *(UnityEngine_Vector3_o *)v82.n64_u64 = UnityEngine_Vector3__get_normalized(v112, &v109);
  v85 = x - this->fields.lengthOnAttack;
  if ( v85 > 0.0 )
  {
    v82.n64_u32[1] = v83;
    v86 = (float)(v84 * v85) + *(float *)(v45 + 40);
    *(float32x2_t *)(v45 + 32) = vadd_f32(vmul_n_f32(v82, v85), *(float32x2_t *)(v45 + 32));
    *(float *)(v45 + 40) = v86;
  }
  v87 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v87, 0LL, 0LL);
  v88 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v88,
    (Il2CppObject *)v45,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0LL);
  if ( !v87 )
    goto LABEL_19;
  *(_QWORD *)(v87 + 32) = v88;
  sub_B5D560((BattleServantConfConponent_o *)(v87 + 32), (System_Int32_array **)v88, v89, v90, v91, v92, v93, v94);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v95 = this->fields.pieceData;
  if ( !v95 )
    goto LABEL_19;
  v96 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v45 + 16);
  if ( !gameObject )
    goto LABEL_19;
  v97 = *(float *)(v45 + 32);
  v98 = *(float *)(v45 + 36);
  v99 = *(float *)(v45 + 40);
  v113 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v95->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v101 = v113.fields.x;
  v102 = v113.fields.y;
  z = v113.fields.z;
  v104 = (WarBoardMovePerformance_o *)sub_B5D694(WarBoardMovePerformance_TypeInfo);
  v114.fields.x = v97;
  v114.fields.y = v98;
  v114.fields.z = v99;
  v115.fields.x = v101;
  v115.fields.y = v102;
  v115.fields.z = z;
  v105 = (WarBoardTaskBase_o *)v104;
  WarBoardMovePerformance___ctor(v104, v96, v114, v115, pixelPerSecond, 0, v106);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject
    || (*(_BYTE *)(v45 + 56) = WarBoardPieceData__GetMoveAfterAttack((WarBoardPieceData_o *)gameObject, v47) == 0,
        v107 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo),
        System_Func_bool____ctor(
          v107,
          (Il2CppObject *)v45,
          Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
          (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__),
        v108 = (WarBoardConditionalJumpTask_o *)sub_B5D694(WarBoardConditionalJumpTask_TypeInfo),
        WarBoardConditionalJumpTask___ctor(v108, v107, (WarBoardTaskBase_o *)v87, v105, 0LL),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v55,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v108,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__),
        (gameObject = *(WarBoardData_o **)(v45 + 16)) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(gameObject, v47);
  }
  WarBoardManager__AddTask_18807556(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v55,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  __int64 v87; // x23
  System_Int32_array **Instance; // x0
  __int64 v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array ***v96; // x25
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v98; // x19
  float v99; // s0
  float v100; // s1
  float v101; // s2
  float v102; // s13
  float v103; // s8
  float v104; // s14
  float v105; // s0
  float v106; // s1
  float v107; // s2
  float v108; // s9
  float v109; // s10
  float v110; // s11
  System_Int32_array **Square; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v118; // x20
  const MethodInfo *v119; // x2
  System_Int32_array *ParticipantVals; // x24
  WarBoardPieceData_o *v121; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  WarBoardManager_o **v123; // x19
  System_Collections_Generic_IEnumerable_T__o *v124; // x0
  __int64 v125; // x25
  System_Delegate_o *v126; // x27
  WarBoardTaskBase_TaskCallback_o *v127; // x28
  System_Int32_array **v128; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x8
  float x; // s12
  float v137; // s0
  float v138; // s1
  float v139; // s2
  WarBoardPieceData_o *v140; // x22
  __int64 v141; // x8
  float v142; // s15
  System_Int32_array ***v143; // x28
  float v144; // s4
  float v145; // s12
  float v146; // s9
  float v147; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v149; // s11
  UnityEngine_GameObject_o *v150; // x25
  WarBoardMovePerformance_o *v151; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v152; // x26
  const MethodInfo *v153; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v154; // x25
  System_Collections_Generic_IEnumerable_T__o *v155; // x0
  System_Collections_Generic_IEnumerable_T__o *v156; // x0
  float v157; // s0
  float v158; // s9
  float v159; // s10
  float v160; // s11
  UnityEngine_GameObject_o *v161; // x0
  float v162; // s12
  UnityEngine_GameObject_o *v163; // x21
  WarBoardMovePerformance_o *v164; // x0
  System_Int32_array **v165; // x24
  const MethodInfo *v166; // x3
  const MethodInfo *v167; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *v168; // x21
  System_Int32_array **v169; // x23
  int32_t id; // w26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v171; // x0
  const MethodInfo *v172; // x5
  _BOOL4 v173; // w8
  int32_t v174; // w2
  bool v175; // w4
  WarBoardMessageMaster_o *v176; // x0
  int32_t v177; // w1
  __int64 v178; // x24
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  Il2CppObject **v185; // x22
  float v186; // s0
  float v187; // s1
  float v188; // s2
  float v189; // s0
  float v190; // s5
  float v191; // s11
  float v192; // s12
  float v193; // s13
  float v194; // s8
  float y; // s9
  float z; // s10
  float magnitude; // s0
  float v198; // s1
  float v199; // s8
  float v200; // s1
  __int64 v201; // x8
  __int64 v202; // x8
  float ZoomSize; // s0
  __int64 v204; // x8
  __int64 v205; // x8
  __int64 v206; // x8
  const MethodInfo_234ED3C *v207; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v209; // x8
  WarBoardManager_o *v210; // x23
  float v211; // s0
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  System_Int32_array **v219; // x21
  WarBoardPieceBaseComponent___c_c *v220; // x8
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v223; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v224; // x0
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  System_Delegate_o *v231; // x25
  WarBoardTaskBase_TaskCallback_o *v232; // x26
  System_Int32_array **v233; // x0
  System_String_array **v234; // x2
  System_String_array **v235; // x3
  System_Boolean_array **v236; // x4
  System_Int32_array **v237; // x5
  System_Int32_array *v238; // x6
  System_Int32_array *v239; // x7
  int *v240; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v241; // x21
  BattleServantConfConponent_o *p_addCount; // x21
  System_Delegate_o *v243; // t1
  Il2CppObject *v244; // x22
  WarBoardTaskBase_TaskCallback_o *v245; // x24
  System_Int32_array **v246; // x0
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  System_Collections_Generic_IEnumerable_T__o *v253; // x23
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  System_Int32_array **v260; // x23
  WarBoardManager_o *v261; // x24
  int v262; // s0
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  System_Int32_array **v271; // x24
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  System_Int32_array **v278; // x24
  const MethodInfo *v279; // x2
  System_String_array **v280; // x2
  System_String_array **v281; // x3
  System_Boolean_array **v282; // x4
  System_Int32_array **v283; // x5
  System_Int32_array *v284; // x6
  System_Int32_array *v285; // x7
  System_Int32_array **v286; // x22
  WarBoardOrthostichySchedule_o *v287; // x22
  const MethodInfo *v288; // x2
  System_String_array **v289; // x2
  System_String_array **v290; // x3
  System_Boolean_array **v291; // x4
  System_Int32_array **v292; // x5
  System_Int32_array *v293; // x6
  System_Int32_array *v294; // x7
  __int64 v295; // x21
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v302; // x21
  BattleServantConfConponent_o *v303; // x21
  System_Delegate_o *v304; // x22
  System_Delegate_o *v305; // t1
  WarBoardPieceBaseComponent___c_c *v306; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *v307; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v309; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v310; // x0
  System_String_array **v311; // x2
  System_String_array **v312; // x3
  System_Boolean_array **v313; // x4
  System_Int32_array **v314; // x5
  System_Int32_array *v315; // x6
  System_Int32_array *v316; // x7
  System_Int32_array **v317; // x0
  System_String_array **v318; // x2
  System_String_array **v319; // x3
  System_Boolean_array **v320; // x4
  System_Int32_array **v321; // x5
  System_Int32_array *v322; // x6
  System_Int32_array *v323; // x7
  __int64 v324; // x0
  __int64 v325; // x0
  WarBoardPieceData_o *v326; // x0
  const MethodInfo *v327; // x1
  float v328; // [xsp+4h] [xbp-ECh]
  float v329; // [xsp+8h] [xbp-E8h]
  float v330; // [xsp+Ch] [xbp-E4h]
  float v331; // [xsp+10h] [xbp-E0h]
  float v332; // [xsp+14h] [xbp-DCh]
  UnityEngine_Component_o *v333; // [xsp+18h] [xbp-D8h]
  System_Nullable_float__o size; // [xsp+20h] [xbp-D0h] BYREF
  System_Nullable_Vector3__o v335; // [xsp+28h] [xbp-C8h] BYREF
  MethodInfo methoda; // [xsp+38h] [xbp-B8h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v338; // 0:x3.8
  System_Nullable_Vector3__o v339; // 0:x0.16
  UnityEngine_Vector3_o v340; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v341; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v342; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v343; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v344; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v346; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v347; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v348; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v349; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E7620 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, v45, v46, v47);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, v48, v49, v50);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__, v51, v52, v53);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__, v54, v55, v56);
    sub_B5D5C4(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__, v60, v61, v62);
    sub_B5D5C4(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&WarBoardPieceBaseComponent___c_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&WarBoardMovePerformance_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&WarBoardOrthostichySchedule_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&WarBoardParallelSchedule_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_9057/*"MasterDamage"*/, v84, v85, v86);
    byte_42E7620 = 1;
  }
  LODWORD(methoda.klass) = 0;
  methoda.name = 0LL;
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v87 = sub_B5D694(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v87,
    0LL);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v87 )
    goto LABEL_109;
  *(_QWORD *)(v87 + 24) = Instance;
  v96 = (System_Int32_array ***)(v87 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v87 + 24), Instance, v90, v91, v92, v93, v94, v95);
  if ( !*(_QWORD *)(v87 + 24) )
    goto LABEL_109;
  Instance = *(System_Int32_array ***)(*(_QWORD *)(v87 + 24) + 432LL);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardData__GetPiece_23181536((WarBoardData_o *)Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_109;
  v98 = (WarBoardPieceData_o *)Instance;
  Instance = *v96;
  if ( !*v96 )
    goto LABEL_109;
  *(UnityEngine_Vector3_o *)&v99 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v96;
  if ( !*v96 )
    goto LABEL_109;
  v102 = v99;
  v103 = v100;
  v104 = v101;
  *(UnityEngine_Vector3_o *)&v105 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0LL);
  if ( !*v96 )
    goto LABEL_109;
  Instance = (System_Int32_array **)(*v96)[54];
  if ( !Instance )
    goto LABEL_109;
  v108 = v105;
  v109 = v106;
  v110 = v107;
  Square = (System_Int32_array **)WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v87 + 16) = Square;
  sub_B5D560((BattleServantConfConponent_o *)(v87 + 16), Square, v112, v113, v114, v115, v116, v117);
  v118 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v118,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v98, v119);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      42,
                                      ParticipantVals,
                                      0LL);
  if ( !v118 )
    goto LABEL_109;
  v333 = (UnityEngine_Component_o *)this;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v118,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v121 = v98;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                43,
                                                                ParticipantVals,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v118,
    EventTasks,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v123 = (WarBoardManager_o **)(v87 + 24);
  v124 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                          (WarBoardManager_o *)Instance,
                                                          41,
                                                          ParticipantVals,
                                                          0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v118,
    v124,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v125 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v125, 0LL, 0LL);
  if ( !v125 )
    goto LABEL_109;
  v126 = *(System_Delegate_o **)(v125 + 32);
  v127 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v127,
    (Il2CppObject *)v87,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0LL);
  v128 = (System_Int32_array **)System_Delegate__Combine(v126, (System_Delegate_o *)v127, 0LL);
  v135 = v128;
  if ( v128 && *v128 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    goto LABEL_112;
  *(_QWORD *)(v125 + 32) = v128;
  sub_B5D560((BattleServantConfConponent_o *)(v125 + 32), v128, v129, v130, v131, v132, v133, v134);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v118,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v125,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v340.fields.x = v108 - v102;
  v340.fields.y = v109 - v103;
  v340.fields.z = v110 - v104;
  *(float *)&methoda.name = v108 - v102;
  *((float *)&methoda.name + 1) = v109 - v103;
  *(float *)&methoda.klass = v110 - v104;
  v341.fields.x = UnityEngine_Vector3__get_magnitude(v340, (const MethodInfo *)&methoda.name);
  x = v341.fields.x;
  *(UnityEngine_Vector3_o *)&v137 = UnityEngine_Vector3__get_normalized(v341, (const MethodInfo *)&methoda.name);
  if ( !v121 )
    goto LABEL_109;
  v140 = v121;
  v141 = 136LL;
  if ( v121->fields._type_k__BackingField )
    v141 = 132LL;
  v142 = v139;
  v143 = (System_Int32_array ***)(v87 + 24);
  v331 = v137;
  v332 = v138;
  v144 = x - *(float *)((char *)&v333->klass + v141);
  if ( v144 > 0.0 )
  {
    v145 = v102 + (float)(v137 * v144);
    v328 = v108;
    v329 = v110;
    v146 = v103 + (float)(v138 * v144);
    v330 = v109;
    v147 = v104 + (float)(v139 * v144);
    gameObject = UnityEngine_Component__get_gameObject(v333, 0LL);
    v149 = *(float *)&v333[5].monitor;
    v150 = gameObject;
    v151 = (WarBoardMovePerformance_o *)sub_B5D694(WarBoardMovePerformance_TypeInfo);
    v342.fields.x = v102;
    v342.fields.y = v103;
    v342.fields.z = v104;
    v348.fields.x = v145;
    v348.fields.y = v146;
    v348.fields.z = v147;
    v152 = (EventMissionProgressRequest_Argument_ProgressData_o *)v151;
    WarBoardMovePerformance___ctor(v151, v150, v342, v348, v149, 5, v153);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v118,
      v152,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v103 = v146;
    v108 = v328;
    v110 = v329;
    v104 = v147;
    v109 = v330;
    v102 = v145;
  }
  v154 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v154,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      1,
                                      ParticipantVals,
                                      0LL);
  if ( !v154 )
    goto LABEL_109;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v154,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v155 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                          (WarBoardManager_o *)Instance,
                                                          19,
                                                          ParticipantVals,
                                                          0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v154,
    v155,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  v156 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                          (WarBoardManager_o *)Instance,
                                                          39,
                                                          ParticipantVals,
                                                          0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v154,
    v156,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v121->fields._type_k__BackingField != 1 )
  {
    v178 = sub_B5D694(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v178,
      0LL);
    if ( !v178 )
      goto LABEL_109;
    *(_QWORD *)(v178 + 32) = v87;
    v185 = (Il2CppObject **)(v178 + 32);
    sub_B5D560(
      (BattleServantConfConponent_o *)(v178 + 32),
      (System_Int32_array **)v87,
      v179,
      v180,
      v181,
      v182,
      v183,
      v184);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v118,
      (System_Collections_Generic_IEnumerable_T__o *)v154,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    v186 = *(float *)&v333[5].fields.m_CachedPtr;
    v187 = v331 * v186;
    v188 = v332 * v186;
    v189 = v142 * v186;
    v190 = v110 - v189;
    v191 = v102 + v187;
    v192 = v103 + v188;
    v193 = v104 + v189;
    v344.fields.x = (float)(v108 - v187) - v191;
    v344.fields.y = (float)(v109 - v188) - (float)(v103 + v188);
    v344.fields.z = v190 - v193;
    methoda.methodPointer = *(Il2CppMethodPointer *)&v344.fields.x;
    *(float *)&methoda.invoker_method = v190 - v193;
    normalized = UnityEngine_Vector3__get_normalized(v344, &methoda);
    v194 = normalized.fields.x;
    y = normalized.fields.y;
    z = normalized.fields.z;
    magnitude = UnityEngine_Vector3__get_magnitude(normalized, &methoda);
    v198 = v191 + (float)((float)(v194 * magnitude) * 0.5);
    v199 = v192 + (float)((float)(y * magnitude) * 0.5);
    *(float *)&methoda.methodPointer = v198;
    *((float *)&methoda.methodPointer + 1) = v199;
    *(float *)&methoda.invoker_method = v193 + (float)((float)(z * magnitude) * 0.5);
    Instance = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))v333->klass[2]._1.events)(
                                        v333,
                                        v333->klass[2]._1.properties);
    *((float *)&methoda.methodPointer + 1) = v199 + v200;
    if ( !*(_QWORD *)(v178 + 32) )
      goto LABEL_109;
    v201 = *(_QWORD *)(*(_QWORD *)(v178 + 32) + 24LL);
    if ( !v201 )
      goto LABEL_109;
    v202 = *(_QWORD *)(v201 + 40);
    if ( !v202 )
      goto LABEL_109;
    Instance = *(System_Int32_array ***)(v202 + 72);
    if ( !Instance )
      goto LABEL_109;
    ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
    v204 = *(_QWORD *)(v178 + 32);
    *(float *)(v178 + 16) = ZoomSize;
    if ( !v204 )
      goto LABEL_109;
    v205 = *(_QWORD *)(v204 + 24);
    if ( !v205 )
      goto LABEL_109;
    v206 = *(_QWORD *)(v205 + 40);
    if ( !v206 )
      goto LABEL_109;
    Instance = *(System_Int32_array ***)(v206 + 64);
    if ( !Instance )
      goto LABEL_109;
    ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0LL);
    v209 = *(_QWORD *)(v178 + 32);
    *(UnityEngine_Vector2_o *)(v178 + 20) = ScrlPos;
    if ( !v209 )
      goto LABEL_109;
    v210 = *(WarBoardManager_o **)(v209 + 24);
    *(_QWORD *)&v346.fields.x = methoda.methodPointer;
    v346.fields.z = *(float *)&methoda.invoker_method;
    *(_QWORD *)&v339.fields.value.fields.x = &v335;
    *(_QWORD *)&v335.fields.value.fields.x = 0LL;
    *(_QWORD *)&v335.fields.value.fields.z = 0LL;
    *(_QWORD *)&v339.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v339, v346, v207);
    v211 = *((float *)&v333[5].fields + 1);
    p_size = (System_Nullable_float__o)&size;
    size = 0LL;
    System_Nullable_float____ctor(p_size, v211, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
    if ( !v210 )
      goto LABEL_109;
    v338 = size;
    CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                     v210,
                                                                                     v335,
                                                                                     v338,
                                                                                     1,
                                                                                     0,
                                                                                     1,
                                                                                     0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v118,
      CameraPerformanceTask,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    if ( !*v185 )
      goto LABEL_109;
    Instance = (System_Int32_array **)(*v185)[1].monitor;
    if ( !Instance )
      goto LABEL_109;
    v347.fields.y = *((float *)&methoda.methodPointer + 1);
    v347.fields.z = *(float *)&methoda.invoker_method;
    v347.fields.x = *(float *)&methoda.methodPointer;
    Instance = (System_Int32_array **)WarBoardManager__CreateEncountkEffectTask(
                                        (WarBoardManager_o *)Instance,
                                        v347,
                                        1,
                                        0LL);
    v219 = Instance;
    v220 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v220 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v220->static_fields;
    _9__63_1 = static_fields->__9__63_1;
    if ( !_9__63_1 )
    {
      if ( (BYTE3(v220->vtable._0_Equals.methodPtr) & 4) != 0 && !v220->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v220);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v223 = (Il2CppObject *)static_fields->__9;
      _9__63_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__63_1, v223, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, 0LL);
      v224 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v224->__9__63_1 = _9__63_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v224->__9__63_1,
        (System_Int32_array **)_9__63_1,
        v225,
        v226,
        v227,
        v228,
        v229,
        v230);
    }
    if ( !v219 )
      goto LABEL_109;
    v219[10] = (System_Int32_array *)_9__63_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v219 + 10),
      (System_Int32_array **)_9__63_1,
      v213,
      v214,
      v215,
      v216,
      v217,
      v218);
    v231 = (System_Delegate_o *)v219[5];
    v232 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v232,
      (Il2CppObject *)v178,
      Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
      0LL);
    v233 = (System_Int32_array **)System_Delegate__Combine(v231, (System_Delegate_o *)v232, 0LL);
    v135 = v233;
    if ( !v233 || *v233 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v219[5] = (System_Int32_array *)v233;
      sub_B5D560((BattleServantConfConponent_o *)(v219 + 5), v233, v234, v235, v236, v237, v238, v239);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v118,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v219,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      v240 = &v118->fields._size;
      if ( !v118->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v241 = v118->fields._items->m_Items[0];
      if ( !v241 )
        goto LABEL_109;
      v243 = *(System_Delegate_o **)&v241->fields.addCount;
      p_addCount = (BattleServantConfConponent_o *)&v241->fields.addCount;
      v244 = *v185;
      v245 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v245,
        v244,
        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
        0LL);
      v246 = (System_Int32_array **)System_Delegate__Combine(v243, (System_Delegate_o *)v245, 0LL);
      v135 = v246;
      if ( !v246 || *v246 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        p_addCount->klass = (BattleServantConfConponent_c *)v246;
        sub_B5D560(p_addCount, v246, v247, v248, v249, v250, v251, v252);
        goto LABEL_93;
      }
    }
LABEL_112:
    v326 = (WarBoardPieceData_o *)sub_B5D990(v135);
    WarBoardPieceData__get_isServant(v326, v327);
    return;
  }
  v157 = *(float *)&v333[6].klass;
  v158 = v102 + (float)(v331 * v157);
  v159 = v103 + (float)(v332 * v157);
  v160 = v104 + (float)(v142 * v157);
  v161 = UnityEngine_Component__get_gameObject(v333, 0LL);
  v162 = *(float *)&v333[5].monitor;
  v163 = v161;
  v164 = (WarBoardMovePerformance_o *)sub_B5D694(WarBoardMovePerformance_TypeInfo);
  v343.fields.x = v158;
  v343.fields.y = v159;
  v343.fields.z = v160;
  v349.fields.x = v102;
  v349.fields.y = v103;
  v349.fields.z = v104;
  v165 = (System_Int32_array **)v164;
  WarBoardMovePerformance___ctor(v164, v163, v343, v349, v162, 4, v166);
  v168 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                  v140,
                                                                  v167);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  if ( !*v123 )
    goto LABEL_109;
  v169 = Instance;
  Instance = (System_Int32_array **)(*v123)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_109;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0LL);
  v171 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v171,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( v140->fields._forceId_k__BackingField || v140->fields._groupId_k__BackingField )
  {
    v173 = 0;
    if ( !v169 )
      goto LABEL_109;
  }
  else
  {
    v173 = v140->fields._type_k__BackingField == 1;
    if ( !v169 )
      goto LABEL_109;
  }
  if ( v173 )
  {
    v174 = 11;
    v175 = 1;
    v176 = (WarBoardMessageMaster_o *)v169;
    v177 = id;
  }
  else
  {
    v174 = 9;
    v176 = (WarBoardMessageMaster_o *)v169;
    v177 = id;
    v175 = 0;
  }
  Instance = (System_Int32_array **)WarBoardMessageMaster__GetMessageTasks(
                                      v176,
                                      v177,
                                      v174,
                                      v140->fields._breakPoint_k__BackingField,
                                      v175,
                                      v172);
  if ( !Instance )
    goto LABEL_109;
  v253 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v154,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v253,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v118,
      v253,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (System_Int32_array **)sub_B5D5DC(WarBoardTaskBase___TypeInfo, 5LL);
  if ( !Instance )
LABEL_109:
    sub_B5D69C(Instance, v89);
  v260 = Instance;
  if ( v165 )
  {
    Instance = (System_Int32_array **)sub_B5D684(v165, *(_QWORD *)&(*Instance)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( !*((_DWORD *)v260 + 6) )
    goto LABEL_110;
  v260[4] = (System_Int32_array *)v165;
  sub_B5D560((BattleServantConfConponent_o *)(v260 + 4), v165, v254, v255, v256, v257, v258, v259);
  Instance = (System_Int32_array **)v140->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_109;
  v261 = *v123;
  Instance = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*Instance)->m_Items[207])(
                                      Instance,
                                      *(_QWORD *)&(*Instance)->m_Items[209]);
  if ( !v261 )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__CreateAttackEffectTask(
                                      v261,
                                      *(UnityEngine_Vector3_o *)&v262,
                                      0,
                                      0LL);
  v271 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B5D684(Instance, *(_QWORD *)&(*v260)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v260 + 6) <= 1u )
    goto LABEL_110;
  v260[5] = (System_Int32_array *)v271;
  sub_B5D560((BattleServantConfConponent_o *)(v260 + 5), v271, v265, v266, v267, v268, v269, v270);
  Instance = (System_Int32_array **)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v278 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B5D684(Instance, *(_QWORD *)&(*v260)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v260 + 6) <= 2u )
    goto LABEL_110;
  v260[6] = (System_Int32_array *)v278;
  sub_B5D560((BattleServantConfConponent_o *)(v260 + 6), v278, v272, v273, v274, v275, v276, v277);
  Instance = (System_Int32_array **)v140->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_109;
  Instance = (System_Int32_array **)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                      (WarBoardPieceBaseComponent_o *)Instance,
                                      (System_String_o *)StringLiteral_9057/*"MasterDamage"*/,
                                      v279);
  v286 = Instance;
  if ( Instance )
  {
    Instance = (System_Int32_array **)sub_B5D684(Instance, *(_QWORD *)&(*v260)->m_Items[9]);
    if ( !Instance )
      goto LABEL_111;
  }
  if ( *((_DWORD *)v260 + 6) <= 3u )
    goto LABEL_110;
  v260[7] = (System_Int32_array *)v286;
  sub_B5D560((BattleServantConfConponent_o *)(v260 + 7), v286, v280, v281, v282, v283, v284, v285);
  v287 = (WarBoardOrthostichySchedule_o *)sub_B5D694(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_22990060(v287, v168, v288);
  if ( v287 )
  {
    Instance = (System_Int32_array **)sub_B5D684(v287, *(_QWORD *)&(*v260)->m_Items[9]);
    if ( !Instance )
    {
LABEL_111:
      v325 = sub_B5D6BC();
      sub_B5D668(v325, 0LL);
    }
  }
  if ( *((_DWORD *)v260 + 6) <= 4u )
  {
LABEL_110:
    v324 = sub_B5D6C8(Instance);
    sub_B5D668(v324, 0LL);
  }
  v260[8] = (System_Int32_array *)v287;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v260 + 8),
    (System_Int32_array **)v287,
    v289,
    v290,
    v291,
    v292,
    v293,
    v294);
  v295 = sub_B5D694(WarBoardParallelSchedule_TypeInfo);
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v295, 0LL);
  *(_QWORD *)(v295 + 56) = v260;
  sub_B5D560((BattleServantConfConponent_o *)(v295 + 56), v260, v296, v297, v298, v299, v300, v301);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v118,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v295,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v240 = &v118->fields._size;
LABEL_93:
  if ( *v240 < 1 )
    return;
  v302 = v118->fields._items->m_Items[0];
  if ( !v302 )
    goto LABEL_109;
  v305 = *(System_Delegate_o **)&v302->fields.addCount;
  v303 = (BattleServantConfConponent_o *)&v302->fields.addCount;
  v304 = v305;
  v306 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceBaseComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v306 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  v307 = v306->static_fields;
  _9__63_4 = v307->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( (BYTE3(v306->vtable._0_Equals.methodPtr) & 4) != 0 && !v306->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v306);
      v307 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v309 = (Il2CppObject *)v307->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v309, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0LL);
    v310 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v310->__9__63_4 = _9__63_4;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v310->__9__63_4,
      (System_Int32_array **)_9__63_4,
      v311,
      v312,
      v313,
      v314,
      v315,
      v316);
  }
  v317 = (System_Int32_array **)System_Delegate__Combine(v304, (System_Delegate_o *)_9__63_4, 0LL);
  v135 = v317;
  if ( v317 && *v317 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    goto LABEL_112;
  v303->klass = (BattleServantConfConponent_c *)v317;
  sub_B5D560(v303, v317, v318, v319, v320, v321, v322, v323);
  Instance = *v143;
  if ( !*v143 )
    goto LABEL_109;
  WarBoardManager__AddTask_18807556(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v118,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttackResume(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WarBoardData_o *Instance; // x0
  __int64 v10; // x1
  WarBoardManager_o *v11; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardData_o *v13; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v17; // s11
  float v18; // s0
  float v19; // s1
  float v20; // s2
  __int64 v21; // x8
  float v22; // s15
  float v23; // s12
  float v24; // s13
  float v25; // s14
  MethodInfo v26; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7621 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, v6, v7, v8);
    byte_42E7621 = 1;
  }
  LODWORD(v26.invoker_method) = 0;
  v26.methodPointer = 0LL;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  v11 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_15;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_23181536(Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_15;
  v13 = Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v11, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v28 = WarBoardManager__GetSquarePosition(v11, squareIndex, 0LL);
  v28.fields.x = v28.fields.x - x;
  v28.fields.y = v28.fields.y - y;
  v28.fields.z = v28.fields.z - z;
  v26.methodPointer = *(Il2CppMethodPointer *)&v28.fields.x;
  *(float *)&v26.invoker_method = v28.fields.z;
  v29.fields.x = UnityEngine_Vector3__get_magnitude(v28, &v26);
  v17 = v29.fields.x;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_normalized(v29, &v26);
  if ( !v13 )
    goto LABEL_15;
  v21 = 136LL;
  if ( LODWORD(v13->fields.stageEntity) )
    v21 = 132LL;
  v22 = *(float *)((char *)&this->klass + v21);
  v23 = v18;
  v24 = v19;
  v25 = v20;
  Instance = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Instance = (WarBoardData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Instance, v10);
  }
  v30.fields.x = x + (float)(v23 * (float)(v17 - v22));
  v30.fields.y = y + (float)(v24 * (float)(v17 - v22));
  v30.fields.z = z + (float)(v25 * (float)(v17 - v22));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v30, 0LL);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  void *monitor; // x8
  WarBoardUserServantData_o *v25; // x0
  WebViewManager_o *Instance; // x25
  const MethodInfo_234ED3C *v27; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardTaskBase_array *v29; // x26
  WebViewManager_o *v30; // x27
  const MethodInfo_234ED3C *v31; // x2
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x24
  _DWORD *v39; // x8
  __int64 v40; // x24
  UnityEngine_Component_c *klass; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  System_Nullable_Vector3__o v44; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v45; // 0:x3.8
  System_Nullable_float__o v46; // 0:x3.8
  System_Nullable_Vector3__o v47; // 0:x0.16
  System_Nullable_Vector3__o v48; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  v14 = (UnityEngine_Component_o *)this;
  if ( (byte_42E7628 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__Add__,
      oldBreakPoint,
      LODWORD(cameraSize.fields.value),
      taskList);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19, v20);
    this = (WarBoardPieceBaseComponent_o *)sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v21, v22, v23);
    byte_42E7628 = 1;
  }
  if ( cameraMove )
  {
    monitor = v14[8].monitor;
    if ( !monitor )
      goto LABEL_30;
    v25 = (WarBoardUserServantData_o *)*((_QWORD *)monitor + 21);
    if ( !v25
      || (this = (WarBoardPieceBaseComponent_o *)WarBoardUserServantData__IsBoss(v25, 0LL),
          ((unsigned __int8)this & 1) == 0) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform(v14, 0LL);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v47.fields.value.fields.x = &v44;
          *(_QWORD *)&v44.fields.value.fields.x = 0LL;
          *(_QWORD *)&v44.fields.value.fields.z = 0LL;
          *(_QWORD *)&v47.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v47, localPosition, v27);
          if ( Instance )
          {
            v45 = cameraSize;
            CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                             (WarBoardManager_o *)Instance,
                                                                                             v44,
                                                                                             v45,
                                                                                             1,
                                                                                             0,
                                                                                             1,
                                                                                             0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
              CameraPerformanceTask,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
            goto LABEL_19;
          }
        }
LABEL_30:
        sub_B5D69C(this, *(_QWORD *)&oldBreakPoint);
      }
      v29 = (WarBoardTaskBase_array *)sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
      v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform(v14, 0LL);
      if ( !this )
        goto LABEL_30;
      v50 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      *(_QWORD *)&v48.fields.value.fields.x = &v44;
      v44 = (System_Nullable_Vector3__o)0LL;
      *(_QWORD *)&v48.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      System_Nullable_Vector3____ctor(v48, v50, v31);
      if ( !v30 )
        goto LABEL_30;
      v46 = cameraSize;
      this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                               (WarBoardManager_o *)v30,
                                               v44,
                                               v46,
                                               1,
                                               0,
                                               1,
                                               0LL);
      if ( !v29 )
        goto LABEL_30;
      v38 = (System_Int32_array **)this;
      if ( this )
      {
        this = (WarBoardPieceBaseComponent_o *)sub_B5D684(this, v29->obj.klass->_1.element_class);
        if ( !this )
        {
          v43 = sub_B5D6BC();
          sub_B5D668(v43, 0LL);
        }
      }
      if ( !v29->max_length )
      {
LABEL_32:
        v42 = sub_B5D6C8(this);
        sub_B5D668(v42, 0LL);
      }
      v29->m_Items[0] = (WarBoardTaskBase_o *)v38;
      sub_B5D560((BattleServantConfConponent_o *)v29->m_Items, v38, v32, v33, v34, v35, v36, v37);
      if ( !Instance )
        goto LABEL_30;
      WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v29, 0LL);
    }
  }
LABEL_19:
  v39 = v14[8].monitor;
  if ( !v39 )
    goto LABEL_30;
  v40 = 0LL;
  if ( dummyPoint < 0 )
    dummyPoint = v39[13];
  while ( (int)v40 < v39[14] )
  {
    klass = v14[8].klass;
    if ( !klass )
      goto LABEL_30;
    if ( (unsigned int)v40 >= LODWORD(klass->_1.namespaze) )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v40);
    if ( this )
    {
      if ( (int)v40 >= oldBreakPoint || dummyPoint > (int)v40 )
      {
        WarBoardBreakPointComponent__SetActive((WarBoardBreakPointComponent_o *)this, dummyPoint > (int)v40, 0, 0LL);
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
      v39 = v14[8].monitor;
      ++v40;
      if ( v39 )
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
    sub_B5D69C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  const MethodInfo *v9; // x2

  if ( (byte_42E761D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E761D = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B5D69C(Instance, v7);
  v8 = 20 * (dispPriotiry - WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL));
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, v8, v9);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 v54; // x19
  WarBoardPieceData_o *Instance; // x0
  const MethodInfo *v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  WarBoardPieceData_o **v63; // x20
  System_Int32_array **Piece_23181536; // x0
  WarBoardPieceData_o **v65; // x23
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x8
  System_Int32_array **Square; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x25
  System_Delegate_o *v81; // x26
  WarBoardTaskBase_TaskCallback_o *v82; // x27
  System_Int32_array **v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x8
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v99; // x28
  struct WarBoardPieceData_o *v100; // x8
  UnityEngine_GameObject_o *v101; // x26
  float v102; // s0
  float v103; // s1
  float v104; // s2
  float v105; // s8
  float v106; // s9
  float v107; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float z; // s14
  WarBoardMovePerformance_o *v112; // x0
  WarBoardMovePerformance_o *v113; // x27
  const MethodInfo *v114; // x3
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x26
  UnityEngine_GameObject_o *v122; // x27
  float v123; // s0
  float v124; // s1
  float v125; // s2
  struct WarBoardPieceData_o *v126; // x8
  float v127; // s8
  float v128; // s9
  float v129; // s10
  float v130; // s13
  float v131; // s11
  float v132; // s12
  float v133; // s14
  WarBoardMovePerformance_o *v134; // x0
  System_Int32_array **v135; // x28
  const MethodInfo *v136; // x3
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  int32_t v149; // w28
  __int64 v150; // x25
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_Delegate_o *v157; // x24
  WarBoardTaskBase_TaskCallback_o *v158; // x27
  System_Int32_array **v159; // x0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Collections_Generic_List_WarBoardTaskBase__o *v166; // x26
  struct WarBoardPieceData_o *v167; // x8
  System_Delegate_o *EndCallback; // x28
  WarBoardTaskBase_TaskCallback_o *v169; // x24
  System_Int32_array **v170; // x0
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  struct WarBoardPieceData_o *v177; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v178; // x22
  System_Int32_array **PieceEventVals; // x0
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  const MethodInfo *v186; // x1
  System_Int32_array *v187; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v189; // x0
  WarBoardManager_o *v190; // x20
  WarBoardTaskBase_array *v191; // x21
  __int64 v192; // x22
  WarBoardTaskBase_TaskCallback_o *v193; // x23
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  __int64 v206; // x0
  __int64 v207; // x0
  WarBoardPieceData_o *v208; // x0
  const MethodInfo *v209; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v210; // [xsp+18h] [xbp-88h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v212; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v213; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v214; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v215; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v216; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E761E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&int___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__, v27, v28, v29);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__, v30, v31, v32);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__, v33, v34, v35);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__, v36, v37, v38);
    sub_B5D5C4(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&WarBoardMovePerformance_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&WarBoardParallelSchedule_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v51, v52, v53);
    byte_42E761E = 1;
  }
  v54 = sub_B5D694(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v54,
    0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v54 )
    goto LABEL_64;
  *(_QWORD *)(v54 + 48) = Instance;
  v63 = (WarBoardPieceData_o **)(v54 + 48);
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 48), (System_Int32_array **)Instance, v57, v58, v59, v60, v61, v62);
  if ( !*(_QWORD *)(v54 + 48) )
    goto LABEL_64;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v54 + 48) + 432LL);
  if ( !Instance )
    goto LABEL_64;
  Piece_23181536 = (System_Int32_array **)WarBoardData__GetPiece_23181536((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v54 + 40) = Piece_23181536;
  v65 = (WarBoardPieceData_o **)(v54 + 40);
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 40), Piece_23181536, v66, v67, v68, v69, v70, v71);
  v72 = *(_QWORD *)(v54 + 48);
  if ( !v72 )
    goto LABEL_64;
  Instance = *(WarBoardPieceData_o **)(v72 + 432);
  if ( !Instance )
    goto LABEL_64;
  Square = (System_Int32_array **)WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v54 + 16) = Square;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), Square, v74, v75, v76, v77, v78, v79);
  v80 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v80, 0LL, 0LL);
  if ( !v80 )
    goto LABEL_64;
  v81 = *(System_Delegate_o **)(v80 + 32);
  v82 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v82,
    (Il2CppObject *)v54,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0LL);
  v83 = (System_Int32_array **)System_Delegate__Combine(v81, (System_Delegate_o *)v82, 0LL);
  v90 = v83;
  if ( !v83 || *v83 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v80 + 32) = v83;
    sub_B5D560((BattleServantConfConponent_o *)(v80 + 32), v83, v84, v85, v86, v87, v88, v89);
    Instance = (WarBoardPieceData_o *)sub_B5D5DC(int___TypeInfo, 2LL);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_64;
    v56 = (const MethodInfo *)Instance;
    if ( !Instance )
      goto LABEL_64;
    groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
    if ( !groupId_k__BackingField )
      goto LABEL_65;
    Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField;
    if ( groupId_k__BackingField == 1 )
      goto LABEL_65;
    Instance->fields._currentActionCount_k__BackingField = squareIndex;
    *(_QWORD *)(v54 + 24) = Instance;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v54 + 24),
      (System_Int32_array **)Instance,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
    v210 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v210,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    v99 = *(_QWORD *)(v54 + 40);
    Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v100 = this->fields.pieceData;
    if ( !v100 )
      goto LABEL_64;
    v101 = (UnityEngine_GameObject_o *)Instance;
    Instance = *(WarBoardPieceData_o **)(v54 + 48);
    if ( !Instance )
      goto LABEL_64;
    *(UnityEngine_Vector3_o *)&v102 = WarBoardManager__GetSquarePosition(
                                        (WarBoardManager_o *)Instance,
                                        v100->fields._nowSquareIndex_k__BackingField,
                                        0LL);
    Instance = *v63;
    if ( !*v63 )
      goto LABEL_64;
    v105 = v102;
    v106 = v103;
    v107 = v104;
    SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    x = SquarePosition.fields.x;
    y = SquarePosition.fields.y;
    z = SquarePosition.fields.z;
    v112 = (WarBoardMovePerformance_o *)sub_B5D694(WarBoardMovePerformance_TypeInfo);
    v212.fields.x = v105;
    v212.fields.y = v106;
    v212.fields.z = v107;
    v215.fields.x = x;
    v215.fields.y = y;
    v215.fields.z = z;
    v113 = v112;
    WarBoardMovePerformance___ctor(v112, v101, v212, v215, pixelPerSecond, 0, v114);
    if ( v99 )
    {
      Instance = (WarBoardPieceData_o *)sub_B5D5DC(WarBoardTaskBase___TypeInfo, 3LL);
      if ( !Instance )
        goto LABEL_64;
      v121 = (System_Int32_array **)Instance;
      if ( v113 )
      {
        Instance = (WarBoardPieceData_o *)sub_B5D684(v113, Instance->klass->_1.element_class);
        if ( !Instance )
          goto LABEL_66;
      }
      if ( !*((_DWORD *)v121 + 6) )
        goto LABEL_65;
      v121[4] = (System_Int32_array *)v113;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v121 + 4),
        (System_Int32_array **)v113,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
      if ( !*v65 )
        goto LABEL_64;
      Instance = (WarBoardPieceData_o *)(*v65)->fields.pieceComponent;
      if ( !Instance )
        goto LABEL_64;
      Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v63 )
        goto LABEL_64;
      v122 = (UnityEngine_GameObject_o *)Instance;
      *(UnityEngine_Vector3_o *)&v123 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v63, squareIndex, 0LL);
      v126 = this->fields.pieceData;
      if ( !v126 )
        goto LABEL_64;
      Instance = *v63;
      if ( !*v63 )
        goto LABEL_64;
      v127 = v123;
      v128 = v124;
      v129 = v125;
      v213 = WarBoardManager__GetSquarePosition(
               (WarBoardManager_o *)Instance,
               v126->fields._nowSquareIndex_k__BackingField,
               0LL);
      v130 = this->fields.pixelPerSecond;
      v131 = v213.fields.x;
      v132 = v213.fields.y;
      v133 = v213.fields.z;
      v134 = (WarBoardMovePerformance_o *)sub_B5D694(WarBoardMovePerformance_TypeInfo);
      v214.fields.x = v127;
      v214.fields.y = v128;
      v214.fields.z = v129;
      v216.fields.x = v131;
      v216.fields.y = v132;
      v216.fields.z = v133;
      v135 = (System_Int32_array **)v134;
      WarBoardMovePerformance___ctor(v134, v122, v214, v216, v130, 0, v136);
      if ( v135 )
      {
        Instance = (WarBoardPieceData_o *)sub_B5D684(v135, *(_QWORD *)&(*v121)->m_Items[9]);
        if ( !Instance )
          goto LABEL_66;
      }
      if ( *((_DWORD *)v121 + 6) <= 1u )
        goto LABEL_65;
      v121[5] = (System_Int32_array *)v135;
      sub_B5D560((BattleServantConfConponent_o *)(v121 + 5), v135, v137, v138, v139, v140, v141, v142);
      Instance = (WarBoardPieceData_o *)sub_B5D684(v80, *(_QWORD *)&(*v121)->m_Items[9]);
      if ( !Instance )
        goto LABEL_66;
      if ( *((_DWORD *)v121 + 6) <= 2u )
        goto LABEL_65;
      v121[6] = (System_Int32_array *)v80;
      v149 = squareIndex;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v121 + 6),
        (System_Int32_array **)v80,
        v143,
        v144,
        v145,
        v146,
        v147,
        v148);
      v150 = sub_B5D694(WarBoardParallelSchedule_TypeInfo);
      WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v150, 0LL);
      *(_QWORD *)(v150 + 56) = v121;
      sub_B5D560((BattleServantConfConponent_o *)(v150 + 56), v121, v151, v152, v153, v154, v155, v156);
      if ( !v150 )
        goto LABEL_64;
      v157 = *(System_Delegate_o **)(v150 + 40);
      v158 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v158,
        (Il2CppObject *)v54,
        Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
        0LL);
      v159 = (System_Int32_array **)System_Delegate__Combine(v157, (System_Delegate_o *)v158, 0LL);
      v90 = v159;
      if ( !v159 || *v159 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        *(_QWORD *)(v150 + 40) = v159;
        sub_B5D560((BattleServantConfConponent_o *)(v150 + 40), v159, v160, v161, v162, v163, v164, v165);
        v166 = (System_Collections_Generic_List_WarBoardTaskBase__o *)v210;
        if ( !v210 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v210,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v150,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        v167 = this->fields.pieceData;
        if ( !v167 || !*v65 )
          goto LABEL_64;
        (*v65)->fields._nowSquareIndex_k__BackingField = v167->fields._nowSquareIndex_k__BackingField;
LABEL_45:
        v177 = this->fields.pieceData;
        if ( !v177 )
          goto LABEL_64;
        v177->fields._nowSquareIndex_k__BackingField = v149;
        v178 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v178,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
        Instance = this->fields.pieceData;
        if ( !Instance )
          goto LABEL_64;
        PieceEventVals = (System_Int32_array **)WarBoardPieceData__CreatePieceEventVals(Instance, v56);
        *(_QWORD *)(v54 + 32) = PieceEventVals;
        sub_B5D560((BattleServantConfConponent_o *)(v54 + 32), PieceEventVals, v180, v181, v182, v183, v184, v185);
        Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Instance )
          goto LABEL_64;
        Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                            (WarBoardManager_o *)Instance,
                                            30,
                                            *(System_Int32_array **)(v54 + 32),
                                            0LL);
        if ( !v178 )
          goto LABEL_64;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v178,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        if ( *v65 )
        {
          v187 = WarBoardPieceData__CreatePieceEventVals(*v65, v186);
          Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !Instance )
            goto LABEL_64;
          EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                        (WarBoardManager_o *)Instance,
                                                                        30,
                                                                        v187,
                                                                        0LL);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v178,
            EventTasks,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        }
        Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Instance )
          goto LABEL_64;
        v189 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)Instance,
                                                                36,
                                                                0LL,
                                                                0LL);
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v178,
          v189,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
        if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v178,
               (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
        {
          Instance = *v63;
          if ( !*v63 )
            goto LABEL_64;
          WarBoardManager__AddTask_18807556(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v178,
            0LL);
        }
        Instance = *v63;
        if ( !*v63 )
          goto LABEL_64;
        WarBoardManager__AddTask_18807556((WarBoardManager_o *)Instance, 0, v166, 0LL);
        v190 = *(WarBoardManager_o **)(v54 + 48);
        v191 = (WarBoardTaskBase_array *)sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
        v192 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
        WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v192, 0LL, 0LL);
        v193 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
        WarBoardTaskBase_TaskCallback___ctor(
          v193,
          (Il2CppObject *)v54,
          Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
          0LL);
        if ( !v192
          || (*(_QWORD *)(v192 + 32) = v193,
              sub_B5D560(
                (BattleServantConfConponent_o *)(v192 + 32),
                (System_Int32_array **)v193,
                v194,
                v195,
                v196,
                v197,
                v198,
                v199),
              !v191) )
        {
LABEL_64:
          sub_B5D69C(Instance, v56);
        }
        Instance = (WarBoardPieceData_o *)sub_B5D684(v192, v191->obj.klass->_1.element_class);
        if ( Instance )
        {
          if ( v191->max_length )
          {
            v191->m_Items[0] = (WarBoardTaskBase_o *)v192;
            sub_B5D560(
              (BattleServantConfConponent_o *)v191->m_Items,
              (System_Int32_array **)v192,
              v200,
              v201,
              v202,
              v203,
              v204,
              v205);
            if ( v190 )
            {
              WarBoardManager__AddTask(v190, 0, v191, 0LL);
              Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( Instance )
              {
                WarBoardManager__JudgmentGameSet((WarBoardManager_o *)Instance, 0LL);
                return;
              }
            }
            goto LABEL_64;
          }
LABEL_65:
          v206 = sub_B5D6C8(Instance);
          sub_B5D668(v206, 0LL);
        }
LABEL_66:
        v207 = sub_B5D6BC();
        sub_B5D668(v207, 0LL);
      }
    }
    else
    {
      if ( !v113 )
        goto LABEL_64;
      EndCallback = (System_Delegate_o *)v113->fields.EndCallback;
      v169 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
      WarBoardTaskBase_TaskCallback___ctor(
        v169,
        (Il2CppObject *)v54,
        Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
        0LL);
      v170 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v169, 0LL);
      v90 = v170;
      if ( !v170 || *v170 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        v113->fields.EndCallback = (struct WarBoardTaskBase_TaskCallback_o *)v170;
        sub_B5D560((BattleServantConfConponent_o *)&v113->fields.EndCallback, v170, v171, v172, v173, v174, v175, v176);
        v166 = (System_Collections_Generic_List_WarBoardTaskBase__o *)v210;
        if ( !v210 )
          goto LABEL_64;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v210,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v113,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v210,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
        v149 = squareIndex;
        goto LABEL_45;
      }
    }
  }
  v208 = (WarBoardPieceData_o *)sub_B5D990(v90);
  WarBoardPieceData__get_gameObject(v208, v209);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w1
  const MethodInfo *v8; // x2

  if ( (byte_42E761C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E761C = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B5D69C(Instance, v6);
  v7 = 20 * (WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL) - this->fields.dispPriotiry);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, v7, v8);
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

  if ( (byte_42E762A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18409/*"ef_dm_base"*/, (_DWORD)popText, popTextColor, taskList);
    byte_42E762A = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  __int64 v45; // x23
  WarBoardData_o *Instance; // x0
  __int64 v47; // x1
  WarBoardManager_o *v48; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardWallData_o *v50; // x21
  float x; // s14
  float y; // s15
  float z; // s8
  float v54; // s0
  float v55; // s1
  float v56; // s2
  float v57; // s11
  float v58; // s12
  float v59; // s13
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x20
  __int64 v67; // x24
  System_Delegate_o *v68; // x26
  WarBoardTaskBase_TaskCallback_o *v69; // x27
  System_Int32_array **v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  float v77; // s13
  float v78; // s1
  float v79; // s2
  float v80; // s0
  float v81; // s11
  float v82; // s12
  float v83; // s0
  float v84; // s13
  float v85; // s9
  float v86; // s10
  UnityEngine_GameObject_o *gameObject; // x23
  WarBoardMovePerformance_o *v88; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v89; // x24
  const MethodInfo *v90; // x3
  float lengthMoveAttack; // s0
  float v92; // s10
  float v93; // s11
  float v94; // s12
  UnityEngine_GameObject_o *v95; // x0
  float v96; // s13
  UnityEngine_GameObject_o *v97; // x22
  WarBoardMovePerformance_o *v98; // x0
  System_Int32_array **v99; // x24
  const MethodInfo *v100; // x3
  System_Collections_Generic_List_WarBoardTaskBase__o *v101; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v102; // x23
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x23
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x21
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x21
  WarBoardOrthostichySchedule_o *v124; // x21
  const MethodInfo *v125; // x2
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  __int64 v132; // x21
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  __int64 v139; // x0
  __int64 v140; // x0
  WarBoardPieceBaseComponent_o *v141; // x0
  int32_t v142; // w1
  const MethodInfo *v143; // x2
  float pixelPerSecond; // [xsp+8h] [xbp-A8h]
  float v145; // [xsp+Ch] [xbp-A4h]
  MethodInfo methoda; // [xsp+10h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v154; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E7623 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__, v24, v25, v26);
    sub_B5D5C4(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&WarBoardMovePerformance_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&WarBoardOrthostichySchedule_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&WarBoardParallelSchedule_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v42, v43, v44);
    byte_42E7623 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v45 = sub_B5D694(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v45,
    0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  v48 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)WarBoardData__GetWall(Instance, squareIndex, 0, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_35;
  v50 = (WarBoardWallData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v48, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  *(UnityEngine_Vector3_o *)&v54 = WarBoardManager__GetSquarePosition(v48, squareIndex, 0LL);
  Instance = v48->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_35;
  v57 = v54;
  v58 = v55;
  v59 = v56;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0LL);
  if ( !v45 )
    goto LABEL_35;
  *(_QWORD *)(v45 + 16) = Instance;
  sub_B5D560((BattleServantConfConponent_o *)(v45 + 16), (System_Int32_array **)Instance, v60, v61, v62, v63, v64, v65);
  v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v66,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v67 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v67, 0LL, 0LL);
  if ( !v67 )
    goto LABEL_35;
  v68 = *(System_Delegate_o **)(v67 + 32);
  v69 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v69,
    (Il2CppObject *)v45,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0LL);
  v70 = (System_Int32_array **)System_Delegate__Combine(v68, (System_Delegate_o *)v69, 0LL);
  if ( v70 && *v70 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v141 = (WarBoardPieceBaseComponent_o *)sub_B5D990(v70);
    WarBoardPieceBaseComponent__OnAfterWallAttack(v141, v142, v143);
    return;
  }
  *(_QWORD *)(v67 + 32) = v70;
  sub_B5D560((BattleServantConfConponent_o *)(v67 + 32), v70, v71, v72, v73, v74, v75, v76);
  if ( !v66 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v66,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v148.fields.x = v57 - x;
  v148.fields.y = v58 - y;
  v148.fields.z = v59 - z;
  *(float *)&methoda.methodPointer = v57 - x;
  *((float *)&methoda.methodPointer + 1) = v58 - y;
  *(float *)&methoda.invoker_method = v59 - z;
  v149.fields.x = UnityEngine_Vector3__get_magnitude(v148, &methoda);
  v77 = v149.fields.x;
  *(UnityEngine_Vector3_o *)(&v78 - 1) = UnityEngine_Vector3__get_normalized(v149, &methoda);
  v81 = v80;
  v82 = v78;
  v83 = v77 - this->fields.lengthOnAttack;
  v84 = v79;
  if ( v83 > 0.0 )
  {
    v85 = x + (float)(v81 * v83);
    v145 = y + (float)(v78 * v83);
    v86 = z + (float)(v79 * v83);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v88 = (WarBoardMovePerformance_o *)sub_B5D694(WarBoardMovePerformance_TypeInfo);
    v150.fields.y = y;
    y = v145;
    v150.fields.x = x;
    v150.fields.z = z;
    v153.fields.x = v85;
    v153.fields.y = v145;
    v153.fields.z = v86;
    v89 = (EventMissionProgressRequest_Argument_ProgressData_o *)v88;
    WarBoardMovePerformance___ctor(v88, gameObject, v150, v153, pixelPerSecond, 5, v90);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v66,
      v89,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    x = v85;
    z = v86;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v92 = x + (float)(v81 * lengthMoveAttack);
  v93 = y + (float)(v82 * lengthMoveAttack);
  v94 = z + (float)(v84 * lengthMoveAttack);
  v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v96 = this->fields.pixelPerSecond;
  v97 = v95;
  v98 = (WarBoardMovePerformance_o *)sub_B5D694(WarBoardMovePerformance_TypeInfo);
  v151.fields.x = v92;
  v151.fields.y = v93;
  v151.fields.z = v94;
  v154.fields.x = x;
  v154.fields.y = y;
  v154.fields.z = z;
  v99 = (System_Int32_array **)v98;
  WarBoardMovePerformance___ctor(v98, v97, v151, v154, v96, 4, v100);
  if ( !v50 )
    goto LABEL_35;
  v101 = WarBoardWallData__DecrementBreakPointPerformance(v50, 1, 0LL);
  v102 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v102,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0LL, 0LL);
  if ( !v102 )
    goto LABEL_35;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v102,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v66,
    (System_Collections_Generic_IEnumerable_T__o *)v102,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)sub_B5D5DC(WarBoardTaskBase___TypeInfo, 4LL);
  if ( !Instance )
    goto LABEL_35;
  v109 = (System_Int32_array **)Instance;
  if ( v99 )
  {
    Instance = (WarBoardData_o *)sub_B5D684(v99, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( !*((_DWORD *)v109 + 6) )
    goto LABEL_36;
  v109[4] = (System_Int32_array *)v99;
  sub_B5D560((BattleServantConfConponent_o *)(v109 + 4), v99, v103, v104, v105, v106, v107, v108);
  Instance = (WarBoardData_o *)v50->fields.component;
  if ( !Instance )
    goto LABEL_35;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0LL);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v48, IconPosition, 0, 0LL);
  v116 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_B5D684(Instance, *(_QWORD *)&(*v109)->m_Items[9]);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( *((_DWORD *)v109 + 6) <= 1u )
    goto LABEL_36;
  v109[5] = (System_Int32_array *)v116;
  sub_B5D560((BattleServantConfConponent_o *)(v109 + 5), v116, v110, v111, v112, v113, v114, v115);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_35:
    sub_B5D69C(Instance, v47);
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v123 = (System_Int32_array **)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_B5D684(Instance, *(_QWORD *)&(*v109)->m_Items[9]);
    if ( !Instance )
      goto LABEL_37;
  }
  if ( *((_DWORD *)v109 + 6) <= 2u )
    goto LABEL_36;
  v109[6] = (System_Int32_array *)v123;
  sub_B5D560((BattleServantConfConponent_o *)(v109 + 6), v123, v117, v118, v119, v120, v121, v122);
  v124 = (WarBoardOrthostichySchedule_o *)sub_B5D694(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_22990060(v124, v101, v125);
  if ( v124 )
  {
    Instance = (WarBoardData_o *)sub_B5D684(v124, *(_QWORD *)&(*v109)->m_Items[9]);
    if ( !Instance )
    {
LABEL_37:
      v140 = sub_B5D6BC();
      sub_B5D668(v140, 0LL);
    }
  }
  if ( *((_DWORD *)v109 + 6) <= 3u )
  {
LABEL_36:
    v139 = sub_B5D6C8(Instance);
    sub_B5D668(v139, 0LL);
  }
  v109[7] = (System_Int32_array *)v124;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v109 + 7),
    (System_Int32_array **)v124,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  v132 = sub_B5D694(WarBoardParallelSchedule_TypeInfo);
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v132, 0LL);
  *(_QWORD *)(v132 + 56) = v109;
  sub_B5D560((BattleServantConfConponent_o *)(v132 + 56), v109, v133, v134, v135, v136, v137, v138);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v66,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v132,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( v66->fields._size >= 1 )
    WarBoardManager__AddTask_18807556(v48, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v66, 0LL);
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
    sub_B5D69C(simpleAnimation, animationName);
  SimpleAnimation__Play_16676044(simpleAnimation, animationName, 0LL);
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
    sub_B5D69C(this, method);
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
        v7 = sub_B5D6C8(this);
        sub_B5D668(v7, 0LL);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v25; // x1
  signed int max_length; // w8
  unsigned int v27; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v29; // x22
  unsigned __int64 v30; // x19
  UnityEngine_Object_o *v31; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x0

  if ( (byte_42E7613 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880,
      (_DWORD)parents,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Contains__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E7613 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v27];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v29 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_22;
      }
      v30 = 0LL;
      while ( v30 < (unsigned int)klass )
      {
        v31 = (UnityEngine_Object_o *)*((_QWORD *)&v29[1].monitor + v30);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v31,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v31,
                                                                                                 0LL);
          if ( !v23 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v23,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v29[1].klass;
        if ( (__int64)++v30 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v40 = sub_B5D6C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B5D668(v40, 0LL);
    }
  }
LABEL_22:
  if ( !v23
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                                                                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B5D69C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v25);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B5D560(
    (BattleServantConfConponent_o *)&button->fields.tweenTargets,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void __fastcall WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x0
  bool v9; // w1

  if ( (byte_42E7615 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42E7615 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v8 = this->fields.button;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    if ( enable )
    {
      v9 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v8, v9, 0, 0LL);
      return;
    }
    if ( v8->fields.mState )
    {
      v9 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v8, 0, 1, 0LL);
  }
}


bool __fastcall WarBoardPieceBaseComponent__SetEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        bool isDisp,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  __int64 v22; // x22
  peRenderTexture_ChangeLayerObject_o *v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *listEffectData; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v32; // x21
  struct UnityEngine_Renderer_o *renderer; // x21
  UnityEngine_Renderer_c *klass; // x8
  unsigned __int64 v35; // x22
  bool v36; // w19
  UnityEngine_Object_o *v37; // x20
  __int64 v38; // x0

  if ( (byte_42E7629 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__,
      (_DWORD)effectKey,
      isDisp,
      method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__, v16, v17, v18);
    sub_B5D5C4(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, v19, v20, v21);
    byte_42E7629 = 1;
  }
  v22 = sub_B5D694(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v22,
    0LL);
  if ( !v22 )
    goto LABEL_20;
  *(_QWORD *)(v22 + 16) = effectKey;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)effectKey, v25, v26, v27, v28, v29, v30);
  listEffectData = this->fields.listEffectData;
  v32 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v32,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  if ( !listEffectData )
    goto LABEL_20;
  v23 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listEffectData,
          (System_Predicate_T__o *)v32,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  if ( !v23 )
    return (char)v23;
  renderer = v23->fields.renderer;
  if ( !renderer )
LABEL_20:
    sub_B5D69C(v23, v24);
  klass = renderer[1].klass;
  if ( (int)klass >= 1 )
  {
    v35 = 0LL;
    v36 = isDisp;
    do
    {
      if ( v35 >= (unsigned int)klass )
      {
        v38 = sub_B5D6C8(v23);
        sub_B5D668(v38, 0LL);
      }
      v37 = (UnityEngine_Object_o *)*((_QWORD *)&renderer[1].monitor + v35);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v23 = (peRenderTexture_ChangeLayerObject_o *)UnityEngine_Object__op_Equality(v37, 0LL, 0LL);
      if ( ((unsigned __int8)v23 & 1) == 0 )
      {
        if ( !v37 )
          goto LABEL_20;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v37, v36, 0LL);
      }
      LODWORD(klass) = renderer[1].klass;
      ++v35;
    }
    while ( (__int64)v35 < (int)klass );
  }
  LOBYTE(v23) = 1;
  return (char)v23;
}


void __fastcall WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  UICommonButton_o *v8; // x0

  if ( (byte_42E7614 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42E7614 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v8 = this->fields.button;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UICommonButton__SetButtonEnableAndKeepState(v8, enable, 0, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__ShowActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardPieceBaseComponent_o *v4; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20
  UnityEngine_GameObject_o *v7; // x20
  bool activeSelf; // w0
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x10
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E7617 & 1) == 0 )
  {
    this = (WarBoardPieceBaseComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7617 = 1;
  }
  pieceData = v4->fields.pieceData;
  if ( !pieceData )
    goto LABEL_25;
  if ( pieceData->fields._limitActionCount_k__BackingField >= 1 )
  {
    this = (WarBoardPieceBaseComponent_o *)v4->fields.currentActionPointRoot;
    if ( !this )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    pieceData = v4->fields.pieceData;
    if ( !pieceData )
      goto LABEL_25;
  }
  this = (WarBoardPieceBaseComponent_o *)pieceData->fields._Cost_k__BackingField;
  if ( !this )
    goto LABEL_25;
  if ( WarBoardCost__get_HasCost((WarBoardCost_o *)this, 0LL) )
  {
    currentPieceActionPointRoot = (UnityEngine_Object_o *)v4->fields.currentPieceActionPointRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0LL, 0LL) )
    {
      this = (WarBoardPieceBaseComponent_o *)v4->fields.currentPieceActionPointRoot;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (WarBoardPieceBaseComponent_o *)v4->fields.currentActionPointRoot;
        if ( this )
        {
          v7 = v4->fields.currentPieceActionPointRoot;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          v9 = 96LL;
          if ( activeSelf )
            v9 = 108LL;
          if ( activeSelf )
            v10 = 112LL;
          else
            v10 = 100LL;
          if ( activeSelf )
            v11 = 116LL;
          else
            v11 = 104LL;
          v12.fields.y = *(float *)((char *)&v4->klass + v10);
          v12.fields.x = *(float *)((char *)&v4->klass + v9);
          v12.fields.z = *(float *)((char *)&v4->klass + v11);
          GameObjectExtensions__SetLocalPosition(v7, v12, 0LL);
          goto LABEL_24;
        }
      }
LABEL_25:
      sub_B5D69C(this, method);
    }
  }
LABEL_24:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v4->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    v4,
    v4->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__ShowActionTarget(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_B5D69C(0LL, method);
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
      SimpleAnimation__Stop_16673544(simpleAnimation, animationName, 0LL);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0LL);
        return;
      }
    }
LABEL_7:
    sub_B5D69C(simpleAnimation, animationName);
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
      sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  __int64 v71; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v72; // x23
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o **v81; // x21
  __int64 v82; // x22
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v83; // x23
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v91; // w23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v92; // x25
  System_Collections_Generic_IEnumerable_T__o *v93; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v94; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v96; // x25
  System_Collections_Generic_IEnumerable_T__o *v97; // x23
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v98; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v101; // x20
  _BOOL8 v102; // x0
  __int64 v103; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *removeTweenTargetObjects; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v107; // x1
  UnityEngine_GameObject_o *v108; // x0
  WarBoardManager_TaskList_o *v109; // x1
  UnityEngine_GameObject_o *v110; // x0
  UnityEngine_GameObject_o *v111; // x0
  struct UICommonButton_o *v112; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Collections_Generic_HashSet_Enumerator_T__o v120; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v121; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E761A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_UIWidget___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_UIWidget__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_UIWidget___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_GameObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_GameObject___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_HashSet_UIWidget__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Contains__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Remove__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor___68738976, v50, v51, v52);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v53, v54, v55);
    sub_B5D5C4(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      v56,
      v57,
      v58);
    sub_B5D5C4(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
      v59,
      v60,
      v61);
    sub_B5D5C4(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      v62,
      v63,
      v64);
    sub_B5D5C4(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
      v65,
      v66,
      v67);
    sub_B5D5C4(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, v68, v69, v70);
    byte_42E761A = 1;
  }
  memset(&v121, 0, sizeof(v121));
  v71 = sub_B5D694(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v71,
    0LL);
  v72 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v72,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v71 )
    goto LABEL_36;
  *(_QWORD *)(v71 + 24) = v72;
  v81 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o **)(v71 + 24);
  v82 = v71 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v71 + 24), (System_Int32_array **)v72, v75, v76, v77, v78, v79, v80);
  v83 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v83,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v71 + 16) = v83;
  sub_B5D560((BattleServantConfConponent_o *)(v71 + 16), (System_Int32_array **)v83, v84, v85, v86, v87, v88, v89);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_36;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasAvailablePermanentSleepBuff(pieceData, v74);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v91 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v92 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_UIWidget__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v92,
      (Il2CppObject *)v71,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      (const MethodInfo_258B320 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      cannotActTurnDurk,
      (System_Action_T__o *)v92,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_36;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, v74);
    if ( v91 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v93 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v94 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_UIWidget__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v94,
        (Il2CppObject *)v71,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        (const MethodInfo_258B320 *)Method_System_Action_UIWidget___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v93,
        (System_Action_T__o *)v94,
        (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v96 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_UIWidget__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v96,
      (Il2CppObject *)v71,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      (const MethodInfo_258B320 *)Method_System_Action_UIWidget___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v96,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v91 & 1) != 0 )
    {
      v97 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v98 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_UIWidget__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v98,
        (Il2CppObject *)v71,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        (const MethodInfo_258B320 *)Method_System_Action_UIWidget___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v97,
        (System_Action_T__o *)v98,
        (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v82 )
    goto LABEL_36;
  if ( *(int *)(*(_QWORD *)v82 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_36;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v101 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v101,
    tweenTargets,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_GameObject___ctor___68738976);
  pieceData = *(WarBoardPieceData_o **)v82;
  if ( !*(_QWORD *)v82 )
    goto LABEL_36;
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v120,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)pieceData,
    (const MethodInfo_250693C *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v121 = v120;
  while ( 1 )
  {
    v102 = System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
             &v121,
             (const MethodInfo_201E960 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v102 )
      break;
    current = v121.fields._current;
    if ( !v121.fields._current )
      sub_B5D69C(v102, v103);
    removeTweenTargetObjects = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.removeTweenTargetObjects;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v121.fields._current, 0LL);
    if ( !removeTweenTargetObjects )
      sub_B5D69C(gameObject, gameObject);
    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
           removeTweenTargetObjects,
           (WarBoardManager_TaskList_o *)gameObject,
           (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v108 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v109 = (WarBoardManager_TaskList_o *)v108;
      if ( !v101 )
        sub_B5D69C(v108, v108);
      goto LABEL_22;
    }
    if ( !*v81 )
      sub_B5D69C(0LL, v107);
    if ( System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
           *v81,
           (BattleBuffData_BuffData_o *)current,
           (const MethodInfo_25064D8 *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      gray = UnityEngine_Color__get_gray(0LL);
      UIWidget__set_color((UIWidget_o *)current, gray, 0LL);
      v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v109 = (WarBoardManager_TaskList_o *)v110;
      if ( !v101 )
        sub_B5D69C(v110, v110);
LABEL_22:
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v101,
        v109,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color((UIWidget_o *)current, white, 0LL);
      v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !v101 )
        sub_B5D69C(v111, v111);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v101,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v111,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v121,
    (const MethodInfo_201E95C *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v112 = this->fields.button;
  v113 = System_Linq_Enumerable__Distinct_string_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v101,
           (const MethodInfo_1CA8E54 *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                       v113,
                                       (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v112 )
LABEL_36:
    sub_B5D69C(pieceData, v74);
  v112->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v112->fields.tweenTargets,
    (System_Int32_array **)pieceData,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiByBuffChanged(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v6; // x1
  WarBoardPieceStatusLabel_o *v7; // x0

  if ( (byte_42E7619 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7619 = 1;
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
    v7 = this->fields.pieceStatusLabelComponent;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    WarBoardPieceStatusLabel__SetupLabel(v7, this->fields.pieceData, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__UpdateWidgetDepth(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  int32_t PieceDispPriority; // w0
  const MethodInfo *v8; // x2

  if ( (byte_42E762D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E762D = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B5D69C(Instance, v6);
  PieceDispPriority = WarBoardData__GetPieceDispPriority(Instance, this->fields.pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v8);
}


void __fastcall WarBoardPieceBaseComponent__WidgetDepthIncrement(
        WarBoardPieceBaseComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardPieceBaseComponent_o *v5; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct UIWidget_array *uiWidgets; // x8
  struct UIWidget_array **p_uiWidgets; // x20
  System_Int32_array **ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int max_length; // w21
  int v26; // w22
  __int64 v27; // x23
  __int64 v28; // x9
  __int64 v29; // x9
  __int64 v30; // x22
  __int64 v31; // x23
  UnityEngine_Object_o *v32; // x21
  struct UIWidget_array *v33; // x8
  __int64 v34; // x0

  v5 = this;
  if ( (byte_42E7626 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880, value, (_DWORD)method, v3);
    this = (WarBoardPieceBaseComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E7626 = 1;
  }
  uiWidgets = v5->fields.uiWidgets;
  p_uiWidgets = &v5->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                       (UnityEngine_Component_o *)v5,
                                                                                       1,
                                                                                       (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
    v5->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields.uiWidgets,
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    uiWidgets = v5->fields.uiWidgets;
    if ( !uiWidgets )
      goto LABEL_27;
    max_length = uiWidgets->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0;
      v27 = 32LL;
      do
      {
        if ( !uiWidgets )
          goto LABEL_27;
        if ( v26 >= uiWidgets->max_length )
          goto LABEL_29;
        v28 = *(__int64 *)((char *)&uiWidgets->obj.klass + v27);
        if ( !v28 )
          goto LABEL_27;
        if ( *(int *)(v28 + 168) >= 1001 )
        {
          *(Il2CppClass **)((char *)&uiWidgets->obj.klass + v27) = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)((char *)uiWidgets + v27), 0LL, v19, v20, v21, v22, v23, v24);
        }
        uiWidgets = *p_uiWidgets;
        ++v26;
        v27 += 8LL;
      }
      while ( v26 < max_length );
      if ( !uiWidgets )
LABEL_27:
        sub_B5D69C(this, v18);
    }
  }
  v29 = *(_QWORD *)&uiWidgets->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = (int)v29;
    v31 = 4LL;
    while ( v31 - 4 < (unsigned __int64)uiWidgets->max_length )
    {
      v32 = (UnityEngine_Object_o *)*((_QWORD *)&uiWidgets->obj.klass + v31);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v33 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_27;
        if ( v31 - 4 >= (unsigned __int64)v33->max_length )
          break;
        this = (WarBoardPieceBaseComponent_o *)*((_QWORD *)&v33->obj.klass + v31);
        if ( !this )
          goto LABEL_27;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0LL);
      }
      if ( v31 - 3 >= v30 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v31;
      if ( !*p_uiWidgets )
        goto LABEL_27;
    }
LABEL_29:
    v34 = sub_B5D6C8(this);
    sub_B5D668(v34, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FAF & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardPieceBaseComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5FAF = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5FB2 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5FB2 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E5FB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5FB0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__maskFadeout(Instance, 2, 0.0, 0LL, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5FB1 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5FB1 = 1;
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
  __int64 v3; // x3
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_42E5FB3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5FB3 = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_B5D69C(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)targetUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_42E5FB4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5FB4 = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_B5D69C(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)darkenUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_42E5FB5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5FB5 = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_B5D69C(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)targetUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_42E5FB6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5FB6 = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_B5D69C(0LL, x);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)darkenUiWidgets,
    (WarBoardAIRoute_RouteData_o *)x,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
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
    sub_B5D69C(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_42E5FB7 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5FB7 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_42E5FB8 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5FB8 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v22; // x1
  WarBoardPieceData_o *targetSquarePiece; // x0
  System_Int32_array *PieceEventVals; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_42E5FB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18, v19);
    byte_42E5FB9 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0LL);
  if ( !v20 )
    goto LABEL_13;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0LL);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                  Instance,
                                                                  38,
                                                                  PieceEventVals,
                                                                  0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
      EventTasks,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_B5D69C(Instance, v22);
  v26 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(Instance, 37, 0LL, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    v26,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v20,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
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
    sub_B5D69C(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_42E5FBB & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5FBB = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(this, method);
  return targetPiece->fields._isDead_k__BackingField && this->fields.moveAfterActionCheck;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  __int64 v24; // x1
  WarBoardPieceData_o *targetPiece; // x0
  struct WarBoardManager_o *warBoardManager; // x8
  int32_t id; // w21
  struct WarBoardPieceData_o *v28; // x8
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v30; // x22
  int32_t v31; // w2
  bool v32; // w4
  WarBoardMessageMaster_o *v33; // x0
  int32_t v34; // w1
  int32_t v35; // w3
  System_Int32_array *v36; // x21
  System_Collections_Generic_IEnumerable_T__o *EventTasks; // x0
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  WarBoardManager_o *v39; // x19

  if ( (byte_42E5FBA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardMessageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v20, v21, v22);
    byte_42E5FBA = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v28 = this->fields.targetPiece;
    if ( !v28 )
      goto LABEL_26;
    breakPoint_k__BackingField = v28->fields._breakPoint_k__BackingField;
    v30 = (WarBoardMessageMaster_o *)targetPiece;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0LL);
    if ( !v30 )
      goto LABEL_26;
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      v31 = 12;
      v32 = 1;
      v33 = v30;
      v34 = id;
      v35 = breakPoint_k__BackingField;
    }
    else
    {
      v31 = 10;
      v33 = v30;
      v34 = id;
      v35 = breakPoint_k__BackingField;
      v32 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v33, v34, v31, v35, v32, 0LL);
    if ( !v23 )
      goto LABEL_26;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
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
  v36 = (System_Int32_array *)targetPiece;
  targetPiece = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                         this->fields.warBoardManager,
                                         2,
                                         (System_Int32_array *)targetPiece,
                                         0LL);
  if ( !v23 )
    goto LABEL_26;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  EventTasks = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                                (WarBoardManager_o *)targetPiece,
                                                                20,
                                                                v36,
                                                                0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
    EventTasks,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  v38 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager__GetEventTasks(
                                                         (WarBoardManager_o *)targetPiece,
                                                         40,
                                                         v36,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
    v38,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v23,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v39 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v39 )
    {
      WarBoardManager__InsertRunningTask(v39, (WarBoardTaskBase_array *)targetPiece, 0LL);
      return;
    }
LABEL_26:
    sub_B5D69C(targetPiece, v24);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_42E5FBD & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5FBD = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(_4__this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v22; // x1
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_42E5FBC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18, v19);
    byte_42E5FBC = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0LL, 0LL);
  if ( !v20 )
    goto LABEL_9;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v20,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v20,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
      return;
    }
LABEL_9:
    sub_B5D69C(Instance, v22);
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
    sub_B5D69C(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0LL);
}