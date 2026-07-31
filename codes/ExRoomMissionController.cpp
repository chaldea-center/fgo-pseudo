void ExRoomMissionController___ctor(
        ExRoomMissionController_o *this,
        IExRoomMissionRepository_o *repository,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5932DAA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ExRoomMissionListOutput__TypeInfo);
    byte_5932DAA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ExRoomMissionListOutput__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput___ctor__);
  this->fields.outputs = (struct System_Collections_Generic_List_ExRoomMissionListOutput__o *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.outputs, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.exRoomMissionRepository = repository;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)repository, v12, v13, v14, v15, v16, v17);
}


void ExRoomMissionController__ApplyReceivedResult(
        ExRoomMissionController_o *this,
        ExRoomMissionReceiveOutput_o *result,
        const MethodInfo *method)
{
  ExRoomMissionController_o *v4; // x20
  struct System_Int32_array *ReceivedMissionIds_k__BackingField; // x8
  unsigned __int64 v6; // x22
  unsigned __int64 max_length_low; // x9
  int32_t v8; // w21
  int32_t v9; // w25
  struct IExRoomMissionRepository_o *exRoomMissionRepository; // x8

  v4 = this;
  if ( (byte_5932DB1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    this = (ExRoomMissionController_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    byte_5932DB1 = 1;
  }
  if ( result )
  {
    ReceivedMissionIds_k__BackingField = result->fields._ReceivedMissionIds_k__BackingField;
    if ( ReceivedMissionIds_k__BackingField )
    {
      v6 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(ReceivedMissionIds_k__BackingField->max_length);
        if ( (__int64)v6 >= (int)max_length_low )
          break;
        if ( v6 >= max_length_low )
          sub_21FFED4(this);
        this = (ExRoomMissionController_o *)v4->fields.outputs;
        if ( this )
        {
          v8 = 0;
          v9 = ReceivedMissionIds_k__BackingField->m_Items[v6];
          while ( 1 )
          {
            if ( v8 >= SLODWORD(this->fields.outputs) )
              goto LABEL_19;
            this = (ExRoomMissionController_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v8,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
            if ( !this )
              goto LABEL_20;
            exRoomMissionRepository = this->fields.exRoomMissionRepository;
            if ( !exRoomMissionRepository )
              goto LABEL_20;
            if ( LODWORD(exRoomMissionRepository[1].klass) == v9 )
              break;
            this = (ExRoomMissionController_o *)v4->fields.outputs;
            ++v8;
            if ( !this )
              goto LABEL_20;
          }
          this = (ExRoomMissionController_o *)v4->fields.outputs;
          if ( this )
          {
            this = (ExRoomMissionController_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v8,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
            if ( this )
            {
              HIDWORD(this[1].klass) = 4;
LABEL_19:
              ReceivedMissionIds_k__BackingField = result->fields._ReceivedMissionIds_k__BackingField;
              ++v6;
              if ( ReceivedMissionIds_k__BackingField )
                continue;
            }
          }
        }
LABEL_20:
        sub_21FFECC(this, result);
      }
    }
  }
}


int32_t ExRoomMissionController__GetStatusOrder(
        ExRoomMissionController_o *this,
        int32_t status,
        const MethodInfo *method)
{
  if ( (unsigned int)status > 4 )
    return 3;
  else
    return dword_ED0010[status];
}


// local variable allocation has failed, the output may be wrong!
int32_t ExRoomMissionController__IExRoomMissionController_AdvanceFilter(
        ExRoomMissionController_o *this,
        int32_t currentFilter,
        const MethodInfo *method)
{
  ExRoomMissionController_o *v4; // x20
  struct IExRoomMissionRepository_o *exRoomMissionRepository; // x20
  IExRoomMissionRepository_c *klass; // x8
  __int64 v7; // x9
  IExRoomMissionRepository_c **p_offset; // x10
  __int64 v9; // x0
  unsigned int v10; // w19

  v4 = this;
  if ( (byte_5932DAD & 1) == 0 )
  {
    this = (ExRoomMissionController_o *)sub_21FFC50(&IExRoomMissionRepository_TypeInfo);
    byte_5932DAD = 1;
  }
  exRoomMissionRepository = v4->fields.exRoomMissionRepository;
  if ( !exRoomMissionRepository )
    sub_21FFECC(this, *(_QWORD *)&currentFilter);
  klass = exRoomMissionRepository->klass;
  v7 = *(unsigned __int16 *)&exRoomMissionRepository->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionRepository->klass->_2.rank )
  {
    p_offset = (IExRoomMissionRepository_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionRepository_TypeInfo )
    {
      --v7;
      p_offset += 2;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 3];
  }
  else
  {
LABEL_8:
    v9 = sub_2237E2C(exRoomMissionRepository, IExRoomMissionRepository_TypeInfo, 3);
  }
  if ( (unsigned int)currentFilter < 3 )
    v10 = currentFilter + 1;
  else
    v10 = 0;
  (*(void (__fastcall **)(struct IExRoomMissionRepository_o *, _QWORD, _QWORD))v9)(
    exRoomMissionRepository,
    v10,
    *(_QWORD *)(v9 + 8));
  return v10;
}


System_Collections_Generic_List_ExRoomMissionListOutput__o *ExRoomMissionController__IExRoomMissionController_GetDisplayOutputs(
        ExRoomMissionController_o *this,
        int32_t currentFilter,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  Il2CppClass *v6; // x1
  System_String_o *v7; // x3
  void *outputs; // x0
  int32_t v9; // w22
  System_String_o *v10; // x2
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  unsigned int v15; // w8
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5932DAC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ExRoomMissionListOutput__TypeInfo);
    byte_5932DAC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ExRoomMissionListOutput__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput___ctor__);
  outputs = this->fields.outputs;
  if ( !outputs )
LABEL_21:
    sub_21FFECC(outputs, v6);
  v9 = 0;
  while ( v9 < *((_DWORD *)outputs + 6) )
  {
    outputs = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)outputs,
                v9,
                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    if ( !outputs )
      goto LABEL_21;
    v15 = *((_DWORD *)outputs + 9);
    v6 = (Il2CppClass *)outputs;
    if ( currentFilter == 3 )
    {
      if ( v15 != 4 )
        goto LABEL_20;
    }
    else if ( currentFilter == 2 )
    {
      if ( v15 > 3 )
        goto LABEL_20;
    }
    else if ( currentFilter == 1 && v15 != 3 )
    {
      goto LABEL_20;
    }
    if ( !v5 )
      goto LABEL_21;
    items = v5->fields._items;
    v17 = Method_System_Collections_Generic_List_ExRoomMissionListOutput__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_21;
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)outputs,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v19[4] = v6;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v7, v11, v12, v13, v14);
    }
LABEL_20:
    outputs = this->fields.outputs;
    ++v9;
    if ( !outputs )
      goto LABEL_21;
  }
  ExRoomMissionController__SortOutputs(
    this,
    (System_Collections_Generic_List_ExRoomMissionListOutput__o *)v5,
    currentFilter,
    (const MethodInfo *)v7);
  return (System_Collections_Generic_List_ExRoomMissionListOutput__o *)v5;
}


System_Collections_Generic_List_ExRoomMissionListOutput__o *ExRoomMissionController__IExRoomMissionController_GetDisplayOutputsUnsorted(
        ExRoomMissionController_o *this,
        int32_t currentFilter,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  Il2CppClass *v6; // x1
  void *outputs; // x0
  int32_t v8; // w22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  unsigned int v15; // w8
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5932DB3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ExRoomMissionListOutput__TypeInfo);
    byte_5932DB3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ExRoomMissionListOutput__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput___ctor__);
  outputs = this->fields.outputs;
  if ( !outputs )
LABEL_21:
    sub_21FFECC(outputs, v6);
  v8 = 0;
  while ( v8 < *((_DWORD *)outputs + 6) )
  {
    outputs = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)outputs,
                v8,
                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    if ( !outputs )
      goto LABEL_21;
    v15 = *((_DWORD *)outputs + 9);
    v6 = (Il2CppClass *)outputs;
    if ( currentFilter == 3 )
    {
      if ( v15 != 4 )
        goto LABEL_20;
    }
    else if ( currentFilter == 2 )
    {
      if ( v15 > 3 )
        goto LABEL_20;
    }
    else if ( currentFilter == 1 && v15 != 3 )
    {
      goto LABEL_20;
    }
    if ( !v5 )
      goto LABEL_21;
    items = v5->fields._items;
    v17 = Method_System_Collections_Generic_List_ExRoomMissionListOutput__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_21;
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        (Il2CppObject *)outputs,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v19[4] = v6;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
    }
LABEL_20:
    outputs = this->fields.outputs;
    ++v8;
    if ( !outputs )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ExRoomMissionListOutput__o *)v5;
}


void ExRoomMissionController__IExRoomMissionController_Initialize(
        ExRoomMissionController_o *this,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct IExRoomMissionRepository_o *exRoomMissionRepository; // x19
  System_Action_object__o *v21; // x20
  IExRoomMissionRepository_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0

  if ( (byte_5932DAB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_List_ExRoomMissionListOutput___TypeInfo);
    sub_21FFC50(&IExRoomMissionRepository_TypeInfo);
    sub_21FFC50(&Method_ExRoomMissionController___c__DisplayClass3_0__IExRoomMissionController_Initialize_b__0__);
    sub_21FFC50(&ExRoomMissionController___c__DisplayClass3_0_TypeInfo);
    byte_5932DAB = 1;
  }
  v5 = sub_21FFEBC(ExRoomMissionController___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 24) = onCompleted,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)onCompleted, v14, v15, v16, v17, v18, v19),
        exRoomMissionRepository = this->fields.exRoomMissionRepository,
        v21 = (System_Action_object__o *)sub_21FFEBC(System_Action_List_ExRoomMissionListOutput___TypeInfo),
        System_Action_object____ctor(
          v21,
          (Il2CppObject *)v5,
          Method_ExRoomMissionController___c__DisplayClass3_0__IExRoomMissionController_Initialize_b__0__,
          0),
        !exRoomMissionRepository) )
  {
    sub_21FFECC(v6, v7);
  }
  klass = exRoomMissionRepository->klass;
  v23 = *(unsigned __int16 *)&exRoomMissionRepository->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionRepository->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IExRoomMissionRepository_c **)p_offset - 1) != IExRoomMissionRepository_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_9;
    }
    v25 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_9:
    v25 = sub_2237E2C(exRoomMissionRepository, IExRoomMissionRepository_TypeInfo, 0);
  }
  (*(void (__fastcall **)(struct IExRoomMissionRepository_o *, System_Action_object__o *, _QWORD))v25)(
    exRoomMissionRepository,
    v21,
    *(_QWORD *)(v25 + 8));
}


int32_t ExRoomMissionController__IExRoomMissionController_LoadFilter(
        ExRoomMissionController_o *this,
        const MethodInfo *method)
{
  ExRoomMissionController_o *v2; // x19
  struct IExRoomMissionRepository_o *exRoomMissionRepository; // x19
  IExRoomMissionRepository_c *klass; // x8
  __int64 v5; // x9
  IExRoomMissionRepository_c **p_offset; // x10
  __int64 v7; // x0

  v2 = this;
  if ( (byte_5932DB0 & 1) == 0 )
  {
    this = (ExRoomMissionController_o *)sub_21FFC50(&IExRoomMissionRepository_TypeInfo);
    byte_5932DB0 = 1;
  }
  exRoomMissionRepository = v2->fields.exRoomMissionRepository;
  if ( !exRoomMissionRepository )
    sub_21FFECC(this, method);
  klass = exRoomMissionRepository->klass;
  v5 = *(unsigned __int16 *)&exRoomMissionRepository->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionRepository->klass->_2.rank )
  {
    p_offset = (IExRoomMissionRepository_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionRepository_TypeInfo )
    {
      --v5;
      p_offset += 2;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
  }
  else
  {
LABEL_8:
    v7 = sub_2237E2C(exRoomMissionRepository, IExRoomMissionRepository_TypeInfo, 2);
  }
  return (*(__int64 (__fastcall **)(struct IExRoomMissionRepository_o *, _QWORD))v7)(
           exRoomMissionRepository,
           *(_QWORD *)(v7 + 8));
}


// local variable allocation has failed, the output may be wrong!
void ExRoomMissionController__IExRoomMissionController_ReceiveSingle(
        ExRoomMissionController_o *this,
        int32_t missionId,
        System_Action_ExRoomMissionReceiveOutput__o *onReceived,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *outputs; // x0
  int32_t v8; // w22
  struct System_Object_array *items; // x8
  const MethodInfo *v10; // x3
  ExRoomMissionReceiveOutput_o *v11; // x20
  const MethodInfo *v12; // x6

  if ( (byte_5932DAE & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_ExRoomMissionReceiveOutput___);
    sub_21FFC50(&ExRoomMissionReceiveOutput_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    byte_5932DAE = 1;
  }
  outputs = (System_Collections_Generic_List_object__o *)this->fields.outputs;
  if ( !outputs )
    goto LABEL_10;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= outputs->fields._size )
      goto LABEL_15;
    outputs = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             outputs,
                                                             v8,
                                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__get_Item__);
    if ( !outputs )
      goto LABEL_10;
    items = outputs->fields._items;
    if ( !items )
      goto LABEL_10;
    if ( LODWORD(items->bounds) == missionId )
      break;
    outputs = (System_Collections_Generic_List_object__o *)this->fields.outputs;
    ++v8;
    if ( !outputs )
      goto LABEL_10;
  }
  if ( HIDWORD(outputs->fields._syncRoot) != 3 )
  {
LABEL_15:
    v11 = (ExRoomMissionReceiveOutput_o *)sub_21FFEBC(ExRoomMissionReceiveOutput_TypeInfo);
    ExRoomMissionReceiveOutput___ctor(v11, 0, 0, 0, 0, 0, v12);
    ActionExtensions__Call_object_(
      (System_Action_T__o *)onReceived,
      (Il2CppObject *)v11,
      (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_ExRoomMissionReceiveOutput___);
    return;
  }
  outputs = (System_Collections_Generic_List_object__o *)sub_21FFD10(int___TypeInfo, 1);
  if ( !outputs )
LABEL_10:
    sub_21FFECC(outputs, *(_QWORD *)&missionId);
  if ( !outputs->fields._size )
    sub_21FFED4(outputs);
  LODWORD(outputs->fields._syncRoot) = missionId;
  ExRoomMissionController__ReceiveAllInternal(this, (System_Int32_array *)outputs, onReceived, v10);
}


bool ExRoomMissionController__IsMatchFilter(
        ExRoomMissionController_o *this,
        int32_t status,
        int32_t filter,
        const MethodInfo *method)
{
  bool v4; // zf

  switch ( filter )
  {
    case 3:
      v4 = status == 4;
      break;
    case 2:
      return (unsigned int)status < 4;
    case 1:
      v4 = status == 3;
      break;
    default:
      return 1;
  }
  return v4;
}


void ExRoomMissionController__ReceiveAllInternal(
        ExRoomMissionController_o *this,
        System_Int32_array *missionIds,
        System_Action_ExRoomMissionReceiveOutput__o *onReceived,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct IExRoomMissionRepository_o *exRoomMissionRepository; // x20
  System_Action_object__o *v23; // x21
  IExRoomMissionRepository_c *klass; // x8
  __int64 v25; // x9
  IExRoomMissionRepository_c **p_offset; // x10
  __int64 v27; // x0

  if ( (byte_5932DAF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ExRoomMissionReceiveOutput__TypeInfo);
    sub_21FFC50(&IExRoomMissionRepository_TypeInfo);
    sub_21FFC50(&Method_ExRoomMissionController___c__DisplayClass8_0__ReceiveAllInternal_b__0__);
    sub_21FFC50(&ExRoomMissionController___c__DisplayClass8_0_TypeInfo);
    byte_5932DAF = 1;
  }
  v7 = sub_21FFEBC(ExRoomMissionController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 24) = onReceived,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)onReceived, v16, v17, v18, v19, v20, v21),
        exRoomMissionRepository = this->fields.exRoomMissionRepository,
        v23 = (System_Action_object__o *)sub_21FFEBC(System_Action_ExRoomMissionReceiveOutput__TypeInfo),
        System_Action_object____ctor(
          v23,
          (Il2CppObject *)v7,
          Method_ExRoomMissionController___c__DisplayClass8_0__ReceiveAllInternal_b__0__,
          0),
        !exRoomMissionRepository) )
  {
    sub_21FFECC(v8, v9);
  }
  klass = exRoomMissionRepository->klass;
  v25 = *(unsigned __int16 *)&exRoomMissionRepository->klass->_2.rank;
  if ( *(_WORD *)&exRoomMissionRepository->klass->_2.rank )
  {
    p_offset = (IExRoomMissionRepository_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IExRoomMissionRepository_TypeInfo )
    {
      --v25;
      p_offset += 2;
      if ( !v25 )
        goto LABEL_9;
    }
    v27 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_9:
    v27 = sub_2237E2C(exRoomMissionRepository, IExRoomMissionRepository_TypeInfo, 1);
  }
  (*(void (__fastcall **)(struct IExRoomMissionRepository_o *, System_Int32_array *, System_Action_object__o *, _QWORD))v27)(
    exRoomMissionRepository,
    missionIds,
    v23,
    *(_QWORD *)(v27 + 8));
}


// local variable allocation has failed, the output may be wrong!
void ExRoomMissionController__SortOutputs(
        ExRoomMissionController_o *this,
        System_Collections_Generic_List_ExRoomMissionListOutput__o *outputsToSort,
        int32_t filter,
        const MethodInfo *method)
{
  ExRoomMissionController___c_c *v7; // x0
  struct ExRoomMissionController___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__12_0; // x21
  Il2CppObject *v10; // x20
  struct ExRoomMissionController___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5932DB2 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_ExRoomMissionListOutput__TypeInfo);
    sub_21FFC50(&Method_ExRoomMissionController__SortOutputs_b__12_1__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__Sort__);
    sub_21FFC50(&Method_ExRoomMissionController___c__SortOutputs_b__12_0__);
    sub_21FFC50(&ExRoomMissionController___c_TypeInfo);
    byte_5932DB2 = 1;
  }
  if ( filter == 1 )
  {
    v7 = ExRoomMissionController___c_TypeInfo;
    if ( !*(&ExRoomMissionController___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ExRoomMissionController___c_TypeInfo, outputsToSort, *(_QWORD *)&filter);
      v7 = ExRoomMissionController___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__12_0 = (System_Comparison_T__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, outputsToSort, *(_QWORD *)&filter);
        static_fields = ExRoomMissionController___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ExRoomMissionListOutput__TypeInfo);
      System_Comparison_object____ctor(_9__12_0, v10, Method_ExRoomMissionController___c__SortOutputs_b__12_0__, 0);
      v11 = ExRoomMissionController___c_TypeInfo->static_fields;
      v11->__9__12_0 = (struct System_Comparison_ExRoomMissionListOutput__o *)_9__12_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__12_0, (int32_t)_9__12_0, v12, v13, v14, v15, v16, v17);
    }
    if ( !outputsToSort )
LABEL_11:
      sub_21FFECC(v7, outputsToSort);
  }
  else
  {
    _9__12_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_ExRoomMissionListOutput__TypeInfo);
    System_Comparison_object____ctor(
      _9__12_0,
      (Il2CppObject *)this,
      Method_ExRoomMissionController__SortOutputs_b__12_1__,
      0);
    if ( !outputsToSort )
      goto LABEL_11;
  }
  System_Collections_Generic_List_object___Sort_71636404(
    (System_Collections_Generic_List_object__o *)outputsToSort,
    _9__12_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__Sort__);
}


int32_t ExRoomMissionController___SortOutputs_b__12_1(
        ExRoomMissionController_o *this,
        ExRoomMissionListOutput_o *a,
        ExRoomMissionListOutput_o *b,
        const MethodInfo *method)
{
  __int64 Status_k__BackingField; // x8
  int v7; // w8
  __int64 v8; // x8
  int32_t v9; // w1
  struct EventMissionEntity_o *EventMissionEntity_k__BackingField; // x8
  struct EventMissionEntity_o *v11; // x9
  struct EventMissionEntity_o *v12; // x8
  struct EventMissionEntity_o *v13; // x9
  struct EventMissionEntity_o *v14; // x8
  struct EventMissionEntity_o *v15; // x9
  int v17; // [xsp+Ch] [xbp-14h] BYREF

  v17 = 0;
  if ( !a )
    goto LABEL_20;
  Status_k__BackingField = (unsigned int)a->fields._Status_k__BackingField;
  v7 = (unsigned int)Status_k__BackingField > 4 ? 3 : dword_ED0010[Status_k__BackingField];
  v17 = v7;
  if ( !b )
    goto LABEL_20;
  v8 = (unsigned int)b->fields._Status_k__BackingField;
  if ( (unsigned int)v8 > 4 )
    v9 = 3;
  else
    v9 = dword_ED0010[v8];
  this = (ExRoomMissionController_o *)System_Int32__CompareTo_76925088((int32_t)&v17, v9, 0);
  if ( !(_DWORD)this )
  {
    EventMissionEntity_k__BackingField = a->fields._EventMissionEntity_k__BackingField;
    if ( !EventMissionEntity_k__BackingField )
      goto LABEL_20;
    v11 = b->fields._EventMissionEntity_k__BackingField;
    if ( !v11 )
      goto LABEL_20;
    this = (ExRoomMissionController_o *)System_Int32__CompareTo_76925088(
                                          (_DWORD)EventMissionEntity_k__BackingField + 92,
                                          v11->fields.priority,
                                          0);
    if ( !(_DWORD)this )
    {
      v12 = a->fields._EventMissionEntity_k__BackingField;
      if ( !v12 )
        goto LABEL_20;
      v13 = b->fields._EventMissionEntity_k__BackingField;
      if ( !v13 )
        goto LABEL_20;
      this = (ExRoomMissionController_o *)System_Int32__CompareTo_76925088((_DWORD)v12 + 16, v13->fields.id, 0);
      if ( !(_DWORD)this )
      {
        v14 = a->fields._EventMissionEntity_k__BackingField;
        if ( v14 )
        {
          v15 = b->fields._EventMissionEntity_k__BackingField;
          if ( v15 )
          {
            LODWORD(this) = System_Int32__CompareTo_76925088((_DWORD)v14 + 32, v15->fields.dispNo, 0);
            return (int)this;
          }
        }
LABEL_20:
        sub_21FFECC(this, a);
      }
    }
  }
  return (int)this;
}


void ExRoomMissionController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932DB4 & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionController___c_TypeInfo);
    byte_5932DB4 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ExRoomMissionController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExRoomMissionController___c_TypeInfo->static_fields->__9 = (struct ExRoomMissionController___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ExRoomMissionController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomMissionController___c___ctor(ExRoomMissionController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ExRoomMissionController___c___SortOutputs_b__12_0(
        ExRoomMissionController___c_o *this,
        ExRoomMissionListOutput_o *a,
        ExRoomMissionListOutput_o *b,
        const MethodInfo *method)
{
  struct EventMissionEntity_o *EventMissionEntity_k__BackingField; // x8
  struct EventMissionEntity_o *v7; // x9
  struct EventMissionEntity_o *v8; // x8
  struct EventMissionEntity_o *v9; // x9
  struct EventMissionEntity_o *v10; // x8
  struct EventMissionEntity_o *v11; // x9

  if ( !a )
    goto LABEL_13;
  EventMissionEntity_k__BackingField = a->fields._EventMissionEntity_k__BackingField;
  if ( !EventMissionEntity_k__BackingField )
    goto LABEL_13;
  if ( !b )
    goto LABEL_13;
  v7 = b->fields._EventMissionEntity_k__BackingField;
  if ( !v7 )
    goto LABEL_13;
  this = (ExRoomMissionController___c_o *)System_Int64__CompareTo_76929328(
                                            (int64_t)&EventMissionEntity_k__BackingField->fields.startedAt,
                                            v7->fields.startedAt,
                                            0);
  if ( (_DWORD)this )
    return (int)this;
  v8 = a->fields._EventMissionEntity_k__BackingField;
  if ( !v8 )
    goto LABEL_13;
  v9 = b->fields._EventMissionEntity_k__BackingField;
  if ( !v9 )
    goto LABEL_13;
  this = (ExRoomMissionController___c_o *)System_Int32__CompareTo_76925088((_DWORD)v8 + 92, v9->fields.priority, 0);
  if ( (_DWORD)this )
    return (int)this;
  v10 = a->fields._EventMissionEntity_k__BackingField;
  if ( !v10 || (v11 = b->fields._EventMissionEntity_k__BackingField) == 0 )
LABEL_13:
    sub_21FFECC(this, a);
  LODWORD(this) = System_Int32__CompareTo_76925088((_DWORD)v10 + 32, v11->fields.dispNo, 0);
  return (int)this;
}


void ExRoomMissionController___c__DisplayClass3_0___ctor(
        ExRoomMissionController___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionController___c__DisplayClass3_0___IExRoomMissionController_Initialize_b__0(
        ExRoomMissionController___c__DisplayClass3_0_o *this,
        System_Collections_Generic_List_ExRoomMissionListOutput__o *newOutputs,
        const MethodInfo *method)
{
  ExRoomMissionController___c__DisplayClass3_0_o *v4; // x19
  struct ExRoomMissionController_o *_4__this; // x8
  struct System_Collections_Generic_List_ExRoomMissionListOutput__o *outputs; // x8
  int32_t size; // w2
  int v8; // w9
  struct ExRoomMissionController_o *v9; // x8

  v4 = this;
  if ( (byte_5932DB5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__AddRange__);
    this = (ExRoomMissionController___c__DisplayClass3_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomMissionListOutput__Clear__);
    byte_5932DB5 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  outputs = _4__this->fields.outputs;
  if ( !outputs )
    goto LABEL_12;
  size = outputs->fields._size;
  v8 = outputs->fields._version + 1;
  outputs->fields._size = 0;
  outputs->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)outputs->fields._items, 0, size, 0);
  if ( newOutputs )
  {
    v9 = v4->fields.__4__this;
    if ( v9 )
    {
      this = (ExRoomMissionController___c__DisplayClass3_0_o *)v9->fields.outputs;
      if ( this )
      {
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)this,
          (System_Collections_Generic_IEnumerable_T__o *)newOutputs,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_ExRoomMissionListOutput__AddRange__);
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_21FFECC(this, newOutputs);
  }
LABEL_11:
  ActionExtensions__Call(v4->fields.onCompleted, 0);
}


void ExRoomMissionController___c__DisplayClass8_0___ctor(
        ExRoomMissionController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomMissionController___c__DisplayClass8_0___ReceiveAllInternal_b__0(
        ExRoomMissionController___c__DisplayClass8_0_o *this,
        ExRoomMissionReceiveOutput_o *result,
        const MethodInfo *method)
{
  ExRoomMissionController_o *_4__this; // x0

  if ( (byte_5932DB6 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_ExRoomMissionReceiveOutput___);
    byte_5932DB6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, result);
  ExRoomMissionController__ApplyReceivedResult(_4__this, result, method);
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.onReceived,
    (Il2CppObject *)result,
    (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_ExRoomMissionReceiveOutput___);
}