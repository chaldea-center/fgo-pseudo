void BattleActionLogManager___ctor(BattleActionLogManager_o *this, const MethodInfo *method)
{
  System_IO_MemoryStream_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_IO_MemoryStream_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_IO_Stream_o *header; // x20
  System_IO_BinaryWriter_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_IO_Stream_o *data; // x20
  System_IO_BinaryWriter_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C4546C & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    byte_4C4546C = 1;
  }
  v3 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v3, 0);
  this->fields.header = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v6, 0);
  this->fields.data = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
  header = (System_IO_Stream_o *)this->fields.header;
  v10 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64472960(v10, header, 0);
  this->fields.headerWriter = v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.headerWriter, (int32_t)v10, v11, v12);
  data = (System_IO_Stream_o *)this->fields.data;
  v14 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64472960(v14, data, 0);
  this->fields.dataWriter = v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dataWriter, (int32_t)v14, v15, v16);
}


// positive sp value has been detected, the output may be wrong!
void BattleActionLogManager__Finalize(BattleActionLogManager_o *this, const MethodInfo *method)
{
  BattleActionLogManager__close(this, method);
  System_Object__Finalize((Il2CppObject *)this, 0);
}


void BattleActionLogManager__addHeader(BattleActionLogManager_o *this, int32_t logType, const MethodInfo *method)
{
  void *headerWriter; // x0
  struct System_IO_BinaryWriter_o *v5; // x19

  headerWriter = this->fields.headerWriter;
  if ( !headerWriter
    || ((*(void (__fastcall **)(void *, int32_t, _QWORD))(*(_QWORD *)headerWriter + 584LL))(
          headerWriter,
          logType,
          *(_QWORD *)(*(_QWORD *)headerWriter + 592LL)),
        (headerWriter = this->fields.data) == 0)
    || (v5 = this->fields.headerWriter,
        headerWriter = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)headerWriter + 504LL))(
                                 headerWriter,
                                 *(_QWORD *)(*(_QWORD *)headerWriter + 512LL)),
        !v5) )
  {
    sub_1C372B4(headerWriter);
  }
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, void *, const MethodInfo *))v5->klass->vtable._19_Write.methodPtr)(
    v5,
    headerWriter,
    v5->klass->vtable._19_Write.method);
}


void BattleActionLogManager__addLogContinue(BattleActionLogManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  BattleActionLogManager__addHeader(this, 5, v2);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))dataWriter->klass->vtable._17_Write.methodPtr)(
    dataWriter,
    0,
    dataWriter->klass->vtable._17_Write.method);
}


// local variable allocation has failed, the output may be wrong!
void BattleActionLogManager__addLogSelectCommand(
        BattleActionLogManager_o *this,
        int32_t selectIndex1,
        int32_t selectIndex2,
        int32_t selectIndex3,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  BattleActionLogManager__addHeader(this, 4, *(const MethodInfo **)&selectIndex2);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter
    || (((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))dataWriter->klass->vtable._17_Write.methodPtr)(
          dataWriter,
          (unsigned int)selectIndex1,
          dataWriter->klass->vtable._17_Write.method),
        (dataWriter = this->fields.dataWriter) == 0)
    || (((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))dataWriter->klass->vtable._17_Write.methodPtr)(
          dataWriter,
          (unsigned int)selectIndex2,
          dataWriter->klass->vtable._17_Write.method),
        (dataWriter = this->fields.dataWriter) == 0) )
  {
    sub_1C372B4(dataWriter);
  }
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))dataWriter->klass->vtable._17_Write.methodPtr)(
    dataWriter,
    (unsigned int)selectIndex3,
    dataWriter->klass->vtable._17_Write.method);
}


void BattleActionLogManager__addLogSelectTarget(
        BattleActionLogManager_o *this,
        int32_t selectIndex,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  BattleActionLogManager__addHeader(this, 1, method);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))dataWriter->klass->vtable._17_Write.methodPtr)(
    dataWriter,
    (unsigned int)selectIndex,
    dataWriter->klass->vtable._17_Write.method);
}


void BattleActionLogManager__addLogUseCommandSpell(
        BattleActionLogManager_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  void *dataWriter; // x0
  struct System_Int32_array *ptTarget; // x8
  struct System_Int32_array *v7; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  struct System_IO_BinaryWriter_o *v10; // x19

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
                         LODWORD(ptTarget->max_length),
                         *(_QWORD *)(*(_QWORD *)dataWriter + 592LL));
  v7 = task->fields.ptTarget;
  if ( !v7 )
    goto LABEL_13;
  max_length = v7->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C372BC(dataWriter);
      dataWriter = this->fields.dataWriter;
      if ( !dataWriter )
        break;
      dataWriter = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)dataWriter + 584LL))(
                             dataWriter,
                             (unsigned int)v7->m_Items[v9],
                             *(_QWORD *)(*(_QWORD *)dataWriter + 592LL));
      LODWORD(max_length) = v7->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_10;
    }
LABEL_13:
    sub_1C372B4(dataWriter);
  }
LABEL_10:
  dataWriter = task->fields.skillInfo;
  if ( !dataWriter )
    goto LABEL_13;
  v10 = this->fields.dataWriter;
  dataWriter = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)dataWriter + 392LL))(
                         dataWriter,
                         *(_QWORD *)(*(_QWORD *)dataWriter + 400LL));
  if ( !v10 )
    goto LABEL_13;
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v10->klass->vtable._17_Write.methodPtr)(
    v10,
    (unsigned int)dataWriter,
    v10->klass->vtable._17_Write.method);
}


void BattleActionLogManager__addLogUseSkill(
        BattleActionLogManager_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 ActorId; // x0
  struct System_IO_BinaryWriter_o *dataWriter; // x21
  struct System_IO_BinaryWriter_o *v7; // x21
  struct System_Int32_array *ptTarget; // x8
  struct System_Int32_array *v9; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x22
  struct System_IO_BinaryWriter_o *v12; // x21
  struct BattleSkillInfoData_o *skillInfo; // x8

  BattleActionLogManager__addHeader(this, 2, method);
  if ( !task )
    goto LABEL_17;
  dataWriter = this->fields.dataWriter;
  ActorId = BattleLogicTask__getActorId(task, 0);
  if ( !dataWriter )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))dataWriter->klass->vtable._17_Write.methodPtr)(
    dataWriter,
    (unsigned int)ActorId,
    dataWriter->klass->vtable._17_Write.method);
  v7 = this->fields.dataWriter;
  ActorId = BattleLogicTask__getTarget(task, 0);
  if ( !v7 )
    goto LABEL_17;
  ActorId = ((__int64 (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
              v7,
              (unsigned int)ActorId,
              v7->klass->vtable._17_Write.method);
  ptTarget = task->fields.ptTarget;
  if ( !ptTarget )
    goto LABEL_17;
  ActorId = (__int64)this->fields.dataWriter;
  if ( !ActorId )
    goto LABEL_17;
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)ActorId + 584LL))(
              ActorId,
              LODWORD(ptTarget->max_length),
              *(_QWORD *)(*(_QWORD *)ActorId + 592LL));
  v9 = task->fields.ptTarget;
  if ( !v9 )
    goto LABEL_17;
  max_length = v9->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C372BC(ActorId);
      ActorId = (__int64)this->fields.dataWriter;
      if ( !ActorId )
        break;
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)ActorId + 584LL))(
                  ActorId,
                  (unsigned int)v9->m_Items[v11],
                  *(_QWORD *)(*(_QWORD *)ActorId + 592LL));
      LODWORD(max_length) = v9->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        goto LABEL_12;
    }
LABEL_17:
    sub_1C372B4(ActorId);
  }
LABEL_12:
  ActorId = (__int64)task->fields.skillInfo;
  if ( !ActorId )
    goto LABEL_17;
  v12 = this->fields.dataWriter;
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ActorId + 392LL))(
              ActorId,
              *(_QWORD *)(*(_QWORD *)ActorId + 400LL));
  if ( !v12 )
    goto LABEL_17;
  ActorId = ((__int64 (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v12->klass->vtable._17_Write.methodPtr)(
              v12,
              (unsigned int)ActorId,
              v12->klass->vtable._17_Write.method);
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


void BattleActionLogManager__close(BattleActionLogManager_o *this, const MethodInfo *method)
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
  if ( !header || (System_IO_Stream__Dispose(header, 0), (header = (System_IO_Stream_o *)this->fields.data) == 0) )
    sub_1C372B4(header);
  System_IO_Stream__Dispose(header, 0);
  headerWriter = this->fields.headerWriter;
  if ( headerWriter )
  {
    ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, const MethodInfo *))headerWriter->klass->vtable._5_Close.methodPtr)(
      headerWriter,
      headerWriter->klass->vtable._5_Close.method);
    this->fields.headerWriter = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.headerWriter, 0, v5, v6);
  }
  dataWriter = this->fields.dataWriter;
  p_dataWriter = (CGThumbnailListItem_o *)&this->fields.dataWriter;
  v7 = dataWriter;
  if ( dataWriter )
  {
    ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, const MethodInfo *))v7->klass->vtable._5_Close.methodPtr)(
      v7,
      v7->klass->vtable._5_Close.method);
    p_dataWriter->klass = 0;
    sub_1C36FFC(p_dataWriter, 0, v10, v11);
  }
}


System_Byte_array *BattleActionLogManager__getDataRaw(BattleActionLogManager_o *this, const MethodInfo *method)
{
  struct System_IO_MemoryStream_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C372B4(0);
  return (System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))data->klass->vtable._40_ToArray.methodPtr)(
                                data,
                                data->klass->vtable._40_ToArray.method);
}


System_Byte_array *BattleActionLogManager__getHeaderRaw(BattleActionLogManager_o *this, const MethodInfo *method)
{
  struct System_IO_MemoryStream_o *header; // x0

  header = this->fields.header;
  if ( !header )
    sub_1C372B4(0);
  return (System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))header->klass->vtable._40_ToArray.methodPtr)(
                                header,
                                header->klass->vtable._40_ToArray.method);
}


void BattleActionLogManager__setData(
        BattleActionLogManager_o *this,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, System_Byte_array *, const MethodInfo *))dataWriter->klass->vtable._10_Write.methodPtr)(
    dataWriter,
    buffer,
    dataWriter->klass->vtable._10_Write.method);
}


void BattleActionLogManager__setHeader(
        BattleActionLogManager_o *this,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *headerWriter; // x0

  headerWriter = this->fields.headerWriter;
  if ( !headerWriter )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, System_Byte_array *, const MethodInfo *))headerWriter->klass->vtable._10_Write.methodPtr)(
    headerWriter,
    buffer,
    headerWriter->klass->vtable._10_Write.method);
}