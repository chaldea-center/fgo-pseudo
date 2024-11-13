void __fastcall WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_object__o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B13BE9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_6953/*"Frame{0}"*/, v11, v12);
    byte_4B13BE9 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listEffectData, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_BD27E0;
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416LL;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_BD3DB0;
  this->fields.lengthMoveAttack = 25.0;
  v20 = StringLiteral_6953/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6953/*"Frame{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseFrameName, v20, v21, v22, v23, v24, v25, v26);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v30;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.removeTweenTargetObjects,
    (int64_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x19
  __int64 v23; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Int32_array *PieceEventVals; // x20
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  float pixelPerSecond; // s13
  float v29; // s11
  float v30; // s12
  float v31; // s14
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  WarBoardMovePerformance_o *v35; // x0
  Il2CppObject *v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v47; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v48; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_4B13BE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&WarBoardMovePerformance_TypeInfo, v20, v21);
    byte_4B13BE0 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       *(_QWORD *)&squareIndex,
                                                       method,
                                                       v4);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_16;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  pieceData = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                       (WarBoardManager_o *)pieceData,
                                       30,
                                       PieceEventVals,
                                       0LL);
  if ( !v22 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)pieceData,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 36, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v29 = SquarePosition.fields.x;
  v30 = SquarePosition.fields.y;
  v31 = SquarePosition.fields.z;
  v35 = (WarBoardMovePerformance_o *)sub_1BCAA2C(WarBoardMovePerformance_TypeInfo, v32, v33, v34);
  v51.fields.x = x;
  v51.fields.y = y;
  v51.fields.z = z;
  v52.fields.x = v29;
  v52.fields.y = v30;
  v52.fields.z = v31;
  v36 = (Il2CppObject *)v35;
  WarBoardMovePerformance___ctor(v35, gameObject, v51, v52, pixelPerSecond, 0, 0LL);
  items = v22->fields._items;
  v44 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      v36,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v46[4] = (Il2CppClass *)v36;
    sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v36, v37, v38, v39, v40, v41, v42);
  }
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v47 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 38, PieceEventVals, 0LL),
        System_Collections_Generic_List_object___AddRange(
          v22,
          (System_Collections_Generic_IEnumerable_T__o *)v47,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v48 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 37, 0LL, 0LL),
        System_Collections_Generic_List_object___AddRange(
          v22,
          (System_Collections_Generic_IEnumerable_T__o *)v48,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                             v22,
                                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_16:
    sub_1BCAA3C(pieceData, v23);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t controllType_k__BackingField; // w8
  WarBoardManager_o *v9; // x20
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x21
  struct WarBoardSeSetting_o *seSetting; // x8
  const MethodInfo *v13; // x2
  Il2CppMethodPointer methodPtr; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  struct WarBoardPieceData_o *v18; // x8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x21
  struct WarBoardSeSetting_o *v21; // x8
  struct WarBoardPieceData_o *v22; // x8
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x21
  struct WarBoardSeSetting_o *v25; // x8
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x19
  struct WarBoardSeSetting_o *v28; // x8

  if ( (byte_4B13BD1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent_ClickIcon__, v4, v5);
    byte_4B13BD1 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  controllType_k__BackingField = Instance->fields._controllType_k__BackingField;
  v9 = Instance;
  if ( controllType_k__BackingField == 1 )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_41;
    if ( pieceData->fields._isEditing_k__BackingField )
    {
      v16 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      v18 = this->fields.pieceData;
      if ( v18 )
      {
        WarBoardManager__SquareSelect(v9, v18->fields._nowSquareIndex_k__BackingField, 0LL);
        v13 = this->klass->vtable._14_EditPiece.method;
        methodPtr = this->klass->vtable._15_ChangeStatus.methodPtr;
        goto LABEL_33;
      }
LABEL_41:
      sub_1BCAA3C(Instance, v7);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL)
      && WarBoardManager__IsSelectedPieceSame(v9, this->fields.pieceData, 0LL) )
    {
      v10 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        seSetting = Instance->fields.seSetting;
        if ( seSetting )
        {
          OverwriteAssetSoundName__PlaySe(v11, seSetting->fields.DeselectSe, 0LL);
          WarBoardManager__DeselectPiece(v9, 1, 0LL, 0LL);
          v13 = this->klass->vtable._13_HideStatus.method;
          methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
LABEL_33:
          ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v13)(this, methodPtr);
          return;
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__get_isSelectedPiece(v9, 0LL) && this->fields.isSelectable )
    {
      v19 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v21 = Instance->fields.seSetting;
        if ( v21 )
        {
          Instance = (WarBoardManager_o *)OverwriteAssetSoundName__PlaySe(v20, v21->fields.SelectSe, 0LL);
          v22 = this->fields.pieceData;
          if ( v22 )
          {
            WarBoardManager__SelectedPieceAction(v9, v22->fields._nowSquareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__IsNowTurn(v9, this->fields.pieceData, 0LL) )
    {
      v23 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v24 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v25 = Instance->fields.seSetting;
        if ( v25 )
        {
          OverwriteAssetSoundName__PlaySe(v24, v25->fields.SelectSe, 0LL);
          WarBoardManager__SelectPiece(v9, this->fields.pieceData, 0LL);
          v13 = this->klass->vtable._12_ShowStatus.method;
          methodPtr = this->klass->vtable._13_HideStatus.methodPtr;
          goto LABEL_33;
        }
      }
      goto LABEL_41;
    }
  }
  if ( (((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._12_ShowStatus.method)(
          this,
          this->klass->vtable._13_HideStatus.methodPtr) & 1) != 0 )
  {
    v26 = Method_WarBoardPieceBaseComponent_ClickIcon__;
    if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1BCA7F8(Method_WarBoardPieceBaseComponent_ClickIcon__);
    v27 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v28 = Instance->fields.seSetting;
    if ( !v28 )
      goto LABEL_41;
    OverwriteAssetSoundName__PlaySe(v27, v28->fields.OpenSimpleInfoSe, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__CreateEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x21
  __int64 v31; // x1
  Il2CppObject *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  WarBoardCommonEffectPerformance_o *v36; // x0
  Il2CppObject *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Nullable_Vector3__o v48; // 0:x3.16
  System_Nullable_Vector3__o v49; // 0:x5.16

  if ( (byte_4B13BE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName, taskList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&WarBoardCommonEffectPerformance_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v21, v22);
    byte_4B13BE6 = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       effectName,
                                                       taskList,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2FF0B1C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v30 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    if ( !UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
      v30 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    v32 = UnityEngine_Object__Instantiate_object__49903816(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)v30,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    v36 = (WarBoardCommonEffectPerformance_o *)sub_1BCAA2C(WarBoardCommonEffectPerformance_TypeInfo, v33, v34, v35);
    *(_QWORD *)&v48.fields.hasValue = 0LL;
    *(_QWORD *)&v48.fields.value.fields.y = 0LL;
    *(_QWORD *)&v49.fields.hasValue = 0LL;
    *(_QWORD *)&v49.fields.value.fields.y = 0LL;
    v37 = (Il2CppObject *)v36;
    WarBoardCommonEffectPerformance___ctor(
      v36,
      0LL,
      (UnityEngine_GameObject_o *)v32,
      v48,
      v49,
      (System_Nullable_Vector3__o)0,
      0,
      0,
      1,
      0LL);
    if ( v23 )
    {
      items = v23->fields._items;
      v45 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v23->fields._version;
      if ( items )
      {
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            v37,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_17;
        }
        else
        {
          v47 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v37;
          sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v37, v38, v39, v40, v41, v42, v43);
          if ( taskList )
          {
LABEL_17:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v23,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_36181556(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v23,
            0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(Instance, v25);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *effectDamageBaseObject; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_object__o *v25; // x20
  __int64 v26; // x1
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v32; // x22
  WarBoardCommonEffectPerformance_o *v33; // x0
  Il2CppObject *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Nullable_Vector3__o v45; // 0:x3.16
  System_Nullable_Vector3__o v46; // 0:x5.16

  if ( (byte_4B13BE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName, popText);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&WarBoardCommonEffectPerformance_TypeInfo, v19, v20);
    byte_4B13BE7 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName);
  if ( !UnityEngine_Object__op_Equality(0LL, effectDamageBaseObject, 0LL) )
  {
    v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                         v22,
                                                         v23,
                                                         v24);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    effectDamageBaseLabel = (UnityEngine_Object_o *)this->fields.effectDamageBaseLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( UnityEngine_Object__op_Inequality(effectDamageBaseLabel, 0LL, 0LL) )
    {
      Instance = this->fields.effectDamageBaseLabel;
      if ( !Instance )
        goto LABEL_19;
      UILabel__set_text(Instance, popText, 0LL);
    }
    v32 = this->fields.effectDamageBaseObject;
    v33 = (WarBoardCommonEffectPerformance_o *)sub_1BCAA2C(WarBoardCommonEffectPerformance_TypeInfo, v28, v29, v30);
    *(_QWORD *)&v45.fields.hasValue = 0LL;
    *(_QWORD *)&v45.fields.value.fields.y = 0LL;
    *(_QWORD *)&v46.fields.hasValue = 0LL;
    *(_QWORD *)&v46.fields.value.fields.y = 0LL;
    v34 = (Il2CppObject *)v33;
    WarBoardCommonEffectPerformance___ctor(v33, 0LL, v32, v45, v46, (System_Nullable_Vector3__o)0, 0, 0, 0, 0LL);
    if ( v25 )
    {
      items = v25->fields._items;
      v42 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v25->fields._version;
      if ( items )
      {
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            v34,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v44 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v44[4] = (Il2CppClass *)v34;
          sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v34, v35, v36, v37, v38, v39, v40);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v25,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_36181556(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v25,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(Instance, v28);
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


UnityEngine_Vector3_o __fastcall WarBoardPieceBaseComponent__GetIconLocalPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o __fastcall WarBoardPieceBaseComponent__GetIconPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


System_Int32_array *__fastcall WarBoardPieceBaseComponent__GetParticipantVals(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PieceEventVals; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  long double inited; // q0
  _QWORD *v25; // x19
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x19
  WarBoardPieceBaseComponent___c_c *v31; // x0
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v33; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  v4 = this;
  if ( (byte_4B13BDA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, targetPiece, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Concat_int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__, v15, v16);
    this = (WarBoardPieceBaseComponent_o *)sub_1BCA7E0(&WarBoardPieceBaseComponent___c_TypeInfo, v17, v18);
    byte_4B13BDA = 1;
  }
  if ( !targetPiece )
    goto LABEL_28;
  if ( WarBoardPieceData__get_isMaster(targetPiece, 0LL) )
  {
    this = (WarBoardPieceBaseComponent_o *)v4->fields.pieceData;
    if ( this )
    {
      PieceEventVals = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                              (WarBoardPieceData_o *)this,
                                                                              0LL);
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                   targetPiece,
                                                                   0LL);
      v21 = System_Linq_Enumerable__Concat_int_(
              PieceEventVals,
              v20,
              (const MethodInfo_2F2A9EC *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v21,
               (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_1BCAA3C(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (WarBoardPieceBaseComponent_o *)this[1].fields.turnDarkUiWidgetsAroundActionCount;
  if ( !this )
    goto LABEL_28;
  this = (WarBoardPieceBaseComponent_o *)WarBoardData__LoadBattleParticipantInfo((WarBoardData_o *)this, 0LL);
  if ( !this )
    goto LABEL_28;
  if ( !LOBYTE(this->fields.m_CancellationTokenSource) )
  {
    v30 = *(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.m_CachedPtr;
    v31 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, targetPiece);
      v31 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    _9__62_0 = (System_Func_object__object__o *)v31->static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31, targetPiece);
        v31 = WarBoardPieceBaseComponent___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v31->static_fields->__9;
      _9__62_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                    System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo,
                                                    targetPiece,
                                                    v22,
                                                    v23);
      System_Func_object__object____ctor(
        _9__62_0,
        v33,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        0LL);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__62_0,
        (int64_t)_9__62_0,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v30,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                 (const MethodInfo_2F45F84 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v21,
             (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v25 = Method_System_Array_Empty_int___;
  v26 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v26 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, targetPiece);
    v26 = v25[7];
  }
  v27 = *(_QWORD *)(v26 + 16);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v27 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v27, targetPiece);
  v28 = *(_QWORD *)(v25[7] + 16LL);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C1C6BC(inited);
  return **(System_Int32_array ***)(v28 + 184);
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v7; // x21

  if ( (byte_4B13BE2 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName, method);
    byte_4B13BE2 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v7 = (WarBoardSimpleAnimationPerformance_o *)sub_1BCAA2C(
                                                 WarBoardSimpleAnimationPerformance_TypeInfo,
                                                 animationName,
                                                 method,
                                                 v3);
  WarBoardSimpleAnimationPerformance___ctor(v7, simpleAnimation, animationName, 0LL);
  return v7;
}


void __fastcall WarBoardPieceBaseComponent__HideActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_4B13BD3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13BD3 = 1;
  }
  currentActionPointRoot = this->fields.currentActionPointRoot;
  if ( !currentActionPointRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0LL);
  currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0LL, 0LL) )
  {
    currentActionPointRoot = this->fields.currentPieceActionPointRoot;
    if ( currentActionPointRoot )
    {
      UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0LL);
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCAA3C(currentActionPointRoot, method);
  }
LABEL_9:
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
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  WarBoardManager_o *v6; // x0

  if ( (byte_4B13BD6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method, v2);
    byte_4B13BD6 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C1C6BC(v3);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C1C6BC(v3);
  v6 = **(WarBoardManager_o ***)(v5 + 184);
  if ( !v6 )
    sub_1BCAA3C(0LL, method);
  WarBoardManager__HideSimplePopup(v6, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__Initialize(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 gameObject; // x0
  __int64 v26; // x1
  Il2CppObject *Component_object; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UnityEngine_Transform_o *transform; // x21
  int v41; // s0
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v45; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  UnityEngine_Object_c **v53; // x25
  unsigned __int64 v54; // x29
  float v55; // s8
  __int64 v56; // x23
  int v57; // w26
  float v58; // s9
  __int64 v59; // x27
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v61; // x0
  __int64 v62; // x1
  UnityEngine_Object_c *v63; // x8
  UnityEngine_Object_c **v64; // x21
  UnityEngine_Transform_o *v65; // x25
  UnityEngine_GameObject_o *v66; // x25
  WarBoardBreakPointComponent_o *v67; // x24
  struct UIWidget_o *breakPointParent; // x8
  int32_t mDepth; // w28
  bool isMaster; // w25
  const MethodInfo *v71; // x6
  unsigned int *v72; // x25
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  const MethodInfo *v79; // x3
  struct WarBoardBreakPointComponent_array *v80; // x8
  float maxSpacing; // s0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  UnityEngine_Transform_array *v88; // x21
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x22
  const MethodInfo *v96; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // x1
  __int64 v100; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v102; // x21
  __int64 v103; // x1
  UnityEngine_Object_o *v104; // x22
  __int64 v105; // x1
  Il2CppObject *v106; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  __int64 v114; // x1
  UnityEngine_Object_o *v115; // x21
  Il2CppObject *v116; // x0
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  __int64 v123; // x0
  __int64 v124; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13BCD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UILabel___, pieceData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Transform___TypeInfo, v15, v16);
    sub_1BCA7E0(&WarBoardBreakPointComponent___TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v19, v20);
    sub_1BCA7E0(&StringLiteral_23211/*"root_text/type01/dm_base"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_19021/*"ef_dm_base"*/, v23, v24);
    byte_4B13BCD = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimation,
    (int64_t)Component_object,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.pieceData = pieceData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.pieceData, (int64_t)pieceData, v34, v35, v36, v37, v38, v39);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_26;
  if ( !gameObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v41 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)gameObject,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_26;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v41, 0LL);
  breakPointMax_k__BackingField = (unsigned int)pieceData->fields._breakPointMax_k__BackingField;
  v45 = (struct WarBoardBreakPointComponent_array *)sub_1BCA888(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v45;
  p_breakPoints = &this->fields.breakPoints;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.breakPoints, (int64_t)v45, v47, v48, v49, v50, v51, v52);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_26;
  v53 = &UnityEngine_Object_TypeInfo;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v54 = 0LL;
    v55 = 0.0;
    v56 = 1LL;
    v57 = 2 * breakPointMax_k__BackingField - 2;
    v58 = (float)*(int *)(gameObject + 168) / (float)(int)breakPointMax_k__BackingField;
    v59 = 8LL;
    v124 = breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v61 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      v63 = *v53;
      v64 = v53;
      v65 = v61;
      if ( !v63->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v63, v62);
      gameObject = (__int64)UnityEngine_Object__Instantiate_object__49903816(
                              breakPointPrefab,
                              v65,
                              (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      if ( !gameObject )
        goto LABEL_26;
      v66 = (UnityEngine_GameObject_o *)gameObject;
      v67 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v66, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      v125.fields.y = 0.0;
      v125.fields.z = 0.0;
      v125.fields.x = v55;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v125, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      mDepth = breakPointParent->fields.mDepth;
      isMaster = WarBoardPieceData__get_isMaster(pieceData, 0LL);
      gameObject = WarBoardPieceData__get_isEnemyServant(pieceData, 0LL);
      if ( !v67 )
        goto LABEL_26;
      WarBoardBreakPointComponent__Initialize(v67, v57 + mDepth, v56, isMaster, gameObject & 1, 0, v71);
      v72 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      gameObject = sub_1BCA91C(v67, *(_QWORD *)(*(_QWORD *)v72 + 64LL));
      if ( !gameObject )
        goto LABEL_57;
      if ( v54 >= v72[6] )
        goto LABEL_56;
      *(_QWORD *)&v72[v59] = v67;
      sub_1BCA784((PartyOrganizationUtility_o *)&v72[v59], (int64_t)v67, v73, v74, v75, v76, v77, v78);
      v80 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      if ( v54 >= v80->max_length )
        goto LABEL_56;
      v53 = v64;
      gameObject = *(__int64 *)((char *)&v80->obj.klass + v59 * 4);
      if ( !gameObject )
        goto LABEL_26;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        (__int64)v54 < pieceData->fields._breakPoint_k__BackingField,
        0,
        v79);
      if ( v124 == v56 )
        break;
      maxSpacing = v67->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      ++v54;
      v57 -= 2;
      if ( maxSpacing >= v58 )
        maxSpacing = v58;
      ++v56;
      v55 = v55 + maxSpacing;
      v59 += 2LL;
      if ( !gameObject )
        goto LABEL_26;
    }
  }
  gameObject = (__int64)this->fields.selectObject;
  if ( !gameObject )
    goto LABEL_26;
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&pieceData->fields.pieceComponent,
    (int64_t)this,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
LABEL_30:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  v88 = (UnityEngine_Transform_array *)sub_1BCA888(UnityEngine_Transform___TypeInfo, 1LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v88 )
    goto LABEL_26;
  v95 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1BCA91C(gameObject, v88->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_57:
      v123 = sub_1BCAA60();
      sub_1BCA908(v123, 0LL);
    }
  }
  if ( !v88->max_length )
LABEL_56:
    sub_1BCAA44(gameObject, v26);
  v88->m_Items[0] = (UnityEngine_Transform_o *)v95;
  sub_1BCA784((PartyOrganizationUtility_o *)v88->m_Items, v95, v89, v90, v91, v92, v93, v94);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v88, v96);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  gameObject = *(_QWORD *)(gameObject + 440);
  if ( !gameObject )
    goto LABEL_26;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v98);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v99);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_19021/*"ef_dm_base"*/,
                               (const MethodInfo_2FF0B1C *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !(*v53)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v53, v100);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    v102 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v104 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                     this,
                                     this->klass[1]._1.image);
    if ( !(*v53)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v53, v103);
    if ( UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
      v102 = (UnityEngine_Transform_o *)v104;
    if ( !(*v53)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v53, v105);
    v106 = UnityEngine_Object__Instantiate_object__49903816(
             CommonEffectAsset_object,
             v102,
             (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    this->fields.effectDamageBaseObject = (struct UnityEngine_GameObject_o *)v106;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.effectDamageBaseObject,
      (int64_t)v106,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0LL, 0LL) )
    {
      v115 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                       *p_effectDamageBaseObject,
                                       (System_String_o *)StringLiteral_23211/*"root_text/type01/dm_base"*/,
                                       0LL);
      if ( !(*v53)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v53, v114);
      gameObject = UnityEngine_Object__op_Inequality(v115, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v115 )
          goto LABEL_26;
        v116 = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)v115,
                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)v116;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.effectDamageBaseLabel,
          (int64_t)v116,
          v117,
          v118,
          v119,
          v120,
          v121,
          v122);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_26:
        sub_1BCAA3C(gameObject, v26);
      goto LABEL_30;
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Generic_List_object__o *v46; // x19
  Il2CppObject *Instance; // x0
  WarBoardData_o **v48; // x20
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  WarBoardPieceData_o *Piece_36054544; // x0
  WarBoardData_o **v56; // x23
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  int64_t v66; // x24
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  WarBoardTaskBase_TaskCallback_o *v70; // x25
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v88; // x2
  int32x2_t v89; // d1
  float32x2_t v90; // d9
  float v91; // s10
  float v92; // s2
  float v93; // s8
  float32x2_t v94; // d0
  float32x2_t v95; // d9
  float v96; // s8
  float v97; // s10
  float32x2_t v98; // d9
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s10
  float v102; // s0
  unsigned __int64 v103; // d1
  float v104; // s0
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x24
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  WarBoardTaskBase_TaskCallback_o *v112; // x25
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  struct WarBoardPieceData_o *v119; // x8
  UnityEngine_GameObject_o *v120; // x26
  float v121; // s8
  float v122; // s9
  float v123; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v127; // s14
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x3
  WarBoardMovePerformance_o *v131; // x0
  WarBoardTaskBase_o *v132; // x25
  __int64 v133; // x2
  __int64 v134; // x3
  bool IsEnabledMovedAfterDefend; // w0
  System_Func_bool__o *v136; // x23
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  int64_t v140; // x21
  __int64 v141; // x2
  __int64 v142; // x3
  _QWORD *v143; // x22
  System_Delegate_o *v144; // x23
  WarBoardPieceBaseComponent___c_c *v145; // x0
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v147; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  System_Delegate_o *v155; // x0
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  int64_t v162; // x8
  WarBoardTaskBase_TaskCallback_c *v163; // x1
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  struct System_Object_array *v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  Il2CppClass **v173; // x0
  unsigned __int64 v174; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v175; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v177; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v178; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v179; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B13BDD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__, v16, v17);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__, v18, v19);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__, v20, v21);
    sub_1BCA7E0(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
      v22,
      v23);
    sub_1BCA7E0(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, v24, v25);
    sub_1BCA7E0(&WarBoardPieceBaseComponent___c_TypeInfo, v26, v27);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v28, v29);
    sub_1BCA7E0(&WarBoardConditionalJumpTask_TypeInfo, v30, v31);
    sub_1BCA7E0(&WarBoardMovePerformance_TypeInfo, v32, v33);
    byte_4B13BDD = 1;
  }
  v34 = sub_1BCAA2C(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, *(_QWORD *)&squareIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_60;
  *(_QWORD *)(v34 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)this, v37, v38, v39, v40, v41, v42);
  *(_DWORD *)(v34 + 52) = squareIndex;
  v46 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v43,
                                                       v44,
                                                       v45);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v34 + 24) = Instance;
  v48 = (WarBoardData_o **)(v34 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 24), (int64_t)Instance, v49, v50, v51, v52, v53, v54);
  if ( !*(_QWORD *)(v34 + 24) )
    goto LABEL_60;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v34 + 24) + 440LL);
  if ( !gameObject )
    goto LABEL_60;
  Piece_36054544 = WarBoardData__GetPiece_36054544(gameObject, *(_DWORD *)(v34 + 52), 0LL);
  *(_QWORD *)(v34 + 16) = Piece_36054544;
  v56 = (WarBoardData_o **)(v34 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 16), (int64_t)Piece_36054544, v57, v58, v59, v60, v61, v62);
  v66 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v63, v64, v65);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v66, 0LL, 0LL);
  v70 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v67, v68, v69);
  WarBoardTaskBase_TaskCallback___ctor(
    v70,
    (Il2CppObject *)v34,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v66 )
    goto LABEL_60;
  *(_QWORD *)(v66 + 32) = v70;
  sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 32), (int64_t)v70, v71, v72, v73, v74, v75, v76);
  if ( !v46 )
    goto LABEL_60;
  items = v46->fields._items;
  v84 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v46->fields._version;
  if ( !items )
    goto LABEL_60;
  size = v46->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v46,
      (Il2CppObject *)v66,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
  }
  else
  {
    v86 = &items->obj.klass + size;
    v46->fields._size = size + 1;
    v86[4] = (Il2CppClass *)v66;
    sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 4), v66, v77, v78, v79, v80, v81, v82);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_60;
  gameObject = *v48;
  if ( !*v48 )
    goto LABEL_60;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v34 + 24);
  *(UnityEngine_Vector3_o *)(v34 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)v94.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v34 + 52),
                                            0LL);
  v90.n64_u64[0] = *(unsigned __int64 *)(v34 + 40);
  v91 = *(float *)(v34 + 48);
  v93 = v92;
  v94.n64_u32[1] = v89.n64_u32[0];
  if ( !byte_4B109C3 )
  {
    v174 = v94.n64_u64[0];
    sub_1BCA7E0(&System_Math_TypeInfo, v36, v88);
    v94.n64_u64[0] = v174;
    byte_4B109C3 = 1;
  }
  v95.n64_u64[0] = vsub_f32(v94, v90).n64_u64[0];
  v96 = v93 - v91;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v36);
  v97 = vaddv_f32(vmul_f32(v95, v95)) + (float)(v96 * v96);
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v36, v88);
    byte_4B109C4 = 1;
  }
  v89.n64_f32[0] = sqrtf(v97);
  v175 = v89.n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v36);
    v89.n64_u64[0] = v175;
  }
  if ( v89.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v36, v88);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v98.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v98.n64_u64[0] = vdiv_f32(v95, vdup_lane_s32(v89, 0)).n64_u64[0];
    z = v96 / v89.n64_f32[0];
  }
  gameObject = *v56;
  if ( !*v56 )
    goto LABEL_60;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)gameObject, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v102 = *(float *)&v175 - lengthOnAttack;
  if ( (float)(*(float *)&v175 - lengthOnAttack) > 0.0 )
  {
    v103 = vadd_f32(vmul_n_f32(v98, v102), *(float32x2_t *)(v34 + 40)).n64_u64[0];
    v104 = (float)(z * v102) + *(float *)(v34 + 48);
    *(_QWORD *)(v34 + 40) = v103;
    *(float *)(v34 + 48) = v104;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, 0LL);
  v108 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v105, v106, v107);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v108, 0LL, 0LL);
  v112 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v109, v110, v111);
  WarBoardTaskBase_TaskCallback___ctor(
    v112,
    (Il2CppObject *)v34,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0LL);
  if ( !v108 )
    goto LABEL_60;
  *(_QWORD *)(v108 + 32) = v112;
  sub_1BCA784((PartyOrganizationUtility_o *)(v108 + 32), (int64_t)v112, v113, v114, v115, v116, v117, v118);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v119 = this->fields.pieceData;
  if ( !v119 )
    goto LABEL_60;
  v120 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v34 + 24);
  if ( !gameObject )
    goto LABEL_60;
  v121 = *(float *)(v34 + 40);
  v122 = *(float *)(v34 + 44);
  v123 = *(float *)(v34 + 48);
  v177 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v119->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v177.fields.x;
  y = v177.fields.y;
  v127 = v177.fields.z;
  v131 = (WarBoardMovePerformance_o *)sub_1BCAA2C(WarBoardMovePerformance_TypeInfo, v128, v129, v130);
  v178.fields.x = v121;
  v178.fields.y = v122;
  v178.fields.z = v123;
  v179.fields.x = x;
  v179.fields.y = y;
  v179.fields.z = v127;
  v132 = (WarBoardTaskBase_o *)v131;
  WarBoardMovePerformance___ctor(v131, v120, v178, v179, pixelPerSecond, 0, 0LL);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  if ( WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0LL) )
  {
    gameObject = *v56;
    if ( !*v56 )
      goto LABEL_60;
    IsEnabledMovedAfterDefend = WarBoardPieceData__IsEnabledMovedAfterDefend((WarBoardPieceData_o *)gameObject, 0LL);
  }
  else
  {
    IsEnabledMovedAfterDefend = 0;
  }
  *(_BYTE *)(v34 + 56) = IsEnabledMovedAfterDefend;
  v136 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v36, v133, v134);
  System_Func_bool____ctor(
    v136,
    (Il2CppObject *)v34,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    0LL);
  v140 = sub_1BCAA2C(WarBoardConditionalJumpTask_TypeInfo, v137, v138, v139);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v140, v136, (WarBoardTaskBase_o *)v108, v132, 0LL);
  if ( !v140 )
LABEL_60:
    sub_1BCAA3C(gameObject, v36);
  v143 = (_QWORD *)(v140 + 40);
  v144 = *(System_Delegate_o **)(v140 + 40);
  v145 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, v36);
    v145 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__65_3 = v145->static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( !v145->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v145, v36);
      v145 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v147 = (Il2CppObject *)v145->static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v36, v141, v142);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v147,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0LL);
    v148 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v148->__9__65_3 = _9__65_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v148->__9__65_3, (int64_t)_9__65_3, v149, v150, v151, v152, v153, v154);
  }
  v155 = System_Delegate__Combine(v144, (System_Delegate_o *)_9__65_3, 0LL);
  v162 = (int64_t)v155;
  if ( v155 )
  {
    v163 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v155->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v143 = v155;
      if ( (WarBoardTaskBase_TaskCallback_c *)v155->klass == v163 )
        goto LABEL_54;
    }
    sub_1BCACFC(v155);
  }
  *v143 = v162;
LABEL_54:
  sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 40), v162, v156, v157, v158, v159, v160, v161);
  v170 = v46->fields._items;
  v171 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v46->fields._version;
  if ( !v170 )
    goto LABEL_60;
  v172 = v46->fields._size;
  if ( (unsigned int)v172 >= v170->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v46,
      (Il2CppObject *)v140,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
  }
  else
  {
    v173 = &v170->obj.klass + v172;
    v46->fields._size = v172 + 1;
    v173[4] = (Il2CppClass *)v140;
    sub_1BCA784((PartyOrganizationUtility_o *)(v173 + 4), v140, v164, v165, v166, v167, v168, v169);
  }
  gameObject = *v48;
  if ( !*v48 )
    goto LABEL_60;
  WarBoardManager__AddTask_36181556(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v46,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAfterWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_object__o *v42; // x20
  Il2CppObject *Instance; // x0
  WarBoardData_o **v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  WarBoardWallData_o *Wall; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  int64_t v61; // x23
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  WarBoardTaskBase_TaskCallback_o *v65; // x24
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  int32x2_t v86; // d3
  float32x2_t v87; // d9
  float v88; // s10
  float v89; // s2
  float v90; // s8
  unsigned __int32 v91; // s1
  float32x2_t v92; // d0
  float32x2_t v93; // d9
  float v94; // s8
  float v95; // s10
  float32x2_t v96; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v99; // s2
  float v100; // s1
  __int64 v101; // x23
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  WarBoardTaskBase_TaskCallback_o *v105; // x24
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  struct WarBoardPieceData_o *v112; // x8
  UnityEngine_GameObject_o *v113; // x25
  float v114; // s8
  float v115; // s9
  float v116; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v120; // s14
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  WarBoardMovePerformance_o *v124; // x0
  WarBoardTaskBase_o *v125; // x24
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  System_Func_bool__o *v129; // x25
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  WarBoardConditionalJumpTask_o *v133; // x19
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  struct System_Object_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  Il2CppClass **v143; // x0
  unsigned __int64 v144; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v145; // [xsp+0h] [xbp-A0h]
  unsigned __int32 v146; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B13BDF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__, v16, v17);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__, v18, v19);
    sub_1BCA7E0(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
      v20,
      v21);
    sub_1BCA7E0(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, v22, v23);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v24, v25);
    sub_1BCA7E0(&WarBoardConditionalJumpTask_TypeInfo, v26, v27);
    sub_1BCA7E0(&WarBoardMovePerformance_TypeInfo, v28, v29);
    byte_4B13BDF = 1;
  }
  v30 = sub_1BCAA2C(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, *(_QWORD *)&squareIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_40;
  *(_QWORD *)(v30 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 24), (int64_t)this, v33, v34, v35, v36, v37, v38);
  *(_DWORD *)(v30 + 44) = squareIndex;
  v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v39,
                                                       v40,
                                                       v41);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v30 + 16) = Instance;
  v44 = (WarBoardData_o **)(v30 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)Instance, v45, v46, v47, v48, v49, v50);
  if ( !*(_QWORD *)(v30 + 16) )
    goto LABEL_40;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v30 + 16) + 440LL);
  if ( !gameObject )
    goto LABEL_40;
  Wall = WarBoardData__GetWall(gameObject, *(_DWORD *)(v30 + 44), 1, 0LL);
  *(_QWORD *)(v30 + 48) = Wall;
  sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 48), (int64_t)Wall, v52, v53, v54, v55, v56, v57);
  v61 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v58, v59, v60);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v61, 0LL, 0LL);
  v65 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v62, v63, v64);
  WarBoardTaskBase_TaskCallback___ctor(
    v65,
    (Il2CppObject *)v30,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v61 )
    goto LABEL_40;
  *(_QWORD *)(v61 + 32) = v65;
  sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 32), (int64_t)v65, v66, v67, v68, v69, v70, v71);
  if ( !v42 )
    goto LABEL_40;
  items = v42->fields._items;
  v79 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v42->fields._version;
  if ( !items )
    goto LABEL_40;
  size = v42->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v42,
      (Il2CppObject *)v61,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
  }
  else
  {
    v81 = &items->obj.klass + size;
    v42->fields._size = size + 1;
    v81[4] = (Il2CppClass *)v61;
    sub_1BCA784((PartyOrganizationUtility_o *)(v81 + 4), v61, v72, v73, v74, v75, v76, v77);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  gameObject = *v44;
  if ( !*v44 )
    goto LABEL_40;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v30 + 16);
  *(UnityEngine_Vector3_o *)(v30 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)v92.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v30 + 44),
                                            0LL);
  v87.n64_u64[0] = *(unsigned __int64 *)(v30 + 32);
  v88 = *(float *)(v30 + 40);
  v90 = v89;
  v92.n64_u32[1] = v91;
  if ( !byte_4B109C3 )
  {
    v144 = v92.n64_u64[0];
    sub_1BCA7E0(&System_Math_TypeInfo, v83, v84);
    v92.n64_u64[0] = v144;
    byte_4B109C3 = 1;
  }
  v93.n64_u64[0] = vsub_f32(v92, v87).n64_u64[0];
  v94 = v90 - v88;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v83);
  v95 = vaddv_f32(vmul_f32(v93, v93)) + (float)(v94 * v94);
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v83, v84);
    byte_4B109C4 = 1;
  }
  v86.n64_f32[0] = sqrtf(v95);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    v145 = v86.n64_u64[0];
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v83);
    v86.n64_u64[0] = v145;
  }
  if ( v86.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      v146 = v86.n64_u32[0];
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v83, v84);
      v86.n64_u32[0] = v146;
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v96.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v96.n64_u64[0] = vdiv_f32(v93, vdup_lane_s32(v86, 0)).n64_u64[0];
    z = v94 / v86.n64_f32[0];
  }
  v99 = v86.n64_f32[0] - this->fields.lengthOnAttack;
  if ( v99 > 0.0 )
  {
    v100 = (float)(z * v99) + *(float *)(v30 + 40);
    *(float32x2_t *)(v30 + 32) = vadd_f32(vmul_n_f32(v96, v99), *(float32x2_t *)(v30 + 32));
    *(float *)(v30 + 40) = v100;
  }
  v101 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v83, v84, v85);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v101, 0LL, 0LL);
  v105 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v102, v103, v104);
  WarBoardTaskBase_TaskCallback___ctor(
    v105,
    (Il2CppObject *)v30,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0LL);
  if ( !v101 )
    goto LABEL_40;
  *(_QWORD *)(v101 + 32) = v105;
  sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 32), (int64_t)v105, v106, v107, v108, v109, v110, v111);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v112 = this->fields.pieceData;
  if ( !v112 )
    goto LABEL_40;
  v113 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v30 + 16);
  if ( !gameObject )
    goto LABEL_40;
  v114 = *(float *)(v30 + 32);
  v115 = *(float *)(v30 + 36);
  v116 = *(float *)(v30 + 40);
  v148 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v112->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v148.fields.x;
  y = v148.fields.y;
  v120 = v148.fields.z;
  v124 = (WarBoardMovePerformance_o *)sub_1BCAA2C(WarBoardMovePerformance_TypeInfo, v121, v122, v123);
  v149.fields.x = v114;
  v149.fields.y = v115;
  v149.fields.z = v116;
  v150.fields.x = x;
  v150.fields.y = y;
  v150.fields.z = v120;
  v125 = (WarBoardTaskBase_o *)v124;
  WarBoardMovePerformance___ctor(v124, v113, v149, v150, pixelPerSecond, 0, 0LL);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_40;
  *(_BYTE *)(v30 + 56) = WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0LL);
  v129 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v126, v127, v128);
  System_Func_bool____ctor(
    v129,
    (Il2CppObject *)v30,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
    0LL);
  v133 = (WarBoardConditionalJumpTask_o *)sub_1BCAA2C(WarBoardConditionalJumpTask_TypeInfo, v130, v131, v132);
  WarBoardConditionalJumpTask___ctor(v133, v129, (WarBoardTaskBase_o *)v101, v125, 0LL);
  v140 = v42->fields._items;
  v141 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v42->fields._version;
  if ( !v140 )
    goto LABEL_40;
  v142 = v42->fields._size;
  if ( (unsigned int)v142 >= v140->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v42,
      (Il2CppObject *)v133,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
  }
  else
  {
    v143 = &v140->obj.klass + v142;
    v42->fields._size = v142 + 1;
    v143[4] = (Il2CppClass *)v133;
    sub_1BCA784((PartyOrganizationUtility_o *)(v143 + 4), (int64_t)v133, v134, v135, v136, v137, v138, v139);
  }
  gameObject = *v44;
  if ( !*v44 )
LABEL_40:
    sub_1BCAA3C(gameObject, v32);
  WarBoardManager__AddTask_36181556(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v42,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  int64_t v60; // x23
  int64_t Instance; // x0
  __int64 v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t *v69; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v71; // x22
  float v72; // s0
  float v73; // s1
  float v74; // s2
  float v75; // s11
  float v76; // s9
  float v77; // s10
  float v78; // s1
  float v79; // s2
  float v80; // s0
  float v81; // s8
  float v82; // s12
  WarBoardSquareData_o *Square; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Collections_Generic_List_object__o *v93; // x20
  const MethodInfo *v94; // x2
  System_Int32_array *ParticipantVals; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  int64_t v101; // x25
  __int64 v102; // x2
  __int64 v103; // x3
  WarBoardTaskBase_TaskCallback_c **v104; // x19
  System_Delegate_o **v105; // x26
  System_Delegate_o *v106; // x27
  WarBoardTaskBase_TaskCallback_o *v107; // x28
  System_Delegate_o *v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  WarBoardPieceBaseComponent_c *v115; // x8
  WarBoardTaskBase_TaskCallback_c *v116; // x1
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  struct System_Object_array *items; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  __int64 v127; // x2
  float v128; // s13
  float v129; // s14
  float v130; // s12
  float v131; // s8
  float x; // s14
  float y; // s13
  float z; // s15
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s12
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  float v140; // s0
  float v141; // s3
  float v142; // s1
  float v143; // s2
  float v144; // s0
  float v145; // s15
  float v146; // s8
  float v147; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s12
  UnityEngine_GameObject_o *v150; // x26
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x3
  WarBoardMovePerformance_o *v154; // x0
  Il2CppObject *v155; // x25
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  struct System_Object_array *v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  Il2CppClass **v165; // x0
  System_Collections_Generic_List_object__o *v166; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v167; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v168; // x0
  __int64 v169; // x1
  __int64 v170; // x2
  __int64 v171; // x3
  float lengthMoveAttack; // s0
  float v173; // s8
  float v174; // s12
  float v175; // s13
  UnityEngine_GameObject_o *v176; // x0
  float v177; // s14
  UnityEngine_GameObject_o *v178; // x21
  __int64 v179; // x1
  __int64 v180; // x2
  __int64 v181; // x3
  WarBoardMovePerformance_o *v182; // x0
  int64_t v183; // x24
  __int64 v184; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *v185; // x21
  WarBoardMessageMaster_o *v186; // x23
  int32_t id; // w26
  __int64 v188; // x1
  __int64 v189; // x2
  __int64 v190; // x3
  System_Collections_Generic_List_object__o *v191; // x0
  int32_t breakPoint_k__BackingField; // w27
  int32_t v193; // w2
  bool v194; // w4
  WarBoardMessageMaster_o *v195; // x0
  int32_t v196; // w1
  int32_t v197; // w3
  __int64 v198; // x24
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  Il2CppObject **v205; // x22
  __int64 v206; // x1
  __int64 v207; // x2
  float lengthOnEncount; // s0
  float v209; // s1
  float v210; // s12
  float v211; // s2
  float v212; // s0
  float v213; // s8
  float v214; // s14
  float v215; // s9
  float v216; // s11
  float v217; // s15
  float v218; // s13
  float v219; // s14
  float v220; // s10
  float v221; // s12
  float v222; // s13
  float v223; // s14
  float v224; // s15
  struct UnityEngine_Vector3_StaticFields *v225; // x8
  float v226; // s1
  _QWORD *monitor; // x8
  __int64 v228; // x8
  float v229; // s10
  float ZoomSize; // s0
  __int64 v231; // x8
  __int64 v232; // x8
  __int64 v233; // x8
  const MethodInfo_36C2D28 *v234; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v236; // x8
  WarBoardManager_o *v237; // x23
  float v238; // s8
  float v239; // s10
  float encountCameraSize; // s0
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  struct System_Object_array *v247; // x8
  _QWORD *v248; // x9
  __int64 v249; // x10
  int64_t v250; // x1
  Il2CppClass **v251; // x0
  System_Collections_Generic_IEnumerable_T__o *v252; // x23
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  WarBoardTaskBase_array *v259; // x23
  WarBoardManager_o *v260; // x24
  int v261; // s0
  int64_t v264; // x2
  int32_t v265; // w3
  System_String_o *v266; // x4
  BattleSetupInfo_o *v267; // x5
  FollowerInfo_o *v268; // x6
  PartyListViewItem_o *v269; // x7
  int64_t v270; // x24
  int64_t v271; // x2
  int32_t v272; // w3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  int64_t v277; // x24
  const MethodInfo *v278; // x2
  int64_t v279; // x2
  int32_t v280; // w3
  System_String_o *v281; // x4
  BattleSetupInfo_o *v282; // x5
  FollowerInfo_o *v283; // x6
  PartyListViewItem_o *v284; // x7
  int64_t v285; // x22
  __int64 v286; // x1
  __int64 v287; // x2
  __int64 v288; // x3
  WarBoardOrthostichySchedule_o *v289; // x22
  int64_t v290; // x2
  int32_t v291; // w3
  System_String_o *v292; // x4
  BattleSetupInfo_o *v293; // x5
  FollowerInfo_o *v294; // x6
  PartyListViewItem_o *v295; // x7
  __int64 v296; // x1
  __int64 v297; // x2
  __int64 v298; // x3
  WarBoardParallelSchedule_o *v299; // x21
  int64_t v300; // x2
  int32_t v301; // w3
  System_String_o *v302; // x4
  BattleSetupInfo_o *v303; // x5
  FollowerInfo_o *v304; // x6
  PartyListViewItem_o *v305; // x7
  struct System_Object_array *v306; // x8
  _QWORD *v307; // x9
  __int64 v308; // x10
  Il2CppClass **v309; // x0
  PartyOrganizationUtility_o *v310; // x0
  int64_t v311; // x1
  int64_t v312; // x2
  __int64 v313; // x3
  System_String_o *v314; // x4
  BattleSetupInfo_o *v315; // x5
  FollowerInfo_o *v316; // x6
  PartyListViewItem_o *v317; // x7
  WarBoardPieceBaseComponent___c_c *v318; // x8
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v320; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v321; // x0
  int64_t v322; // x2
  int32_t v323; // w3
  System_String_o *v324; // x4
  BattleSetupInfo_o *v325; // x5
  FollowerInfo_o *v326; // x6
  PartyListViewItem_o *v327; // x7
  struct UIWidget_o **p_breakPointParent; // x23
  System_Delegate_o *breakPointParent; // x25
  __int64 v330; // x1
  __int64 v331; // x2
  __int64 v332; // x3
  WarBoardTaskBase_TaskCallback_o *v333; // x26
  System_Delegate_o *v334; // x0
  int64_t v335; // x2
  int32_t v336; // w3
  System_String_o *v337; // x4
  BattleSetupInfo_o *v338; // x5
  FollowerInfo_o *v339; // x6
  PartyListViewItem_o *v340; // x7
  WarBoardTaskBase_TaskCallback_c *v341; // x1
  int64_t v342; // x2
  int32_t v343; // w3
  System_String_o *v344; // x4
  BattleSetupInfo_o *v345; // x5
  FollowerInfo_o *v346; // x6
  PartyListViewItem_o *v347; // x7
  struct System_Object_array *v348; // x8
  _QWORD *v349; // x9
  __int64 v350; // x10
  Il2CppClass **v351; // x0
  __int64 v352; // x2
  __int64 v353; // x3
  System_Delegate_o *v354; // x23
  Il2CppObject *v355; // x22
  WarBoardTaskBase_TaskCallback_o *v356; // x24
  WarBoardPieceBaseComponent_c *v357; // x0
  WarBoardTaskBase_TaskCallback_c *v358; // x1
  __int64 v359; // x2
  __int64 v360; // x3
  System_Delegate_o *v361; // x22
  WarBoardPieceBaseComponent___c_c *v362; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v364; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v365; // x0
  int64_t v366; // x2
  int32_t v367; // w3
  System_String_o *v368; // x4
  BattleSetupInfo_o *v369; // x5
  FollowerInfo_o *v370; // x6
  PartyListViewItem_o *v371; // x7
  WarBoardPieceBaseComponent_c *v372; // x0
  int64_t v373; // x2
  int32_t v374; // w3
  System_String_o *v375; // x4
  BattleSetupInfo_o *v376; // x5
  FollowerInfo_o *v377; // x6
  PartyListViewItem_o *v378; // x7
  WarBoardTaskBase_TaskCallback_c *v379; // x1
  __int64 v380; // x0
  float v381; // [xsp+0h] [xbp-E0h]
  float v382; // [xsp+4h] [xbp-DCh]
  float v383; // [xsp+10h] [xbp-D0h]
  float v384; // [xsp+14h] [xbp-CCh]
  WarBoardManager_o **v385; // [xsp+18h] [xbp-C8h]
  float v386; // [xsp+24h] [xbp-BCh]
  System_Nullable_float__o size; // [xsp+28h] [xbp-B8h] BYREF
  System_Nullable_Vector3__o v388; // [xsp+30h] [xbp-B0h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v390; // 0:x3.8
  System_Nullable_Vector3__o v391; // 0:x0.16
  UnityEngine_Vector3_o v392; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v393; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v394; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v395; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v396; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v397; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B13BDB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v24, v25);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, v32, v33);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, v34, v35);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__, v36, v37);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__, v38, v39);
    sub_1BCA7E0(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__, v42, v43);
    sub_1BCA7E0(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v44, v45);
    sub_1BCA7E0(&WarBoardPieceBaseComponent___c_TypeInfo, v46, v47);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v48, v49);
    sub_1BCA7E0(&WarBoardMovePerformance_TypeInfo, v50, v51);
    sub_1BCA7E0(&WarBoardOrthostichySchedule_TypeInfo, v52, v53);
    sub_1BCA7E0(&WarBoardParallelSchedule_TypeInfo, v54, v55);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v56, v57);
    sub_1BCA7E0(&StringLiteral_9026/*"MasterDamage"*/, v58, v59);
    byte_4B13BDB = 1;
  }
  v60 = sub_1BCAA2C(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, *(_QWORD *)&squareIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v60, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v60 )
    goto LABEL_157;
  *(_QWORD *)(v60 + 24) = Instance;
  v69 = (int64_t *)(v60 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 24), Instance, v63, v64, v65, v66, v67, v68);
  if ( !*(_QWORD *)(v60 + 24) )
    goto LABEL_157;
  Instance = *(_QWORD *)(*(_QWORD *)(v60 + 24) + 440LL);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardData__GetPiece_36054544((WarBoardData_o *)Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_157;
  v71 = (WarBoardPieceData_o *)Instance;
  Instance = *v69;
  if ( !*v69 )
    goto LABEL_157;
  *(UnityEngine_Vector3_o *)&v72 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v69;
  if ( !*v69 )
    goto LABEL_157;
  v75 = v72;
  v76 = v73;
  v77 = v74;
  *(UnityEngine_Vector3_o *)(&v78 - 1) = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)Instance,
                                           squareIndex,
                                           0LL);
  v386 = v80;
  if ( !*v69 )
    goto LABEL_157;
  Instance = *(_QWORD *)(*v69 + 440);
  if ( !Instance )
    goto LABEL_157;
  v81 = v78;
  v82 = v79;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v60 + 16) = Square;
  sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 16), (int64_t)Square, v84, v85, v86, v87, v88, v89);
  v93 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v90,
                                                       v91,
                                                       v92);
  System_Collections_Generic_List_object____ctor(
    v93,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v71, v94);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 42, ParticipantVals, 0LL);
  if ( !v93 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v93,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 43, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v93,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v385 = (WarBoardManager_o **)(v60 + 24);
  v97 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 41, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v93,
    (System_Collections_Generic_IEnumerable_T__o *)v97,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v101 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v98, v99, v100);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v101, 0LL, 0LL);
  if ( !v101 )
    goto LABEL_157;
  v104 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v105 = (System_Delegate_o **)(v101 + 32);
  v106 = *(System_Delegate_o **)(v101 + 32);
  v107 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v62, v102, v103);
  WarBoardTaskBase_TaskCallback___ctor(
    v107,
    (Il2CppObject *)v60,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0LL);
  v108 = System_Delegate__Combine(v106, (System_Delegate_o *)v107, 0LL);
  v115 = (WarBoardPieceBaseComponent_c *)v108;
  if ( v108 )
  {
    v116 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v108->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_152;
    *v105 = v108;
    if ( (WarBoardTaskBase_TaskCallback_c *)v108->klass != v116 )
      goto LABEL_152;
  }
  else
  {
    *v105 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 32), (int64_t)v108, v109, v110, v111, v112, v113, v114);
  items = v93->fields._items;
  v124 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v93->fields._version;
  if ( !items )
    goto LABEL_157;
  v125 = v93->fields._size;
  if ( (unsigned int)v125 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v93,
      (Il2CppObject *)v101,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
  }
  else
  {
    v126 = &items->obj.klass + v125;
    v93->fields._size = v125 + 1;
    v126[4] = (Il2CppClass *)v101;
    sub_1BCA784((PartyOrganizationUtility_o *)(v126 + 4), v101, v117, v118, v119, v120, v121, v122);
  }
  if ( !byte_4B109C3 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v62, v127);
    byte_4B109C3 = 1;
  }
  v383 = v82;
  v384 = v81;
  v128 = v81 - v76;
  v129 = v386 - v75;
  v130 = v82 - v77;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v62);
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v62, v127);
    byte_4B109C4 = 1;
  }
  Instance = (int64_t)System_Math_TypeInfo;
  v131 = sqrtf((float)(v130 * v130) + (float)((float)(v129 * v129) + (float)(v128 * v128)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v62);
  if ( v131 <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v62, v127);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v129 / v131;
    y = v128 / v131;
    z = v130 / v131;
  }
  if ( !v71 )
    goto LABEL_157;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v71, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v140 = v131 - lengthOnAttack;
  if ( (float)(v131 - lengthOnAttack) > 0.0 )
  {
    v141 = z;
    v382 = y;
    v142 = x * v140;
    v143 = y * v140;
    v144 = z * v140;
    v145 = v76;
    v146 = v75;
    v381 = v141;
    v75 = v75 + v142;
    v76 = v76 + v143;
    v147 = v77 + v144;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v150 = gameObject;
    v154 = (WarBoardMovePerformance_o *)sub_1BCAA2C(WarBoardMovePerformance_TypeInfo, v151, v152, v153);
    v392.fields.x = v146;
    v392.fields.y = v145;
    v392.fields.z = v77;
    v396.fields.x = v75;
    v396.fields.y = v76;
    v396.fields.z = v147;
    v155 = (Il2CppObject *)v154;
    v77 = v147;
    WarBoardMovePerformance___ctor(v154, v150, v392, v396, pixelPerSecond, 5, 0LL);
    v162 = v93->fields._items;
    v163 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v93->fields._version;
    if ( !v162 )
      goto LABEL_157;
    v164 = v93->fields._size;
    if ( (unsigned int)v164 >= v162->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v93,
        v155,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
    }
    else
    {
      v165 = &v162->obj.klass + v164;
      v93->fields._size = v164 + 1;
      v165[4] = (Il2CppClass *)v155;
      sub_1BCA784((PartyOrganizationUtility_o *)(v165 + 4), (int64_t)v155, v156, v157, v158, v159, v160, v161);
    }
    y = v382;
    z = v381;
  }
  v166 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                        v137,
                                                        v138,
                                                        v139);
  System_Collections_Generic_List_object____ctor(
    v166,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 1, ParticipantVals, 0LL);
  if ( !v166 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v166,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v167 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 19, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v166,
    (System_Collections_Generic_IEnumerable_T__o *)v167,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v168 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 39, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v166,
    (System_Collections_Generic_IEnumerable_T__o *)v168,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !WarBoardPieceData__get_isMaster(v71, 0LL) )
  {
    v198 = sub_1BCAA2C(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v169, v170, v171);
    System_Object___ctor((Il2CppObject *)v198, 0LL);
    if ( v198 )
    {
      *(_QWORD *)(v198 + 32) = v60;
      v205 = (Il2CppObject **)(v198 + 32);
      sub_1BCA784((PartyOrganizationUtility_o *)(v198 + 32), v60, v199, v200, v201, v202, v203, v204);
      System_Collections_Generic_List_object___AddRange(
        v93,
        (System_Collections_Generic_IEnumerable_T__o *)v166,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      lengthOnEncount = this->fields.lengthOnEncount;
      v209 = x * lengthOnEncount;
      v210 = v386 - (float)(x * lengthOnEncount);
      v211 = y * lengthOnEncount;
      v212 = z * lengthOnEncount;
      v213 = v75 + v209;
      v214 = v384 - v211;
      v215 = v76 + v211;
      v216 = v77 + v212;
      v217 = v383 - v212;
      if ( !byte_4B109C4 )
      {
        sub_1BCA7E0(&System_Math_TypeInfo, v206, v207);
        byte_4B109C4 = 1;
      }
      v218 = v210 - v213;
      v219 = v214 - v215;
      v220 = v217 - v216;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v206);
      v221 = sqrtf((float)(v220 * v220) + (float)((float)(v218 * v218) + (float)(v219 * v219)));
      if ( v221 <= 0.00001 )
      {
        if ( !byte_4B109C1 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v206, v207);
          byte_4B109C1 = 1;
        }
        v225 = UnityEngine_Vector3_TypeInfo->static_fields;
        v222 = v225->zeroVector.fields.x;
        v223 = v225->zeroVector.fields.y;
        v224 = v225->zeroVector.fields.z;
      }
      else
      {
        v222 = v218 / v221;
        v223 = v219 / v221;
        v224 = v220 / v221;
      }
      if ( !byte_4B109C3 )
      {
        sub_1BCA7E0(&System_Math_TypeInfo, v206, v207);
        byte_4B109C3 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v206);
      Instance = ((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._35_GetIconLocalPosition.method)(
                   this,
                   this->klass->vtable._36_OnShowDamagePopup.methodPtr);
      v104 = (WarBoardTaskBase_TaskCallback_c **)(v60 + 24);
      if ( *v205 )
      {
        monitor = (*v205)[1].monitor;
        if ( monitor )
        {
          v228 = monitor[6];
          if ( v228 )
          {
            Instance = *(_QWORD *)(v228 + 80);
            if ( Instance )
            {
              v229 = v226;
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
              v231 = *(_QWORD *)(v198 + 32);
              *(float *)(v198 + 16) = ZoomSize;
              if ( v231 )
              {
                v232 = *(_QWORD *)(v231 + 24);
                if ( v232 )
                {
                  v233 = *(_QWORD *)(v232 + 48);
                  if ( v233 )
                  {
                    Instance = *(_QWORD *)(v233 + 72);
                    if ( Instance )
                    {
                      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0LL);
                      v236 = *(_QWORD *)(v198 + 32);
                      *(UnityEngine_Vector2_o *)(v198 + 20) = ScrlPos;
                      if ( v236 )
                      {
                        v237 = *(WarBoardManager_o **)(v236 + 24);
                        *(_QWORD *)&v391.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        v238 = v213 + (float)((float)(v221 * v222) * 0.5);
                        v239 = (float)(v215 + (float)((float)(v221 * v223) * 0.5)) + v229;
                        *(_QWORD *)&v391.fields.hasValue = &v388;
                        v394.fields.x = v238;
                        v394.fields.y = v239;
                        v394.fields.z = v216 + (float)((float)(v221 * v224) * 0.5);
                        *(_QWORD *)&v388.fields.hasValue = 0LL;
                        *(_QWORD *)&v388.fields.value.fields.y = 0LL;
                        System_Nullable_Vector3____ctor(v391, v394, v234);
                        encountCameraSize = this->fields.encountCameraSize;
                        p_size = (System_Nullable_float__o)&size;
                        size = 0LL;
                        System_Nullable_float____ctor(
                          p_size,
                          encountCameraSize,
                          (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
                        if ( v237 )
                        {
                          v390 = size;
                          Instance = (int64_t)WarBoardManager__GetCameraPerformanceTask(v237, v388, v390, 1, 0, 1, 0LL);
                          v247 = v93->fields._items;
                          v248 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                          ++v93->fields._version;
                          if ( v247 )
                          {
                            v249 = v93->fields._size;
                            v250 = Instance;
                            if ( (unsigned int)v249 >= v247->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v93,
                                (Il2CppObject *)Instance,
                                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v251 = &v247->obj.klass + v249;
                              v93->fields._size = v249 + 1;
                              v251[4] = (Il2CppClass *)v250;
                              sub_1BCA784(
                                (PartyOrganizationUtility_o *)(v251 + 4),
                                v250,
                                v241,
                                v242,
                                v243,
                                v244,
                                v245,
                                v246);
                            }
                            if ( *v205 )
                            {
                              Instance = (int64_t)(*v205)[1].monitor;
                              if ( Instance )
                              {
                                v395.fields.x = v238;
                                v395.fields.y = v239;
                                v395.fields.z = v216 + (float)((float)(v221 * v224) * 0.5);
                                Instance = (int64_t)WarBoardManager__CreateEncountkEffectTask(
                                                      (WarBoardManager_o *)Instance,
                                                      v395,
                                                      1,
                                                      0LL);
                                v318 = WarBoardPieceBaseComponent___c_TypeInfo;
                                this = (WarBoardPieceBaseComponent_o *)Instance;
                                if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, v62);
                                  v318 = WarBoardPieceBaseComponent___c_TypeInfo;
                                }
                                _9__63_1 = v318->static_fields->__9__63_1;
                                if ( !_9__63_1 )
                                {
                                  if ( !v318->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v318, v62);
                                    v318 = WarBoardPieceBaseComponent___c_TypeInfo;
                                  }
                                  v320 = (Il2CppObject *)v318->static_fields->__9;
                                  _9__63_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v62, v312, v313);
                                  System_Action___ctor(
                                    _9__63_1,
                                    v320,
                                    Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__,
                                    0LL);
                                  v321 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  v321->__9__63_1 = _9__63_1;
                                  sub_1BCA784(
                                    (PartyOrganizationUtility_o *)&v321->__9__63_1,
                                    (int64_t)_9__63_1,
                                    v322,
                                    v323,
                                    v324,
                                    v325,
                                    v326,
                                    v327);
                                }
                                if ( this )
                                {
                                  this->fields.currentActionPointLabel = (struct UILabel_o *)_9__63_1;
                                  sub_1BCA784(
                                    (PartyOrganizationUtility_o *)&this->fields.currentActionPointLabel,
                                    (int64_t)_9__63_1,
                                    v312,
                                    v313,
                                    v314,
                                    v315,
                                    v316,
                                    v317);
                                  p_breakPointParent = &this->fields.breakPointParent;
                                  breakPointParent = (System_Delegate_o *)this->fields.breakPointParent;
                                  v333 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(
                                                                              WarBoardTaskBase_TaskCallback_TypeInfo,
                                                                              v330,
                                                                              v331,
                                                                              v332);
                                  WarBoardTaskBase_TaskCallback___ctor(
                                    v333,
                                    (Il2CppObject *)v198,
                                    Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
                                    0LL);
                                  v334 = System_Delegate__Combine(breakPointParent, (System_Delegate_o *)v333, 0LL);
                                  v115 = (WarBoardPieceBaseComponent_c *)v334;
                                  if ( v334 )
                                  {
                                    v341 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v334->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
                                      goto LABEL_152;
                                    *p_breakPointParent = (struct UIWidget_o *)v334;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v334->klass != v341 )
                                      goto LABEL_152;
                                  }
                                  else
                                  {
                                    *p_breakPointParent = 0LL;
                                  }
                                  sub_1BCA784(
                                    (PartyOrganizationUtility_o *)&this->fields.breakPointParent,
                                    (int64_t)v334,
                                    v335,
                                    v336,
                                    v337,
                                    v338,
                                    v339,
                                    v340);
                                  v348 = v93->fields._items;
                                  v349 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                                  ++v93->fields._version;
                                  if ( v348 )
                                  {
                                    v350 = v93->fields._size;
                                    if ( (unsigned int)v350 >= v348->max_length )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        v93,
                                        (Il2CppObject *)this,
                                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v349[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v351 = &v348->obj.klass + v350;
                                      v93->fields._size = v350 + 1;
                                      v351[4] = (Il2CppClass *)this;
                                      sub_1BCA784(
                                        (PartyOrganizationUtility_o *)(v351 + 4),
                                        (int64_t)this,
                                        v342,
                                        v343,
                                        v344,
                                        v345,
                                        v346,
                                        v347);
                                    }
                                    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                                          v93,
                                                          0,
                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
                                    if ( Instance )
                                    {
                                      this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
                                      v354 = *(System_Delegate_o **)(Instance + 32);
                                      v355 = *v205;
                                      v356 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(
                                                                                  WarBoardTaskBase_TaskCallback_TypeInfo,
                                                                                  v62,
                                                                                  v352,
                                                                                  v353);
                                      WarBoardTaskBase_TaskCallback___ctor(
                                        v356,
                                        v355,
                                        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
                                        0LL);
                                      v357 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(
                                                                               v354,
                                                                               (System_Delegate_o *)v356,
                                                                               0LL);
                                      v115 = v357;
                                      if ( v357 )
                                      {
                                        v358 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                        if ( v357->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo )
                                          goto LABEL_152;
                                        this->klass = v357;
                                        if ( v357->_1.image != v358 )
                                          goto LABEL_152;
                                      }
                                      else
                                      {
                                        this->klass = 0LL;
                                      }
                                      v310 = (PartyOrganizationUtility_o *)this;
                                      v311 = (int64_t)v115;
                                      goto LABEL_140;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_157:
    sub_1BCAA3C(Instance, v62);
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v173 = v75 + (float)(x * lengthMoveAttack);
  v174 = v76 + (float)(y * lengthMoveAttack);
  v175 = v77 + (float)(z * lengthMoveAttack);
  v176 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v177 = this->fields.pixelPerSecond;
  v178 = v176;
  v182 = (WarBoardMovePerformance_o *)sub_1BCAA2C(WarBoardMovePerformance_TypeInfo, v179, v180, v181);
  v393.fields.x = v173;
  v393.fields.y = v174;
  v393.fields.z = v175;
  v397.fields.x = v75;
  v397.fields.y = v76;
  v397.fields.z = v77;
  v183 = (int64_t)v182;
  WarBoardMovePerformance___ctor(v182, v178, v393, v397, v177, 4, 0LL);
  v185 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                  v71,
                                                                  0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v184);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  v104 = (WarBoardTaskBase_TaskCallback_c **)(v60 + 24);
  if ( !*v385 )
    goto LABEL_157;
  v186 = (WarBoardMessageMaster_o *)Instance;
  Instance = (int64_t)(*v385)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_157;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0LL);
  v191 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                        v188,
                                                        v189,
                                                        v190);
  System_Collections_Generic_List_object____ctor(
    v191,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = v71->fields._breakPoint_k__BackingField;
  Instance = WarBoardPieceData__get_isPlayerMaster(v71, 0LL);
  if ( !v186 )
    goto LABEL_157;
  if ( (Instance & 1) != 0 )
  {
    v193 = 11;
    v194 = 1;
    v195 = v186;
    v196 = id;
    v197 = breakPoint_k__BackingField;
  }
  else
  {
    v193 = 9;
    v195 = v186;
    v196 = id;
    v197 = breakPoint_k__BackingField;
    v194 = 0;
  }
  Instance = (int64_t)WarBoardMessageMaster__GetMessageTasks(v195, v196, v193, v197, v194, 0LL);
  v252 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( !Instance )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v166,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v252,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v93,
      v252,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = sub_1BCA888(WarBoardTaskBase___TypeInfo, 5LL);
  if ( !Instance )
    goto LABEL_157;
  v259 = (WarBoardTaskBase_array *)Instance;
  if ( v183 )
  {
    Instance = sub_1BCA91C(v183, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_159;
  }
  if ( !v259->max_length )
    goto LABEL_158;
  v259->m_Items[0] = (WarBoardTaskBase_o *)v183;
  sub_1BCA784((PartyOrganizationUtility_o *)v259->m_Items, v183, v253, v254, v255, v256, v257, v258);
  Instance = (int64_t)v71->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  v260 = *v385;
  Instance = (*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 856LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 864LL));
  if ( !v260 )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__CreateAttackEffectTask(v260, *(UnityEngine_Vector3_o *)&v261, 0, 0LL);
  v270 = Instance;
  if ( Instance )
  {
    Instance = sub_1BCA91C(Instance, v259->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v259->max_length <= 1 )
    goto LABEL_158;
  v259->m_Items[1] = (WarBoardTaskBase_o *)v270;
  sub_1BCA784((PartyOrganizationUtility_o *)&v259->m_Items[1], v270, v264, v265, v266, v267, v268, v269);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v277 = Instance;
  if ( Instance )
  {
    Instance = sub_1BCA91C(Instance, v259->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v259->max_length <= 2 )
    goto LABEL_158;
  v259->m_Items[2] = (WarBoardTaskBase_o *)v277;
  sub_1BCA784((PartyOrganizationUtility_o *)&v259->m_Items[2], v277, v271, v272, v273, v274, v275, v276);
  Instance = (int64_t)v71->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)Instance,
                        (System_String_o *)StringLiteral_9026/*"MasterDamage"*/,
                        v278);
  v285 = Instance;
  if ( Instance )
  {
    Instance = sub_1BCA91C(Instance, v259->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v259->max_length <= 3 )
    goto LABEL_158;
  v259->m_Items[3] = (WarBoardTaskBase_o *)v285;
  sub_1BCA784((PartyOrganizationUtility_o *)&v259->m_Items[3], v285, v279, v280, v281, v282, v283, v284);
  v289 = (WarBoardOrthostichySchedule_o *)sub_1BCAA2C(WarBoardOrthostichySchedule_TypeInfo, v286, v287, v288);
  WarBoardOrthostichySchedule___ctor_36382188(v289, v185, 0LL);
  if ( v289 )
  {
    Instance = sub_1BCA91C(v289, v259->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_159:
      v380 = sub_1BCAA60();
      sub_1BCA908(v380, 0LL);
    }
  }
  if ( v259->max_length <= 4 )
LABEL_158:
    sub_1BCAA44(Instance, v62);
  v259->m_Items[4] = (WarBoardTaskBase_o *)v289;
  sub_1BCA784((PartyOrganizationUtility_o *)&v259->m_Items[4], (int64_t)v289, v290, v291, v292, v293, v294, v295);
  v299 = (WarBoardParallelSchedule_o *)sub_1BCAA2C(WarBoardParallelSchedule_TypeInfo, v296, v297, v298);
  WarBoardParallelSchedule___ctor(v299, v259, 0LL);
  v306 = v93->fields._items;
  v307 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v93->fields._version;
  if ( !v306 )
    goto LABEL_157;
  v308 = v93->fields._size;
  if ( (unsigned int)v308 >= v306->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v93,
      (Il2CppObject *)v299,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v307[4] + 192LL) + 112LL));
    goto LABEL_141;
  }
  v309 = &v306->obj.klass + v308;
  v93->fields._size = v308 + 1;
  v309[4] = (Il2CppClass *)v299;
  v310 = (PartyOrganizationUtility_o *)(v309 + 4);
  v311 = (int64_t)v299;
LABEL_140:
  sub_1BCA784(v310, v311, v300, v301, v302, v303, v304, v305);
LABEL_141:
  if ( v93->fields._size < 1 )
    return;
  Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v93,
                        0,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
  if ( !Instance )
    goto LABEL_157;
  this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
  v361 = *(System_Delegate_o **)(Instance + 32);
  v362 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, v62);
    v362 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__63_4 = v362->static_fields->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( !v362->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v362, v62);
      v362 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v364 = (Il2CppObject *)v362->static_fields->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v62, v359, v360);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v364, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0LL);
    v365 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v365->__9__63_4 = _9__63_4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v365->__9__63_4, (int64_t)_9__63_4, v366, v367, v368, v369, v370, v371);
  }
  v372 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(v361, (System_Delegate_o *)_9__63_4, 0LL);
  v115 = v372;
  if ( !v372 )
    goto LABEL_153;
  v379 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( v372->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo || (this->klass = v372, v372->_1.image != v379) )
  {
LABEL_152:
    sub_1BCACFC(v115);
LABEL_153:
    this->klass = v115;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)this, (int64_t)v115, v373, v374, v375, v376, v377, v378);
  Instance = (int64_t)*v104;
  if ( !*v104 )
    goto LABEL_157;
  WarBoardManager__AddTask_36181556(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v93,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttackResume(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  WarBoardData_o *Instance; // x0
  __int64 v8; // x1
  WarBoardManager_o *v9; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v11; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v15; // x2
  float v16; // s11
  float v17; // s12
  float v18; // s13
  float v19; // s8
  float v20; // s15
  float v21; // s14
  float v22; // s11
  float v23; // s12
  float v24; // s13
  float v25; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s8
  __int64 v28; // x1
  WarBoardControlUiDataComponent_c *v29; // x0
  float v30; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13BDC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, v5, v6);
    byte_4B13BDC = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v9 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_27;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36054544(Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v11 = (WarBoardPieceData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v9, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v32 = WarBoardManager__GetSquarePosition(v9, squareIndex, 0LL);
  v16 = v32.fields.x;
  v17 = v32.fields.y;
  v18 = v32.fields.z;
  if ( !byte_4B109C3 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v8, v15);
    byte_4B109C3 = 1;
  }
  v30 = x;
  v19 = v16 - x;
  v20 = v17 - y;
  v21 = v18 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v8, v15);
    byte_4B109C4 = 1;
  }
  Instance = (WarBoardData_o *)System_Math_TypeInfo;
  v22 = sqrtf((float)(v21 * v21) + (float)((float)(v19 * v19) + (float)(v20 * v20)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
  if ( v22 <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      Instance = (WarBoardData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v8, v15);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v23 = static_fields->zeroVector.fields.x;
    v24 = static_fields->zeroVector.fields.y;
    v25 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v23 = v19 / v22;
    v24 = v20 / v22;
    v25 = v21 / v22;
  }
  if ( !v11 )
    goto LABEL_27;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v11, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  Instance = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Instance = (WarBoardData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL)) == 0LL )
  {
LABEL_27:
    sub_1BCAA3C(Instance, v8);
  }
  v33.fields.x = v30 + (float)(v23 * (float)(v22 - lengthOnAttack));
  v33.fields.y = y + (float)(v24 * (float)(v22 - lengthOnAttack));
  v33.fields.z = z + (float)(v25 * (float)(v22 - lengthOnAttack));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v33, 0LL);
  v29 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v28);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v29);
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
  WarBoardPieceBaseComponent_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Instance; // x25
  const MethodInfo_36C2D28 *v22; // x2
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  WarBoardPieceBaseComponent_o *v32; // x1
  Il2CppClass **v33; // x0
  WarBoardTaskBase_array *v34; // x26
  Il2CppObject *v35; // x27
  const MethodInfo_36C2D28 *v36; // x2
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  WarBoardPieceBaseComponent_o *v43; // x24
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v45; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x10
  __int64 v47; // x0
  System_Nullable_Vector3__o v48; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v49; // 0:x3.8
  System_Nullable_float__o v50; // 0:x3.8
  System_Nullable_Vector3__o v51; // 0:x0.16
  System_Nullable_Vector3__o v52; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  v14 = this;
  if ( (byte_4B13BE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&oldBreakPoint, cameraSize);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18);
    this = (WarBoardPieceBaseComponent_o *)sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v19, v20);
    byte_4B13BE3 = 1;
  }
  if ( cameraMove )
  {
    this = (WarBoardPieceBaseComponent_o *)v14->fields.pieceData;
    if ( !this )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v51.fields.hasValue = &v48;
          *(_QWORD *)&v48.fields.hasValue = 0LL;
          *(_QWORD *)&v48.fields.value.fields.y = 0LL;
          *(_QWORD *)&v51.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v51, localPosition, v22);
          if ( Instance )
          {
            v49 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)Instance,
                                                     v48,
                                                     v49,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
            items = taskList->fields._items;
            v30 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              v32 = this;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)this,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v33[4] = (Il2CppClass *)v32;
                sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v32, v23, v24, v25, v26, v27, v28);
              }
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v34 = (WarBoardTaskBase_array *)sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
        v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
        if ( this )
        {
          v54 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v52.fields.hasValue = &v48;
          v48 = (System_Nullable_Vector3__o)0LL;
          *(_QWORD *)&v52.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v52, v54, v36);
          if ( v35 )
          {
            v50 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)v35,
                                                     v48,
                                                     v50,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
            if ( v34 )
            {
              v43 = this;
              if ( this )
              {
                this = (WarBoardPieceBaseComponent_o *)sub_1BCA91C(this, v34->obj.klass->_1.element_class);
                if ( !this )
                {
                  v47 = sub_1BCAA60();
                  sub_1BCA908(v47, 0LL);
                }
              }
              if ( !v34->max_length )
LABEL_34:
                sub_1BCAA44(this, *(_QWORD *)&oldBreakPoint);
              v34->m_Items[0] = (WarBoardTaskBase_o *)v43;
              sub_1BCA784((PartyOrganizationUtility_o *)v34->m_Items, (int64_t)v43, v37, v38, v39, v40, v41, v42);
              if ( Instance )
              {
                WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v34, 0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
LABEL_32:
      sub_1BCAA3C(this, *(_QWORD *)&oldBreakPoint);
    }
  }
LABEL_21:
  pieceData = v14->fields.pieceData;
  if ( !pieceData )
    goto LABEL_32;
  v45 = 0LL;
  if ( dummyPoint < 0 )
    dummyPoint = pieceData->fields._breakPoint_k__BackingField;
  while ( (int)v45 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v14->fields.breakPoints;
    if ( !breakPoints )
      goto LABEL_32;
    if ( (unsigned int)v45 >= breakPoints->max_length )
      goto LABEL_34;
    this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v45];
    if ( this )
    {
      if ( (int)v45 >= oldBreakPoint || dummyPoint > (int)v45 )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          dummyPoint > (int)v45,
          0,
          (const MethodInfo *)taskList);
      }
      else
      {
        WarBoardBreakPointComponent__OnBreak(
          (WarBoardBreakPointComponent_o *)this,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)taskList,
          startCallback,
          (const MethodInfo *)taskList);
        startCallback = 0LL;
      }
      pieceData = v14->fields.pieceData;
      ++v45;
      if ( pieceData )
        continue;
    }
    goto LABEL_32;
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
    sub_1BCAA3C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  int v7; // w8
  const MethodInfo *v8; // x2

  if ( (byte_4B13BD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13BD8 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1BCAA3C(Instance, v6);
  v7 = dispPriotiry - WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v7, v8);
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
  WarBoardTaskBase_TaskCallback_o *v4; // x29
  WarBoardTaskBase_TaskCallback_c **v5; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x19
  WarBoardPieceData_o *Instance; // x0
  WarBoardPieceData_o *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  WarBoardPieceData_o **v48; // x20
  WarBoardPieceData_o *Piece_36054544; // x0
  WarBoardPieceData_o **v50; // x23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x8
  WarBoardSquareData_o *Square; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  int64_t v68; // x25
  __int64 v69; // x2
  __int64 v70; // x3
  System_Collections_Generic_List_object__o *v71; // x24
  System_Delegate_o *v72; // x26
  WarBoardTaskBase_TaskCallback_o *v73; // x27
  System_Delegate_o *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x8
  WarBoardTaskBase_TaskCallback_c *v82; // x1
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x29
  struct WarBoardPieceData_o *v95; // x8
  UnityEngine_GameObject_o *v96; // x26
  float v97; // s0
  float v98; // s1
  float v99; // s2
  float v100; // s8
  float v101; // s9
  float v102; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float z; // s14
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  WarBoardMovePerformance_o *v110; // x0
  int64_t v111; // x27
  __int64 v112; // x2
  __int64 v113; // x3
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  WarBoardTaskBase_array *v120; // x26
  UnityEngine_GameObject_o *v121; // x27
  float v122; // s0
  float v123; // s1
  float v124; // s2
  struct WarBoardPieceData_o *v125; // x8
  float v126; // s8
  float v127; // s9
  float v128; // s10
  float v129; // s13
  float v130; // s11
  float v131; // s12
  float v132; // s14
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x3
  WarBoardMovePerformance_o *v136; // x0
  int64_t v137; // x28
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  __int64 v153; // x2
  __int64 v154; // x3
  System_Delegate_o *v155; // x27
  WarBoardTaskBase_TaskCallback_o *v156; // x28
  System_Delegate_o *v157; // x0
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  WarBoardTaskBase_TaskCallback_c *v164; // x1
  System_Delegate_o *v165; // x28
  System_Delegate_o *v166; // x0
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  WarBoardTaskBase_TaskCallback_c *v173; // x1
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  struct System_Object_array *items; // x8
  _QWORD *v181; // x9
  __int64 size; // x10
  Il2CppClass **v183; // x0
  struct WarBoardPieceData_o *v184; // x8
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  struct System_Object_array *v191; // x8
  _QWORD *v192; // x9
  __int64 v193; // x10
  Il2CppClass **v194; // x0
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  struct System_Object_array *v201; // x8
  _QWORD *v202; // x9
  __int64 v203; // x10
  Il2CppClass **v204; // x0
  __int64 v205; // x1
  __int64 v206; // x2
  __int64 v207; // x3
  System_Collections_Generic_List_object__o *v208; // x22
  System_Int32_array *PieceEventVals; // x0
  int64_t v210; // x2
  int32_t v211; // w3
  System_String_o *v212; // x4
  BattleSetupInfo_o *v213; // x5
  FollowerInfo_o *v214; // x6
  PartyListViewItem_o *v215; // x7
  System_Int32_array *v216; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v218; // x0
  WarBoardManager_o *v219; // x20
  WarBoardTaskBase_array *v220; // x21
  __int64 v221; // x1
  __int64 v222; // x2
  __int64 v223; // x3
  int64_t v224; // x22
  __int64 v225; // x1
  __int64 v226; // x2
  __int64 v227; // x3
  WarBoardTaskBase_TaskCallback_o *v228; // x23
  int64_t v229; // x2
  int32_t v230; // w3
  System_String_o *v231; // x4
  BattleSetupInfo_o *v232; // x5
  FollowerInfo_o *v233; // x6
  PartyListViewItem_o *v234; // x7
  int64_t v235; // x2
  int32_t v236; // w3
  System_String_o *v237; // x4
  BattleSetupInfo_o *v238; // x5
  FollowerInfo_o *v239; // x6
  PartyListViewItem_o *v240; // x7
  __int64 v241; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v243; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v244; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v245; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v246; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v247; // 0:s3.4,4:s4.4,8:s5.4

  LODWORD(v5) = squareIndex;
  if ( (byte_4B13BD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__, v21, v22);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__, v23, v24);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__, v25, v26);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__, v27, v28);
    sub_1BCA7E0(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v31, v32);
    sub_1BCA7E0(&WarBoardMovePerformance_TypeInfo, v33, v34);
    sub_1BCA7E0(&WarBoardParallelSchedule_TypeInfo, v35, v36);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v37, v38);
    byte_4B13BD9 = 1;
  }
  v39 = sub_1BCAA2C(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, *(_QWORD *)&squareIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v39 )
    goto LABEL_83;
  *(_QWORD *)(v39 + 48) = Instance;
  v48 = (WarBoardPieceData_o **)(v39 + 48);
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 48), (int64_t)Instance, v42, v43, v44, v45, v46, v47);
  if ( !*(_QWORD *)(v39 + 48) )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v39 + 48) + 440LL);
  if ( !Instance )
    goto LABEL_83;
  Piece_36054544 = WarBoardData__GetPiece_36054544((WarBoardData_o *)Instance, (int32_t)v5, 0LL);
  *(_QWORD *)(v39 + 40) = Piece_36054544;
  v50 = (WarBoardPieceData_o **)(v39 + 40);
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 40), (int64_t)Piece_36054544, v51, v52, v53, v54, v55, v56);
  v57 = *(_QWORD *)(v39 + 48);
  if ( !v57 )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(v57 + 440);
  if ( !Instance )
    goto LABEL_83;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, (int32_t)v5, 0LL);
  *(_QWORD *)(v39 + 16) = Square;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 16), (int64_t)Square, v59, v60, v61, v62, v63, v64);
  v68 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v65, v66, v67);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v68, 0LL, 0LL);
  if ( !v68 )
    goto LABEL_83;
  v71 = (System_Collections_Generic_List_object__o *)(v68 + 32);
  v72 = *(System_Delegate_o **)(v68 + 32);
  v73 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v41, v69, v70);
  WarBoardTaskBase_TaskCallback___ctor(
    v73,
    (Il2CppObject *)v39,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0LL);
  v74 = System_Delegate__Combine(v72, (System_Delegate_o *)v73, 0LL);
  v81 = (int64_t)v74;
  if ( v74 )
  {
    v82 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v74->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v71->klass = (System_Collections_Generic_List_object__c *)v74;
    if ( (WarBoardTaskBase_TaskCallback_c *)v74->klass != v82 )
      goto LABEL_44;
  }
  else
  {
    v71->klass = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 32), (int64_t)v74, v75, v76, v77, v78, v79, v80);
  Instance = (WarBoardPieceData_o *)sub_1BCA888(int___TypeInfo, 2LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_83;
  v41 = Instance;
  if ( !Instance )
    goto LABEL_83;
  groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
  if ( !groupId_k__BackingField
    || (Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField,
        groupId_k__BackingField == 1) )
  {
LABEL_84:
    sub_1BCAA44(Instance, v41);
  }
  Instance->fields._currentActionCount_k__BackingField = (int)v5;
  *(_QWORD *)(v39 + 24) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 24), (int64_t)Instance, v83, v84, v85, v86, v87, v88);
  v71 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v91,
                                                       v92,
                                                       v93);
  System_Collections_Generic_List_object____ctor(
    v71,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v94 = *(_QWORD *)(v39 + 40);
  Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v95 = this->fields.pieceData;
  if ( !v95 )
    goto LABEL_83;
  v96 = (UnityEngine_GameObject_o *)Instance;
  Instance = *(WarBoardPieceData_o **)(v39 + 48);
  if ( !Instance )
    goto LABEL_83;
  *(UnityEngine_Vector3_o *)&v97 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     v95->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v48;
  if ( !*v48 )
    goto LABEL_83;
  v100 = v97;
  v101 = v98;
  v102 = v99;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v5, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v110 = (WarBoardMovePerformance_o *)sub_1BCAA2C(WarBoardMovePerformance_TypeInfo, v107, v108, v109);
  v243.fields.x = v100;
  v243.fields.y = v101;
  v243.fields.z = v102;
  v246.fields.x = x;
  v246.fields.y = y;
  v246.fields.z = z;
  v111 = (int64_t)v110;
  WarBoardMovePerformance___ctor(v110, v96, v243, v246, pixelPerSecond, 0, 0LL);
  if ( v94 )
  {
    Instance = (WarBoardPieceData_o *)sub_1BCA888(WarBoardTaskBase___TypeInfo, 3LL);
    if ( !Instance )
      goto LABEL_83;
    v120 = (WarBoardTaskBase_array *)Instance;
    if ( v111 )
    {
      Instance = (WarBoardPieceData_o *)sub_1BCA91C(v111, Instance->klass->_1.element_class);
      if ( !Instance )
        goto LABEL_85;
    }
    if ( !v120->max_length )
      goto LABEL_84;
    v120->m_Items[0] = (WarBoardTaskBase_o *)v111;
    sub_1BCA784((PartyOrganizationUtility_o *)v120->m_Items, v111, v114, v115, v116, v117, v118, v119);
    Instance = *v50;
    v4 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( *v50 )
    {
      Instance = (WarBoardPieceData_o *)WarBoardPieceData__get_gameObject(Instance, 0LL);
      if ( *v48 )
      {
        v121 = (UnityEngine_GameObject_o *)Instance;
        *(UnityEngine_Vector3_o *)&v122 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)*v48,
                                            (int32_t)v5,
                                            0LL);
        v125 = this->fields.pieceData;
        if ( v125 )
        {
          Instance = *v48;
          if ( *v48 )
          {
            v126 = v122;
            v127 = v123;
            v128 = v124;
            v244 = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v125->fields._nowSquareIndex_k__BackingField,
                     0LL);
            v129 = this->fields.pixelPerSecond;
            v130 = v244.fields.x;
            v131 = v244.fields.y;
            v132 = v244.fields.z;
            v136 = (WarBoardMovePerformance_o *)sub_1BCAA2C(WarBoardMovePerformance_TypeInfo, v133, v134, v135);
            v245.fields.x = v126;
            v245.fields.y = v127;
            v245.fields.z = v128;
            v247.fields.x = v130;
            v247.fields.y = v131;
            v247.fields.z = v132;
            v137 = (int64_t)v136;
            WarBoardMovePerformance___ctor(v136, v121, v245, v247, v129, 0, 0LL);
            if ( !v137
              || (Instance = (WarBoardPieceData_o *)sub_1BCA91C(v137, v120->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v120->max_length <= 1 )
                goto LABEL_84;
              v120->m_Items[1] = (WarBoardTaskBase_o *)v137;
              sub_1BCA784((PartyOrganizationUtility_o *)&v120->m_Items[1], v137, v138, v139, v140, v141, v142, v143);
              Instance = (WarBoardPieceData_o *)sub_1BCA91C(v68, v120->obj.klass->_1.element_class);
              if ( Instance )
              {
                if ( v120->max_length <= 2 )
                  goto LABEL_84;
                v120->m_Items[2] = (WarBoardTaskBase_o *)v68;
                sub_1BCA784((PartyOrganizationUtility_o *)&v120->m_Items[2], v68, v144, v145, v146, v147, v148, v149);
                v68 = sub_1BCAA2C(WarBoardParallelSchedule_TypeInfo, v150, v151, v152);
                WarBoardParallelSchedule___ctor((WarBoardParallelSchedule_o *)v68, v120, 0LL);
                if ( !v68 )
                  goto LABEL_83;
                v72 = (System_Delegate_o *)(v68 + 40);
                v155 = *(System_Delegate_o **)(v68 + 40);
                v156 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(
                                                            WarBoardTaskBase_TaskCallback_TypeInfo,
                                                            v41,
                                                            v153,
                                                            v154);
                WarBoardTaskBase_TaskCallback___ctor(
                  v156,
                  (Il2CppObject *)v39,
                  Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
                  0LL);
                v157 = System_Delegate__Combine(v155, (System_Delegate_o *)v156, 0LL);
                v81 = (int64_t)v157;
                if ( !v157 )
                  goto LABEL_45;
                v164 = WarBoardTaskBase_TaskCallback_TypeInfo;
                if ( (WarBoardTaskBase_TaskCallback_c *)v157->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
                {
                  v72->klass = (System_Delegate_c *)v157;
                  if ( (WarBoardTaskBase_TaskCallback_c *)v157->klass == v164 )
                  {
LABEL_46:
                    sub_1BCA784((PartyOrganizationUtility_o *)v72, v81, v158, v159, v160, v161, v162, v163);
                    if ( !v71 )
                      goto LABEL_83;
                    items = v71->fields._items;
                    v181 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                    ++v71->fields._version;
                    if ( !items )
                      goto LABEL_83;
                    size = v71->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v71,
                        (Il2CppObject *)v68,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v183 = &items->obj.klass + size;
                      v71->fields._size = size + 1;
                      v183[4] = (Il2CppClass *)v68;
                      sub_1BCA784((PartyOrganizationUtility_o *)(v183 + 4), v68, v174, v175, v176, v177, v178, v179);
                    }
                    v184 = this->fields.pieceData;
                    if ( !v184 )
                      goto LABEL_83;
                    Instance = *v50;
                    if ( !*v50 )
                      goto LABEL_83;
                    WarBoardPieceData__SetSquareIndex(Instance, v184->fields._nowSquareIndex_k__BackingField, 0LL);
                    goto LABEL_64;
                  }
                }
LABEL_44:
                sub_1BCACFC(v81);
LABEL_45:
                v72->klass = (System_Delegate_c *)v81;
                goto LABEL_46;
              }
            }
LABEL_85:
            v241 = sub_1BCAA60();
            sub_1BCA908(v241, 0LL);
          }
        }
      }
    }
LABEL_83:
    sub_1BCAA3C(Instance, v41);
  }
  if ( !v111 )
    goto LABEL_83;
  v50 = (WarBoardPieceData_o **)(unsigned int)v5;
  v72 = (System_Delegate_o *)(v111 + 40);
  v165 = *(System_Delegate_o **)(v111 + 40);
  v5 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v4 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v41, v112, v113);
  WarBoardTaskBase_TaskCallback___ctor(
    v4,
    (Il2CppObject *)v39,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
    0LL);
  v166 = System_Delegate__Combine(v165, (System_Delegate_o *)v4, 0LL);
  v81 = (int64_t)v166;
  if ( v166 )
  {
    v173 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v166->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v72->klass = (System_Delegate_c *)v166;
    v4 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v5) = (_DWORD)v50;
    if ( (WarBoardTaskBase_TaskCallback_c *)v166->klass != v173 )
      goto LABEL_44;
  }
  else
  {
    v72->klass = 0LL;
    v4 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v5) = (_DWORD)v50;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 40), (int64_t)v166, v167, v168, v169, v170, v171, v172);
  v50 = (WarBoardPieceData_o **)(v39 + 40);
  if ( !v71 )
    goto LABEL_83;
  v191 = v71->fields._items;
  v192 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v71->fields._version;
  if ( !v191 )
    goto LABEL_83;
  v193 = v71->fields._size;
  if ( (unsigned int)v193 >= v191->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v71,
      (Il2CppObject *)v111,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
  }
  else
  {
    v194 = &v191->obj.klass + v193;
    v71->fields._size = v193 + 1;
    v194[4] = (Il2CppClass *)v111;
    sub_1BCA784((PartyOrganizationUtility_o *)(v194 + 4), v111, v185, v186, v187, v188, v189, v190);
  }
  v201 = v71->fields._items;
  v202 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v71->fields._version;
  if ( !v201 )
    goto LABEL_83;
  v203 = v71->fields._size;
  if ( (unsigned int)v203 >= v201->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v71,
      (Il2CppObject *)v68,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
  }
  else
  {
    v204 = &v201->obj.klass + v203;
    v71->fields._size = v203 + 1;
    v204[4] = (Il2CppClass *)v68;
    sub_1BCA784((PartyOrganizationUtility_o *)(v204 + 4), v68, v195, v196, v197, v198, v199, v200);
  }
LABEL_64:
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  WarBoardPieceData__SetSquareIndex(Instance, (int32_t)v5, 0LL);
  v208 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                        v205,
                                                        v206,
                                                        v207);
  System_Collections_Generic_List_object____ctor(
    v208,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(Instance, 0LL);
  *(_QWORD *)(v39 + 32) = PieceEventVals;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)PieceEventVals, v210, v211, v212, v213, v214, v215);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      30,
                                      *(System_Int32_array **)(v39 + 32),
                                      0LL);
  if ( !v208 )
    goto LABEL_83;
  System_Collections_Generic_List_object___AddRange(
    v208,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( *v50 )
  {
    v216 = WarBoardPieceData__CreatePieceEventVals(*v50, 0LL);
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 30, v216, 0LL);
    System_Collections_Generic_List_object___AddRange(
      v208,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v218 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 36, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v208,
    (System_Collections_Generic_IEnumerable_T__o *)v218,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v208,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = *v48;
    if ( !*v48 )
      goto LABEL_83;
    WarBoardManager__AddTask_36181556(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v208,
      0LL);
  }
  Instance = *v48;
  if ( !*v48 )
    goto LABEL_83;
  WarBoardManager__AddTask_36181556(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v71,
    0LL);
  v219 = *(WarBoardManager_o **)(v39 + 48);
  v220 = (WarBoardTaskBase_array *)sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
  v224 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v221, v222, v223);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v224, 0LL, 0LL);
  v228 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(v4->klass, v225, v226, v227);
  WarBoardTaskBase_TaskCallback___ctor(
    v228,
    (Il2CppObject *)v39,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
    0LL);
  if ( !v224 )
    goto LABEL_83;
  *(_QWORD *)(v224 + 32) = v228;
  sub_1BCA784((PartyOrganizationUtility_o *)(v224 + 32), (int64_t)v228, v229, v230, v231, v232, v233, v234);
  if ( !v220 )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)sub_1BCA91C(v224, v220->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_85;
  if ( !v220->max_length )
    goto LABEL_84;
  v220->m_Items[0] = (WarBoardTaskBase_o *)v224;
  sub_1BCA784((PartyOrganizationUtility_o *)v220->m_Items, v224, v235, v236, v237, v238, v239, v240);
  if ( !v219 )
    goto LABEL_83;
  WarBoardManager__AddTask(v219, 0, v220, 0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)Instance, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  const MethodInfo *v7; // x2

  if ( (byte_4B13BD7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13BD7 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1BCAA3C(Instance, v5);
  v6 = WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL) - this->fields.dispPriotiry;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v6, v7);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B13BE5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19021/*"ef_dm_base"*/, popText, *(_QWORD *)&popTextColor);
    byte_4B13BE5 = 1;
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x23
  WarBoardData_o *Instance; // x0
  __int64 v34; // x1
  WarBoardManager_o *v35; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardWallData_o *v37; // x21
  float x; // s8
  float y; // s10
  float z; // s15
  float v41; // s0
  float v42; // s1
  float v43; // s2
  float v44; // s11
  float v45; // s9
  float v46; // s13
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Collections_Generic_List_object__o *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  int64_t v60; // x24
  __int64 v61; // x2
  __int64 v62; // x3
  _QWORD *v63; // x25
  System_Delegate_o *v64; // x26
  WarBoardTaskBase_TaskCallback_o *v65; // x27
  System_Delegate_o *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x8
  WarBoardTaskBase_TaskCallback_c *v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  float v87; // s12
  float v88; // s14
  float v89; // s8
  float v90; // s9
  float v91; // s11
  float v92; // s13
  float v93; // s1
  float v94; // s2
  float v95; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v97; // s0
  float v98; // s8
  float v99; // s11
  float v100; // s12
  float v101; // s15
  float v102; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s14
  UnityEngine_GameObject_o *v105; // x24
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  WarBoardMovePerformance_o *v109; // x0
  Il2CppObject *v110; // x23
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  float lengthMoveAttack; // s0
  float v122; // s1
  float v123; // s2
  float v124; // s0
  float v125; // s8
  float v126; // s9
  float v127; // s10
  UnityEngine_GameObject_o *v128; // x0
  float v129; // s14
  UnityEngine_GameObject_o *v130; // x22
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x3
  WarBoardMovePerformance_o *v134; // x0
  int64_t v135; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v136; // x22
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  System_Collections_Generic_List_object__o *v140; // x23
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  WarBoardTaskBase_array *v147; // x23
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  int64_t v154; // x21
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int64_t v161; // x21
  __int64 v162; // x1
  __int64 v163; // x2
  __int64 v164; // x3
  WarBoardOrthostichySchedule_o *v165; // x21
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  __int64 v172; // x1
  __int64 v173; // x2
  __int64 v174; // x3
  WarBoardParallelSchedule_o *v175; // x21
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  struct System_Object_array *v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  Il2CppClass **v185; // x0
  __int64 v186; // x0
  float v187; // [xsp+8h] [xbp-A8h]
  float v188; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v190; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v191; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v193; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v194; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B13BDE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__, v18, v19);
    sub_1BCA7E0(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v22, v23);
    sub_1BCA7E0(&WarBoardMovePerformance_TypeInfo, v24, v25);
    sub_1BCA7E0(&WarBoardOrthostichySchedule_TypeInfo, v26, v27);
    sub_1BCA7E0(&WarBoardParallelSchedule_TypeInfo, v28, v29);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v30, v31);
    byte_4B13BDE = 1;
  }
  v32 = sub_1BCAA2C(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, *(_QWORD *)&squareIndex, method, v3);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  v35 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardData__GetWall(Instance, squareIndex, 0, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_64;
  v37 = (WarBoardWallData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v35, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  *(UnityEngine_Vector3_o *)&v41 = WarBoardManager__GetSquarePosition(v35, squareIndex, 0LL);
  Instance = v35->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_64;
  v44 = v41;
  v45 = v42;
  v46 = v43;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0LL);
  if ( !v32 )
    goto LABEL_64;
  *(_QWORD *)(v32 + 16) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)Instance, v47, v48, v49, v50, v51, v52);
  v56 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v53,
                                                       v54,
                                                       v55);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v60 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v57, v58, v59);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v60, 0LL, 0LL);
  if ( !v60 )
    goto LABEL_64;
  v63 = (_QWORD *)(v60 + 32);
  v64 = *(System_Delegate_o **)(v60 + 32);
  v65 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v34, v61, v62);
  WarBoardTaskBase_TaskCallback___ctor(
    v65,
    (Il2CppObject *)v32,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0LL);
  v66 = System_Delegate__Combine(v64, (System_Delegate_o *)v65, 0LL);
  v73 = (int64_t)v66;
  if ( v66 )
  {
    v74 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v66->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v63 = v66;
      if ( (WarBoardTaskBase_TaskCallback_c *)v66->klass == v74 )
        goto LABEL_14;
    }
    sub_1BCACFC(v66);
  }
  *v63 = v73;
LABEL_14:
  sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 32), v73, v67, v68, v69, v70, v71, v72);
  if ( !v56 )
    goto LABEL_64;
  items = v56->fields._items;
  v82 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v56->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v56->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v56,
      (Il2CppObject *)v60,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = &items->obj.klass + size;
    v56->fields._size = size + 1;
    v84[4] = (Il2CppClass *)v60;
    sub_1BCA784((PartyOrganizationUtility_o *)(v84 + 4), v60, v75, v76, v77, v78, v79, v80);
  }
  if ( !byte_4B109C3 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v85, v86);
    byte_4B109C3 = 1;
  }
  v87 = x;
  v88 = v44 - x;
  v89 = v45 - y;
  v90 = v46 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v85);
  if ( !byte_4B109C4 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v85, v86);
    byte_4B109C4 = 1;
  }
  v91 = sqrtf((float)(v90 * v90) + (float)((float)(v88 * v88) + (float)(v89 * v89)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v85);
  v92 = z;
  if ( v91 <= 0.00001 )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v85, v86);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v93 = static_fields->zeroVector.fields.x;
    v94 = static_fields->zeroVector.fields.y;
    v95 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v93 = v88 / v91;
    v94 = v89 / v91;
    v95 = v90 / v91;
  }
  v97 = v91 - this->fields.lengthOnAttack;
  if ( v97 <= 0.0 )
  {
    v99 = v87;
    v100 = y;
  }
  else
  {
    v187 = v94;
    v188 = v93;
    v98 = v87;
    v99 = v87 + (float)(v93 * v97);
    v100 = y + (float)(v94 * v97);
    v101 = y;
    v102 = v92;
    v92 = v92 + (float)(v95 * v97);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v105 = gameObject;
    v109 = (WarBoardMovePerformance_o *)sub_1BCAA2C(WarBoardMovePerformance_TypeInfo, v106, v107, v108);
    v190.fields.x = v98;
    v190.fields.y = v101;
    v190.fields.z = v102;
    v193.fields.x = v99;
    v193.fields.y = v100;
    v193.fields.z = v92;
    v110 = (Il2CppObject *)v109;
    WarBoardMovePerformance___ctor(v109, v105, v190, v193, pixelPerSecond, 5, 0LL);
    v117 = v56->fields._items;
    v118 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v56->fields._version;
    if ( !v117 )
      goto LABEL_64;
    v119 = v56->fields._size;
    if ( (unsigned int)v119 >= v117->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v56,
        v110,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
    }
    else
    {
      v120 = &v117->obj.klass + v119;
      v56->fields._size = v119 + 1;
      v120[4] = (Il2CppClass *)v110;
      sub_1BCA784((PartyOrganizationUtility_o *)(v120 + 4), (int64_t)v110, v111, v112, v113, v114, v115, v116);
    }
    v94 = v187;
    v93 = v188;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v122 = v93 * lengthMoveAttack;
  v123 = v94 * lengthMoveAttack;
  v124 = v95 * lengthMoveAttack;
  v125 = v99 + v122;
  v126 = v100 + v123;
  v127 = v92 + v124;
  v128 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v129 = this->fields.pixelPerSecond;
  v130 = v128;
  v134 = (WarBoardMovePerformance_o *)sub_1BCAA2C(WarBoardMovePerformance_TypeInfo, v131, v132, v133);
  v191.fields.x = v125;
  v191.fields.y = v126;
  v191.fields.z = v127;
  v194.fields.x = v99;
  v194.fields.y = v100;
  v194.fields.z = v92;
  v135 = (int64_t)v134;
  WarBoardMovePerformance___ctor(v134, v130, v191, v194, v129, 4, 0LL);
  if ( !v37 )
    goto LABEL_64;
  v136 = WarBoardWallData__DecrementBreakPointPerformance(v37, 1, 0LL);
  v140 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                        v137,
                                                        v138,
                                                        v139);
  System_Collections_Generic_List_object____ctor(
    v140,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0LL, 0LL), !v140)
    || (System_Collections_Generic_List_object___AddRange(
          v140,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        System_Collections_Generic_List_object___AddRange(
          v56,
          (System_Collections_Generic_IEnumerable_T__o *)v140,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (Instance = (WarBoardData_o *)sub_1BCA888(WarBoardTaskBase___TypeInfo, 4LL)) == 0LL) )
  {
LABEL_64:
    sub_1BCAA3C(Instance, v34);
  }
  v147 = (WarBoardTaskBase_array *)Instance;
  if ( v135 )
  {
    Instance = (WarBoardData_o *)sub_1BCA91C(v135, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( !v147->max_length )
    goto LABEL_65;
  v147->m_Items[0] = (WarBoardTaskBase_o *)v135;
  sub_1BCA784((PartyOrganizationUtility_o *)v147->m_Items, v135, v141, v142, v143, v144, v145, v146);
  Instance = (WarBoardData_o *)v37->fields.component;
  if ( !Instance )
    goto LABEL_64;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0LL);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v35, IconPosition, 0, 0LL);
  v154 = (int64_t)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1BCA91C(Instance, v147->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( v147->max_length <= 1 )
    goto LABEL_65;
  v147->m_Items[1] = (WarBoardTaskBase_o *)v154;
  sub_1BCA784((PartyOrganizationUtility_o *)&v147->m_Items[1], v154, v148, v149, v150, v151, v152, v153);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v161 = (int64_t)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1BCA91C(Instance, v147->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( v147->max_length <= 2 )
    goto LABEL_65;
  v147->m_Items[2] = (WarBoardTaskBase_o *)v161;
  sub_1BCA784((PartyOrganizationUtility_o *)&v147->m_Items[2], v161, v155, v156, v157, v158, v159, v160);
  v165 = (WarBoardOrthostichySchedule_o *)sub_1BCAA2C(WarBoardOrthostichySchedule_TypeInfo, v162, v163, v164);
  WarBoardOrthostichySchedule___ctor_36382188(v165, v136, 0LL);
  if ( v165 )
  {
    Instance = (WarBoardData_o *)sub_1BCA91C(v165, v147->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_66:
      v186 = sub_1BCAA60();
      sub_1BCA908(v186, 0LL);
    }
  }
  if ( v147->max_length <= 3 )
LABEL_65:
    sub_1BCAA44(Instance, v34);
  v147->m_Items[3] = (WarBoardTaskBase_o *)v165;
  sub_1BCA784((PartyOrganizationUtility_o *)&v147->m_Items[3], (int64_t)v165, v166, v167, v168, v169, v170, v171);
  v175 = (WarBoardParallelSchedule_o *)sub_1BCAA2C(WarBoardParallelSchedule_TypeInfo, v172, v173, v174);
  WarBoardParallelSchedule___ctor(v175, v147, 0LL);
  v182 = v56->fields._items;
  v183 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v56->fields._version;
  if ( !v182 )
    goto LABEL_64;
  v184 = v56->fields._size;
  if ( (unsigned int)v184 >= v182->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v56,
      (Il2CppObject *)v175,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
  }
  else
  {
    v185 = &v182->obj.klass + v184;
    v56->fields._size = v184 + 1;
    v185[4] = (Il2CppClass *)v175;
    sub_1BCA784((PartyOrganizationUtility_o *)(v185 + 4), (int64_t)v175, v176, v177, v178, v179, v180, v181);
  }
  if ( v56->fields._size >= 1 )
    WarBoardManager__AddTask_36181556(v35, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v56, 0LL);
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
    sub_1BCAA3C(simpleAnimation, animationName);
  SimpleAnimation__Play_64539336(simpleAnimation, animationName, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__RepareBreakPointByPiece(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct WarBoardPieceData_o *pieceData; // x8
  int breakPoint_k__BackingField; // w20
  WarBoardPieceBaseComponent_o *v5; // x19
  __int64 v6; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_8:
    sub_1BCAA3C(this, method);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v5 = this;
  v6 = 0LL;
  while ( (int)v6 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v5->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v6 >= breakPoints->max_length )
        sub_1BCAA44(this, method);
      this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v6];
      if ( this )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          breakPoint_k__BackingField > (int)v6,
          0,
          v2);
        pieceData = v5->fields.pieceData;
        ++v6;
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x21
  int64_t ComponentsInChildren_object; // x0
  __int64 v19; // x1
  signed int max_length; // w8
  unsigned int v21; // w24
  UnityEngine_Component_c *v22; // x8
  int64_t v23; // x22
  unsigned __int64 v24; // x29
  UnityEngine_Object_o *v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  int64_t v35; // x1
  Il2CppClass **v36; // x0
  struct UICommonButton_o *button; // x19
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B13BCE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184, parents, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Contains__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B13BCE = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       parents,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (int64_t)parents->m_Items[v21];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (int64_t)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                 1,
                                                 (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
        if ( ComponentsInChildren_object )
        {
          v22 = *(UnityEngine_Component_c **)(ComponentsInChildren_object + 24);
          v23 = ComponentsInChildren_object;
          if ( (int)v22 >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v21 >= max_length )
          goto LABEL_24;
      }
      v24 = 0LL;
      while ( v24 < (unsigned int)v22 )
      {
        v25 = *(UnityEngine_Object_o **)(v23 + 32 + 8 * v24);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        ComponentsInChildren_object = UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
        if ( (ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_27;
          ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v25,
                                                   0LL);
          if ( !v17 )
            goto LABEL_27;
          ComponentsInChildren_object = System_Collections_Generic_List_object___Contains(
                                          v17,
                                          (Il2CppObject *)ComponentsInChildren_object,
                                          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( (ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v25,
                                                     0LL);
            items = v17->fields._items;
            v33 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v17->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v17->fields._size;
            v35 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v36[4] = (Il2CppClass *)v35;
              sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), v35, v26, v27, v28, v29, v30, v31);
            }
          }
        }
        LODWORD(v22) = *(_DWORD *)(v23 + 24);
        if ( (__int64)++v24 >= (int)v22 )
          goto LABEL_23;
      }
LABEL_28:
      sub_1BCAA44(ComponentsInChildren_object, v19);
    }
  }
LABEL_24:
  if ( !v17
    || (button = this->fields.button,
        ComponentsInChildren_object = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 v17,
                                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1BCAA3C(ComponentsInChildren_object, v19);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&button->fields.tweenTargets,
    ComponentsInChildren_object,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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

  if ( (byte_4B13BD0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    byte_4B13BD0 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0LL);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *listEffectData; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Predicate_object__o *v28; // x21
  Il2CppObject *v29; // x20
  _QWORD *monitor; // x22
  __int64 v31; // x8
  unsigned __int64 v32; // x23
  bool v33; // w19
  UnityEngine_Object_o *v34; // x21

  if ( (byte_4B13BE4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__,
      effectKey,
      isDisp);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__, v11, v12);
    sub_1BCA7E0(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, v13, v14);
    byte_4B13BE4 = 1;
  }
  v15 = sub_1BCAA2C(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, effectKey, isDisp, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_18;
  *(_QWORD *)(v15 + 16) = effectKey;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)effectKey, v18, v19, v20, v21, v22, v23);
  listEffectData = (System_Collections_Generic_List_object__o *)this->fields.listEffectData;
  v28 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo,
                                        v25,
                                        v26,
                                        v27);
  System_Predicate_object____ctor(
    v28,
    (Il2CppObject *)v15,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    0LL);
  if ( !listEffectData )
    goto LABEL_18;
  v16 = System_Collections_Generic_List_object___Find(
          listEffectData,
          (System_Predicate_T__o *)v28,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  v29 = v16;
  if ( !v16 )
    return v29 != 0LL;
  monitor = v16[1].monitor;
  if ( !monitor )
LABEL_18:
    sub_1BCAA3C(v16, v17);
  v31 = monitor[3];
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    v33 = isDisp;
    do
    {
      if ( v32 >= (unsigned int)v31 )
        sub_1BCAA44(v16, v17);
      v34 = (UnityEngine_Object_o *)monitor[v32 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      v16 = (Il2CppObject *)UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
      if ( ((unsigned __int8)v16 & 1) == 0 )
      {
        if ( !v34 )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v34, v33, 0LL);
      }
      LODWORD(v31) = *((_DWORD *)monitor + 6);
      ++v32;
    }
    while ( (__int64)v32 < (int)v31 );
  }
  return v29 != 0LL;
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

  if ( (byte_4B13BCF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    byte_4B13BCF = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__ShowActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardPieceData_o *pieceData; // x0
  struct WarBoardPieceData_o *v5; // x8
  __int64 v6; // x1
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20
  UnityEngine_GameObject_o *v8; // x20
  bool activeSelf; // w0
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x10
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13BD2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13BD2 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_25;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_isInfinitelyActable(pieceData, 0LL);
  if ( ((unsigned __int8)pieceData & 1) == 0 )
  {
    pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
    if ( !pieceData )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0LL);
  }
  v5 = this->fields.pieceData;
  if ( !v5 || (pieceData = (WarBoardPieceData_o *)v5->fields._Cost_k__BackingField) == 0LL )
LABEL_25:
    sub_1BCAA3C(pieceData, method);
  if ( WarBoardCost__get_HasCost((WarBoardCost_o *)pieceData, 0LL) )
  {
    currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0LL, 0LL) )
    {
      pieceData = (WarBoardPieceData_o *)this->fields.currentPieceActionPointRoot;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0LL);
        pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
        if ( pieceData )
        {
          v8 = this->fields.currentPieceActionPointRoot;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pieceData, 0LL);
          v10 = 112LL;
          if ( activeSelf )
            v10 = 124LL;
          if ( activeSelf )
            v11 = 120LL;
          else
            v11 = 108LL;
          if ( activeSelf )
            v12 = 116LL;
          else
            v12 = 104LL;
          v13.fields.x = *(float *)((char *)&this->klass + v12);
          v13.fields.y = *(float *)((char *)&this->klass + v11);
          v13.fields.z = *(float *)((char *)&this->klass + v10);
          GameObjectExtensions__SetLocalPosition(v8, v13, 0LL);
          goto LABEL_24;
        }
      }
      goto LABEL_25;
    }
  }
LABEL_24:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__ShowActionTarget(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_1BCAA3C(0LL, method);
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
      SimpleAnimation__Stop_64536852(simpleAnimation, animationName, 0LL);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0LL);
        return;
      }
    }
LABEL_7:
    sub_1BCAA3C(simpleAnimation, animationName);
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
  WarBoardPieceData_o *pieceData; // x0
  struct WarBoardPieceData_o *v4; // x8
  UILabel_o *currentActionPointLabel; // x20
  struct WarBoardPieceData_o *v6; // x8
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  UILabel_o *currentPieceActionPointLabel; // x20
  int32_t currentActionCount_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  currentActionCount_k__BackingField = 0;
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_isInfinitelyActable(pieceData, 0LL);
  if ( ((unsigned __int8)pieceData & 1) == 0 )
  {
    v4 = this->fields.pieceData;
    if ( !v4 )
      goto LABEL_13;
    currentActionPointLabel = this->fields.currentActionPointLabel;
    currentActionCount_k__BackingField = v4->fields._currentActionCount_k__BackingField;
    pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0LL);
    if ( !currentActionPointLabel )
      goto LABEL_13;
    UILabel__set_text(currentActionPointLabel, (System_String_o *)pieceData, 0LL);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_HasCost(pieceData, 0LL);
  if ( ((unsigned __int8)pieceData & 1) != 0 )
  {
    v6 = this->fields.pieceData;
    if ( v6 )
    {
      Cost_k__BackingField = v6->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
      {
        currentPieceActionPointLabel = this->fields.currentPieceActionPointLabel;
        currentActionCount_k__BackingField = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0LL);
        if ( currentPieceActionPointLabel )
        {
          UILabel__set_text(currentPieceActionPointLabel, (System_String_o *)pieceData, 0LL);
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_1BCAA3C(pieceData, method);
  }
LABEL_12:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiBrightnessByPieceStatus(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_HashSet_T__o *v51; // x22
  int64_t pieceData; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_HashSet_T__o **v60; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Collections_Generic_HashSet_T__o *v64; // x23
  int64_t *v65; // x22
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v75; // w23
  System_Action_object__o *v76; // x25
  System_Collections_Generic_IEnumerable_T__o *v77; // x24
  System_Action_object__o *v78; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_object__o *v80; // x25
  System_Collections_Generic_IEnumerable_T__o *v81; // x23
  System_Action_object__o *v82; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_object__o *v85; // x20
  _BOOL8 v86; // x0
  __int64 v87; // x1
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *removeTweenTargetObjects; // x23
  Il2CppObject *gameObject; // x0
  __int64 v91; // x1
  UnityEngine_GameObject_o *v92; // x0
  Il2CppObject *v93; // x1
  UnityEngine_GameObject_o *v94; // x0
  Il2CppObject *v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x1
  struct System_Object_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  Il2CppClass **v106; // x0
  struct UICommonButton_o *v107; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  System_Collections_Generic_HashSet_Enumerator_T__o v115; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v116; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13BD5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_UIWidget__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_UIWidget___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_GameObject___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_GameObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_UIWidget__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Contains__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Remove__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor___76785704, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v35, v36);
    sub_1BCA7E0(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      v37,
      v38);
    sub_1BCA7E0(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
      v39,
      v40);
    sub_1BCA7E0(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      v41,
      v42);
    sub_1BCA7E0(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
      v43,
      v44);
    sub_1BCA7E0(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, v45, v46);
    byte_4B13BD5 = 1;
  }
  memset(&v116, 0, sizeof(v116));
  v47 = sub_1BCAA2C(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v47, 0LL);
  v51 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_UIWidget__TypeInfo,
                                                     v48,
                                                     v49,
                                                     v50);
  System_Collections_Generic_HashSet_object____ctor(
    v51,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v47 )
    goto LABEL_39;
  *(_QWORD *)(v47 + 24) = v51;
  v60 = (System_Collections_Generic_HashSet_T__o **)(v47 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 24), (int64_t)v51, v54, v55, v56, v57, v58, v59);
  v64 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_UIWidget__TypeInfo,
                                                     v61,
                                                     v62,
                                                     v63);
  System_Collections_Generic_HashSet_object____ctor(
    v64,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v47 + 16) = v64;
  v65 = (int64_t *)(v47 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 16), (int64_t)v64, v66, v67, v68, v69, v70, v71);
  pieceData = (int64_t)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_39;
  pieceData = WarBoardPieceData__HasIconDarkenBuff((WarBoardPieceData_o *)pieceData, 0LL);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v75 = pieceData;
  if ( cannotActTurnDurk )
  {
    v76 = (System_Action_object__o *)sub_1BCAA2C(System_Action_UIWidget__TypeInfo, v53, v72, v73);
    System_Action_object____ctor(
      v76,
      (Il2CppObject *)v47,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      cannotActTurnDurk,
      (System_Action_T__o *)v76,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = (int64_t)this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_39;
    pieceData = WarBoardPieceData__HasVitalityToDoAnyActions((WarBoardPieceData_o *)pieceData, 0LL);
    if ( v75 & 1 | ((pieceData & 1) == 0) )
    {
      v77 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v78 = (System_Action_object__o *)sub_1BCAA2C(System_Action_UIWidget__TypeInfo, v53, v72, v73);
      System_Action_object____ctor(
        v78,
        (Il2CppObject *)v47,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        0LL);
      BasicHelper__ForEach_object_(
        v77,
        (System_Action_T__o *)v78,
        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v80 = (System_Action_object__o *)sub_1BCAA2C(System_Action_UIWidget__TypeInfo, v53, v72, v73);
    System_Action_object____ctor(
      v80,
      (Il2CppObject *)v47,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      0LL);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v80,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v75 & 1) != 0 )
    {
      v81 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v82 = (System_Action_object__o *)sub_1BCAA2C(System_Action_UIWidget__TypeInfo, v53, v72, v73);
      System_Action_object____ctor(
        v82,
        (Il2CppObject *)v47,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        0LL);
      BasicHelper__ForEach_object_(
        v81,
        (System_Action_T__o *)v82,
        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*v65 )
    goto LABEL_39;
  if ( *(int *)(*v65 + 32) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_39;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v85 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v53,
                                                       v72,
                                                       v73);
  System_Collections_Generic_List_object____ctor_56235344(
    v85,
    tweenTargets,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_GameObject___ctor___76785704);
  pieceData = *v65;
  if ( !*v65 )
    goto LABEL_39;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v115,
    (System_Collections_Generic_HashSet_T__o *)pieceData,
    (const MethodInfo_345BB30 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v116 = v115;
  while ( 1 )
  {
    v86 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v116,
            (const MethodInfo_33167AC *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v86 )
      break;
    current = v116.fields._current;
    if ( !v116.fields._current )
      sub_1BCAA3C(v86, v87);
    removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v116.fields._current,
                                   0LL);
    if ( !removeTweenTargetObjects )
      sub_1BCAA3C(gameObject, gameObject);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)removeTweenTargetObjects,
           gameObject,
           (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v93 = (Il2CppObject *)v92;
      if ( !v85 )
        sub_1BCAA3C(v92, v92);
      goto LABEL_22;
    }
    if ( !*v60 )
      sub_1BCAA3C(0LL, v91);
    if ( System_Collections_Generic_HashSet_object___Contains(
           *v60,
           current,
           (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      v117.fields.r = 0.5;
      v117.fields.g = 0.5;
      v117.fields.b = 0.5;
      v117.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v117, 0LL);
      v94 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v93 = (Il2CppObject *)v94;
      if ( !v85 )
        sub_1BCAA3C(v94, v94);
LABEL_22:
      System_Collections_Generic_List_object___Remove(
        v85,
        v93,
        (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      v118.fields.r = 1.0;
      v118.fields.g = 1.0;
      v118.fields.b = 1.0;
      v118.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v118, 0LL);
      v95 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v102 = (int64_t)v95;
      if ( !v85 )
        sub_1BCAA3C(v95, v95);
      items = v85->fields._items;
      v104 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v85->fields._version;
      if ( !items )
        sub_1BCAA3C(v95, v95);
      size = v85->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v85,
          v95,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
      }
      else
      {
        v106 = &items->obj.klass + size;
        v85->fields._size = size + 1;
        v106[4] = (Il2CppClass *)v102;
        sub_1BCA784((PartyOrganizationUtility_o *)(v106 + 4), v102, v96, v97, v98, v99, v100, v101);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v116,
    (const MethodInfo_33167A8 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v107 = this->fields.button;
  v108 = System_Linq_Enumerable__Distinct_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v85,
           (const MethodInfo_2F3012C *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (int64_t)System_Linq_Enumerable__ToArray_object_(
                         v108,
                         (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v107 )
LABEL_39:
    sub_1BCAA3C(pieceData, v53);
  v107->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_1BCA784((PartyOrganizationUtility_o *)&v107->fields.tweenTargets, pieceData, v109, v110, v111, v112, v113, v114);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiByBuffChanged(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarBoardPieceStatusLabel_o *v8; // x0

  if ( (byte_4B13BD4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13BD4 = 1;
  }
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0LL, 0LL) )
  {
    v8 = this->fields.pieceStatusLabelComponent;
    if ( !v8 )
      sub_1BCAA3C(0LL, v6);
    WarBoardPieceStatusLabel__SetupLabel(v8, this->fields.pieceData, v7);
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

  if ( (byte_4B13BE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13BE8 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1BCAA3C(Instance, v5);
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
  __int64 v6; // x2
  struct UIWidget_array *uiWidgets; // x8
  struct UIWidget_array **p_uiWidgets; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int max_length; // w21
  il2cpp_array_size_t i; // w22
  Il2CppClass **v24; // x0
  Il2CppClass *v25; // x8
  Il2CppClass *v26; // t1
  unsigned __int64 v27; // x22
  __int64 v28; // x24
  UnityEngine_Object_o *v29; // x21
  struct UIWidget_array *v30; // x8

  v4 = this;
  if ( (byte_4B13BE1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184, *(_QWORD *)&value, method);
    this = (WarBoardPieceBaseComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B13BE1 = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields.uiWidgets,
      (int64_t)ComponentsInChildren_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    uiWidgets = v4->fields.uiWidgets;
    if ( !uiWidgets )
      goto LABEL_26;
    max_length = uiWidgets->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; ++i )
      {
        if ( !uiWidgets )
          goto LABEL_26;
        if ( i >= uiWidgets->max_length )
          goto LABEL_28;
        v24 = &uiWidgets->obj.klass + (int)i;
        v26 = v24[4];
        this = (WarBoardPieceBaseComponent_o *)(v24 + 4);
        v25 = v26;
        if ( !v26 )
          goto LABEL_26;
        if ( SLODWORD(v25->_1.interfaceOffsets) >= 1001 )
        {
          this->klass = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)this, 0LL, v16, v17, v18, v19, v20, v21);
        }
        uiWidgets = *p_uiWidgets;
      }
      if ( !uiWidgets )
LABEL_26:
        sub_1BCAA3C(this, *(_QWORD *)&value);
    }
  }
  if ( (int)*(_QWORD *)&uiWidgets->max_length >= 1 )
  {
    v27 = 0LL;
    v28 = (unsigned int)*(_QWORD *)&uiWidgets->max_length - 1LL;
    while ( v27 < uiWidgets->max_length )
    {
      v29 = (UnityEngine_Object_o *)uiWidgets->m_Items[v27];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v30 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_26;
        if ( v27 >= v30->max_length )
          break;
        this = (WarBoardPieceBaseComponent_o *)v30->m_Items[v27];
        if ( !this )
          goto LABEL_26;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0LL);
      }
      if ( v28 == v27 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v27;
      if ( !*p_uiWidgets )
        goto LABEL_26;
    }
LABEL_28:
    sub_1BCAA44(this, *(_QWORD *)&value);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13BEA & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPieceBaseComponent___c_TypeInfo, v1, v2);
    byte_4B13BEA = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardPieceBaseComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardPieceBaseComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardControlUiDataComponent_c *v3; // x0

  if ( (byte_4B13BED & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, method, v2);
    byte_4B13BED = 1;
  }
  v3 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method);
  WarBoardControlUiDataComponent__ResumeUiDataAll((const MethodInfo *)v3);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_1(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B13BEB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B13BEB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.0, 0LL, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardControlUiDataComponent_c *v3; // x0

  if ( (byte_4B13BEC & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, method, v2);
    byte_4B13BEC = 1;
  }
  v3 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v3);
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
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_4B13BEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x, method);
    byte_4B13BEE = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1BCAA3C(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4B13BEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x, method);
    byte_4B13BEF = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1BCAA3C(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_4B13BF0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x, method);
    byte_4B13BF0 = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1BCAA3C(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4B13BF1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x, method);
    byte_4B13BF1 = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1BCAA3C(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
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
    sub_1BCAA3C(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4B13BF2 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, method, v2);
    byte_4B13BF2 = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, v2);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4B13BF3 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, method, v2);
    byte_4B13BF3 = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, v2);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_g__AddAfterTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v17; // x1
  WarBoardPieceData_o *targetSquarePiece; // x0
  System_Int32_array *PieceEventVals; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v21; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4B13BF4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    byte_4B13BF4 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0LL);
  if ( !v15 )
    goto LABEL_13;
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0LL);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = WarBoardManager__GetEventTasks(Instance, 38, PieceEventVals, 0LL);
    System_Collections_Generic_List_object___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_1BCAA3C(Instance, v17);
  v21 = WarBoardManager__GetEventTasks(Instance, 37, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v15,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v15,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
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
    sub_1BCAA3C(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(this, method);
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
  const MethodInfo *v2; // x2
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_4B13BF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13BF6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, v2),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
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
    sub_1BCAA3C(this, method);
  return this->fields.moveAfterActionCheck && targetPiece->fields._isDead_k__BackingField;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  WarBoardPieceData_o *targetPiece; // x0
  const MethodInfo *v20; // x2
  struct WarBoardManager_o *warBoardManager; // x8
  __int64 v22; // x1
  int32_t id; // w21
  struct WarBoardPieceData_o *v24; // x8
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v26; // x22
  int32_t v27; // w2
  bool v28; // w4
  WarBoardMessageMaster_o *v29; // x0
  int32_t v30; // w1
  int32_t v31; // w3
  System_Int32_array *v32; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v34; // x0
  WarBoardManager_o *v35; // x19

  if ( (byte_4B13BF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardMessageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v15, v16);
    byte_4B13BF5 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_25;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isMaster(targetPiece, 0LL);
  if ( ((unsigned __int8)targetPiece & 1) != 0 )
  {
    warBoardManager = this->fields.warBoardManager;
    if ( !warBoardManager )
      goto LABEL_25;
    targetPiece = (WarBoardPieceData_o *)warBoardManager->fields._warBoardData_k__BackingField;
    if ( !targetPiece )
      goto LABEL_25;
    id = WarBoardData__get_id((WarBoardData_o *)targetPiece, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v24 = this->fields.targetPiece;
    if ( !v24 )
      goto LABEL_25;
    breakPoint_k__BackingField = v24->fields._breakPoint_k__BackingField;
    v26 = (WarBoardMessageMaster_o *)targetPiece;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0LL);
    if ( !v26 )
      goto LABEL_25;
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      v27 = 12;
      v28 = 1;
      v29 = v26;
      v30 = id;
      v31 = breakPoint_k__BackingField;
    }
    else
    {
      v27 = 10;
      v29 = v26;
      v30 = id;
      v31 = breakPoint_k__BackingField;
      v28 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v29, v30, v27, v31, v28, 0LL);
    if ( !v17 )
      goto LABEL_25;
    System_Collections_Generic_List_object___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  targetPiece = (WarBoardPieceData_o *)this->fields.__4__this;
  if ( !targetPiece )
    goto LABEL_25;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceBaseComponent__GetParticipantVals(
                                         (WarBoardPieceBaseComponent_o *)targetPiece,
                                         this->fields.targetPiece,
                                         v20);
  if ( !this->fields.warBoardManager )
    goto LABEL_25;
  v32 = (System_Int32_array *)targetPiece;
  targetPiece = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                         this->fields.warBoardManager,
                                         2,
                                         (System_Int32_array *)targetPiece,
                                         0LL);
  if ( !v17 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 20, v32, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  v34 = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 40, v32, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)v34,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v17,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v35 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                           v17,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v35 )
    {
      WarBoardManager__InsertRunningTask(v35, (WarBoardTaskBase_array *)targetPiece, 0LL);
      return;
    }
LABEL_25:
    sub_1BCAA3C(targetPiece, v18);
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
    sub_1BCAA3C(0LL, method);
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
  const MethodInfo *v2; // x2
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_4B13BF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13BF8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, v2),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v17; // x1
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4B13BF7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    byte_4B13BF7 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0LL, 0LL);
  if ( !v15 )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v15,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v15,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(Instance, v17);
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
    sub_1BCAA3C(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0LL);
}