void __fastcall BattleActionLogManager___ctor(BattleActionLogManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_IO_MemoryStream_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_IO_MemoryStream_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_IO_Stream_o *header; // x20
  System_IO_BinaryWriter_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_IO_Stream_o *data; // x20
  System_IO_BinaryWriter_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B0441C & 1) == 0 )
  {
    sub_1BC3008(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1BC3008(&System_IO_MemoryStream_TypeInfo, v3);
    byte_4B0441C = 1;
  }
  v4 = (System_IO_MemoryStream_o *)sub_1BC3254(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v4, 0LL);
  this->fields.header = v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (System_IO_MemoryStream_o *)sub_1BC3254(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v7, 0LL);
  this->fields.data = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  header = (System_IO_Stream_o *)this->fields.header;
  v11 = (System_IO_BinaryWriter_o *)sub_1BC3254(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63258572(v11, header, 0LL);
  this->fields.headerWriter = v11;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.headerWriter, (int32_t)v11, v12, v13);
  data = (System_IO_Stream_o *)this->fields.data;
  v15 = (System_IO_BinaryWriter_o *)sub_1BC3254(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63258572(v15, data, 0LL);
  this->fields.dataWriter = v15;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dataWriter, (int32_t)v15, v16, v17);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall BattleActionLogManager__Finalize(BattleActionLogManager_o *this, const MethodInfo *method)
{
  BattleActionLogManager__close(this, method);
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionLogManager__addHeader(
        BattleActionLogManager_o *this,
        int32_t logType,
        const MethodInfo *method)
{
  void *headerWriter; // x0
  struct System_IO_BinaryWriter_o *v5; // x19

  headerWriter = this->fields.headerWriter;
  if ( !headerWriter
    || ((*(void (__fastcall **)(void *, int32_t, _QWORD))(*(_QWORD *)headerWriter + 584LL))(
          headerWriter,
          logType,
          *(_QWORD *)(*(_QWORD *)headerWriter + 592LL)),
        (headerWriter = this->fields.data) == 0LL)
    || (v5 = this->fields.headerWriter,
        headerWriter = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)headerWriter + 504LL))(
                                 headerWriter,
                                 *(_QWORD *)(*(_QWORD *)headerWriter + 512LL)),
        !v5) )
  {
    sub_1BC3264(headerWriter, *(_QWORD *)&logType);
  }
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v5->klass->vtable._19_Write.method)(
    v5,
    headerWriter,
    v5->klass->vtable._20_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogContinue(BattleActionLogManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  BattleActionLogManager__addHeader(this, 5, v2);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_1BC3264(0LL, v4);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
    dataWriter,
    0LL,
    dataWriter->klass->vtable._18_Write.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionLogManager__addLogSelectCommand(
        BattleActionLogManager_o *this,
        int32_t selectIndex1,
        int32_t selectIndex2,
        int32_t selectIndex3,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  BattleActionLogManager__addHeader(this, 4, *(const MethodInfo **)&selectIndex2);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter
    || (((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
          dataWriter,
          (unsigned int)selectIndex1,
          dataWriter->klass->vtable._18_Write.methodPtr),
        (dataWriter = this->fields.dataWriter) == 0LL)
    || (((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
          dataWriter,
          (unsigned int)selectIndex2,
          dataWriter->klass->vtable._18_Write.methodPtr),
        (dataWriter = this->fields.dataWriter) == 0LL) )
  {
    sub_1BC3264(dataWriter, v9);
  }
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
    dataWriter,
    (unsigned int)selectIndex3,
    dataWriter->klass->vtable._18_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogSelectTarget(
        BattleActionLogManager_o *this,
        int32_t selectIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  BattleActionLogManager__addHeader(this, 1, method);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_1BC3264(0LL, v5);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
    dataWriter,
    (unsigned int)selectIndex,
    dataWriter->klass->vtable._18_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogUseCommandSpell(
        BattleActionLogManager_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  void *dataWriter; // x0
  __int64 v6; // x1
  struct System_Int32_array *ptTarget; // x8
  __int64 v8; // x2
  struct System_Int32_array *v9; // x21
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  struct System_IO_BinaryWriter_o *v12; // x19

  BattleActionLogManager__addHeader(this, 3, method);
  if ( !task )
    goto LABEL_13;
  ptTarget = task->fields.ptTarget;
  if ( !ptTarget )
    goto LABEL_13;
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    goto LABEL_13;
  dataWriter = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)dataWriter + 584LL))(
                         dataWriter,
                         ptTarget->max_length,
                         *(_QWORD *)(*(_QWORD *)dataWriter + 592LL));
  v9 = task->fields.ptTarget;
  if ( !v9 )
    goto LABEL_13;
  v10 = *(_QWORD *)&v9->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1BC326C(dataWriter, v6, v8);
      dataWriter = this->fields.dataWriter;
      if ( !dataWriter )
        break;
      dataWriter = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)dataWriter + 584LL))(
                             dataWriter,
                             (unsigned int)v9->m_Items[v11 + 1],
                             *(_QWORD *)(*(_QWORD *)dataWriter + 592LL));
      LODWORD(v10) = v9->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_10;
    }
LABEL_13:
    sub_1BC3264(dataWriter, v6);
  }
LABEL_10:
  dataWriter = task->fields.skillInfo;
  if ( !dataWriter )
    goto LABEL_13;
  v12 = this->fields.dataWriter;
  dataWriter = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)dataWriter + 392LL))(
                         dataWriter,
                         *(_QWORD *)(*(_QWORD *)dataWriter + 400LL));
  if ( !v12 )
    goto LABEL_13;
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._17_Write.method)(
    v12,
    (unsigned int)dataWriter,
    v12->klass->vtable._18_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogUseSkill(
        BattleActionLogManager_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 ActorId; // x0
  __int64 v6; // x1
  struct System_IO_BinaryWriter_o *dataWriter; // x21
  struct System_IO_BinaryWriter_o *v8; // x21
  struct System_Int32_array *ptTarget; // x8
  __int64 v10; // x2
  struct System_Int32_array *v11; // x21
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  struct System_IO_BinaryWriter_o *v14; // x21
  struct BattleSkillInfoData_o *skillInfo; // x8

  BattleActionLogManager__addHeader(this, 2, method);
  if ( !task )
    goto LABEL_17;
  dataWriter = this->fields.dataWriter;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !dataWriter )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
    dataWriter,
    (unsigned int)ActorId,
    dataWriter->klass->vtable._18_Write.methodPtr);
  v8 = this->fields.dataWriter;
  ActorId = BattleLogicTask__getTarget(task, 0LL);
  if ( !v8 )
    goto LABEL_17;
  ActorId = ((__int64 (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
              v8,
              (unsigned int)ActorId,
              v8->klass->vtable._18_Write.methodPtr);
  ptTarget = task->fields.ptTarget;
  if ( !ptTarget )
    goto LABEL_17;
  ActorId = (__int64)this->fields.dataWriter;
  if ( !ActorId )
    goto LABEL_17;
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)ActorId + 584LL))(
              ActorId,
              ptTarget->max_length,
              *(_QWORD *)(*(_QWORD *)ActorId + 592LL));
  v11 = task->fields.ptTarget;
  if ( !v11 )
    goto LABEL_17;
  v12 = *(_QWORD *)&v11->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1BC326C(ActorId, v6, v10);
      ActorId = (__int64)this->fields.dataWriter;
      if ( !ActorId )
        break;
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)ActorId + 584LL))(
                  ActorId,
                  (unsigned int)v11->m_Items[v13 + 1],
                  *(_QWORD *)(*(_QWORD *)ActorId + 592LL));
      LODWORD(v12) = v11->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1BC3264(ActorId, v6);
  }
LABEL_12:
  ActorId = (__int64)task->fields.skillInfo;
  if ( !ActorId )
    goto LABEL_17;
  v14 = this->fields.dataWriter;
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ActorId + 392LL))(
              ActorId,
              *(_QWORD *)(*(_QWORD *)ActorId + 400LL));
  if ( !v14 )
    goto LABEL_17;
  ActorId = ((__int64 (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
              v14,
              (unsigned int)ActorId,
              v14->klass->vtable._18_Write.methodPtr);
  skillInfo = task->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_17;
  ActorId = (__int64)this->fields.dataWriter;
  if ( !ActorId )
    goto LABEL_17;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)ActorId + 584LL))(
    ActorId,
    (unsigned int)skillInfo->fields.skilllv,
    *(_QWORD *)(*(_QWORD *)ActorId + 592LL));
}


void __fastcall BattleActionLogManager__close(BattleActionLogManager_o *this, const MethodInfo *method)
{
  System_IO_Stream_o *header; // x0
  struct System_IO_BinaryWriter_o *headerWriter; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_IO_BinaryWriter_o *v7; // x0
  CGThumbnailListItem_o *p_dataWriter; // x19
  struct System_IO_BinaryWriter_o *dataWriter; // t1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  header = (System_IO_Stream_o *)this->fields.header;
  if ( !header || (System_IO_Stream__Dispose(header, 0LL), (header = (System_IO_Stream_o *)this->fields.data) == 0LL) )
    sub_1BC3264(header, method);
  System_IO_Stream__Dispose(header, 0LL);
  headerWriter = this->fields.headerWriter;
  if ( headerWriter )
  {
    ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, Il2CppMethodPointer))headerWriter->klass->vtable._5_Close.method)(
      headerWriter,
      headerWriter->klass->vtable._6_Dispose.methodPtr);
    this->fields.headerWriter = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.headerWriter, 0, v5, v6);
  }
  dataWriter = this->fields.dataWriter;
  p_dataWriter = (CGThumbnailListItem_o *)&this->fields.dataWriter;
  v7 = dataWriter;
  if ( dataWriter )
  {
    ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, Il2CppMethodPointer))v7->klass->vtable._5_Close.method)(
      v7,
      v7->klass->vtable._6_Dispose.methodPtr);
    p_dataWriter->klass = 0LL;
    sub_1BC2FAC(p_dataWriter, 0, v10, v11);
  }
}


System_Byte_array *__fastcall BattleActionLogManager__getDataRaw(
        BattleActionLogManager_o *this,
        const MethodInfo *method)
{
  struct System_IO_MemoryStream_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1BC3264(0LL, method);
  return (System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, void *))data->klass->vtable._40_ToArray.method)(
                                data,
                                data->klass[1]._1.image);
}


System_Byte_array *__fastcall BattleActionLogManager__getHeaderRaw(
        BattleActionLogManager_o *this,
        const MethodInfo *method)
{
  struct System_IO_MemoryStream_o *header; // x0

  header = this->fields.header;
  if ( !header )
    sub_1BC3264(0LL, method);
  return (System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, void *))header->klass->vtable._40_ToArray.method)(
                                header,
                                header->klass[1]._1.image);
}


void __fastcall BattleActionLogManager__setData(
        BattleActionLogManager_o *this,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_1BC3264(0LL, buffer);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, System_Byte_array *, Il2CppMethodPointer))dataWriter->klass->vtable._10_Write.method)(
    dataWriter,
    buffer,
    dataWriter->klass->vtable._11_Write.methodPtr);
}


void __fastcall BattleActionLogManager__setHeader(
        BattleActionLogManager_o *this,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *headerWriter; // x0

  headerWriter = this->fields.headerWriter;
  if ( !headerWriter )
    sub_1BC3264(0LL, buffer);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, System_Byte_array *, Il2CppMethodPointer))headerWriter->klass->vtable._10_Write.method)(
    headerWriter,
    buffer,
    headerWriter->klass->vtable._11_Write.methodPtr);
}